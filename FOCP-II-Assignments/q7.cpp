#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name == "")
    {
        cout << "Name cannot be empty";
        return 0;
    }

    vector<string> roast =
    {
        name + " writes code so slowly that even a turtle switched to Python.",

        "If procrastination were an Olympic sport, " + name + " would win gold every year.",

        name + "'s debugging style is staring at the screen until the bug feels guilty.",

        name + " types so slowly that the keyboard falls asleep.",

        "Even Google gets confused by " + name + "'s search history.",

        name + " doesn't fix bugs, they just rename them as features.",

        "If laziness had a CEO, it would definitely be " + name + ".",

        name + "'s code has more mood swings than a reality show contestant.",

        "The compiler sees " + name + "'s code and starts praying.",

        name + " studies one night before exams and still asks why life is unfair."
    };

    srand(time(0));

    int n = rand() % roast.size();

    cout << endl;
    cout << roast[n];

    return 0;
}