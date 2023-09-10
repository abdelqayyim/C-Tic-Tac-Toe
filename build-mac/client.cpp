#include "Client.h"
#include <string.h>
#include <iostream>
#include "cMain.h"
using namespace std;
Client::Client() : ioContext(), socket(ioContext){
    // Other initialization code for ioContext, endpoint, etc.
}

void Client::receive_messages(boost::asio::ip::tcp::socket &socket, Game * game){
try {
            boost::asio::streambuf buffer;
            while (true) {
                boost::asio::read_until(socket, buffer, '\n');
                istream input(&buffer);
                string msg_received;
                getline(input, msg_received);
                
                // cout << "Server: " << msg_received << endl;
                cout <<"ABOUT TO PRINT RECEIVED MESSAGE"<< endl;
                cout <<msg_received<< endl;
                if (msg_received == "You are player 1") {
                    this->position = 1;
                    this->sign = 'X';
                }
                else if (msg_received == "You are player 2")
                {
                    this->position = 2;
                    this->sign = 'O';
                }
                else{
                    cout <<"NEW MESSAGE RECEIVED"<< endl;
                    
                    game->updateBoard(msg_received);
                    
                    
                }
                
                if (msg_received == "exit") {
                    break;
                }
                
                
            }
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
};
void Client::create_connection(Client * client, Game * game){
    // boost::asio::io_context ioContext;

    // boost::asio::ip::tcp::socket socket(ioContext);
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 9990);
    socket.connect(endpoint);

    std::thread receive_thread([this, &client, game]() { client->receive_messages(this->socket, game); }); // Using lambda

    receive_thread.detach();

    while (true) {
        string client_message;
        getline(cin, client_message);
        client_message += "\n";
        boost::asio::write(socket, boost::asio::buffer(client_message));
        if (client_message == "exit\n") {
            break;
        }
    }

    socket.close();
};
void Client::send_message(const std::string& message) {
    // Make a copy of the message
    std::string modifiedMessage = message;

    // Check if the copy includes '\n'
    size_t found = modifiedMessage.find("\n");
    if (found == std::string::npos) {
        modifiedMessage = modifiedMessage + "\n";
    } 
    
    // Send the modified copy
    boost::asio::write(socket, boost::asio::buffer(modifiedMessage));
}



char Client:: getSign(){
    return this->sign;
};
int Client::getPosition()
{
    return this->position;
};
void Client:: printClient(){
    cout<<"The Player sign is: ";
    cout<< this->getSign();
    cout<<" and the position is: ";
    cout<< this->getPosition()<<endl;

};
