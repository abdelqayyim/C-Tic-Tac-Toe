#ifndef Client_H
#define Client_H

#include <iostream>
#include <thread>
#include <string>
#include <boost/asio.hpp>
#include "Game.h"
#include "Panel.h"
class cMain; // forward declaration instead of include so to avoid circular dependency

using namespace std;

class Client
{
    public:
        Client();
        void receive_messages(boost::asio::ip::tcp::socket &socket, Game * game);
        void create_connection(Client * client, Game * game);
        void send_message(const std::string &message);
        int getPosition();
        char getSign();
        // void setMainWindow();
        void printClient();
       

    private:
        int position;
        char sign;
        boost::asio::io_context ioContext;
        boost::asio::ip::tcp::socket socket;
        cMain *mainFrame;
        // cMain *mainWindow;
};

#endif // Client_H
