#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "???: ";
    getline(cin, name);

    unsigned long long studentID;
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name\n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> studentID;
    cin.ignore();

    string movie;
    cout << "Fahsai: I think you may be GEAR " << (studentID / 10000000) - 12 << ". I have a free movie tickets for you.\n";
    cout << "Fahsai: Let's go to cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin, movie);

    string day;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin, day);
    cout << "Fahsai: Next " << day << "....that is OK!!! I'm looking forward to " << movie << " with you.\n";

    string comment;
    cout << name << ": ";
    getline(cin, comment);
    cout << "Fahsai: 555+ see you Next " << day << ". Bye Bye \(^ ^)/";
}
