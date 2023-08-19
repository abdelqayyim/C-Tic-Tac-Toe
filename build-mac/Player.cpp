#include "Player.h"
Player::Player(){
    this->name = "";
    this->id = -1;
    this->sign = "I";
};
Player::Player(int id, string name, string sign) : name(name), sign(sign),id{id}{};
Player::Player(const Player &other) // copy constructor
    : name(other.name), sign(other.sign), id(other.id){};
string Player::getName()
{
    return this->name;
};
string Player::getSign(){
    return this->sign;
};
int Player::getId(){
    return this->id;
};