#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, movie, free, something;
    int id, gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n" << "????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name.\n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID?\n" << name << ": ";
    cin >> id;
    gear = id/10000000-12;
    cout << "Fahsai: I think you may be GEAR " << gear <<  ". I have a free movie tickets for you.\n";
    cout << "Fahsai: Let's go to cinema together!!!\n" << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    cin.ignore();
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,free);
    cout << "Fahsai: " << free << "....that is OK!!! I'm looking forward to watch " << movie << " with you.\n";
	cout << name << ": ";
	cin >> something;
	cout << "Fahsai: 555+ see you " << free << ". Bye Bye \(^ ^)/";
	return 0;
}