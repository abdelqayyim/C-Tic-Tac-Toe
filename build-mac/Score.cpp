#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
class Score
{
    public:
        Score() : score{
                      "_", "_", "_",
                      "_", "_", "_",
                      "_", "_", "_"
                }
        {};
        void update(const string newScore[9]) {
            for (int i = 0; i < 9; ++i) {
                score[i] = newScore[i];
            }
        }

        void displayScore() {
            for (const string& s : score) {
                cout << s << " ";
            }
            cout << endl;
        }

    private:
        string score[9];
};