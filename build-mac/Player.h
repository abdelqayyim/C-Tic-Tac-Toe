#include <string>
using namespace std;

class Player
{
    public:
        Player();
        Player(int id, string name, string sign);
        Player(const Player &other); //copy constructor
        string getName();
        string getSign();
        int getId();
    private:
        string name;
        string sign;
        int id;
};