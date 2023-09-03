#include <iostream>
#include <thread>
#include <string>
#include <boost/asio.hpp>
using namespace std;

class Client {
public:
    void receive_messages(boost::asio::ip::tcp::socket& socket) {
        try {
            boost::asio::streambuf buffer;
            while (true) {
                boost::asio::read_until(socket, buffer, '\n');
                istream input(&buffer);
                string msg_received;
                getline(input, msg_received);
                
                cout << "Server: " << msg_received << endl;
                if (msg_received == "exit") {
                    break;
                }
            }
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
};

int main() {
    boost::asio::io_context ioContext;

    boost::asio::ip::tcp::socket socket(ioContext);
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 9990);
    socket.connect(endpoint);

    cout << "New client created:" << endl;

    Client client; // Create an instance of the Client class
    std::thread receive_thread([&client, &socket]() { client.receive_messages(socket); }); // Using lambda
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
    return 0;
}
