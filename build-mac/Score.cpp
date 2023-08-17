#include <string>
using namespace std;
class Score
{
    public:
        Score() : score{
                      "A", "B", "C",
                      "D", "E", "F",
                      "G", "H", "I"
                }
        {};
        string *update();

    private:
        string score[9];
};