#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    if (name == "")
    {
        cout << "Name cannot be empty";
        return 0;
    }

    vector<string> excuse =
    {
        name + " could not finish the assignment because the laptop updated for 6 hours.",

        name + " was about to complete the homework when the Wi-Fi suddenly disappeared.",

        name + " tried finishing the assignment, but the keyboard stopped working.",

        name + " completed the homework, but the file vanished mysteriously.",

        "The internet betrayed " + name + " right before submission time.",

        name + " spent hours studying but forgot to save the assignment.",

        name + " could not submit the homework because the system crashed suddenly.",

        name + " was ready with the assignment, but the power cut ruined everything.",

        name + " accidentally deleted the homework while cleaning desktop files.",

        name + " tried to complete the assignment, but the browser kept freezing."
    };

    srand(time(0));

    int n = rand() % excuse.size();

    cout << endl;
    cout << excuse[n];

    return 0;
}