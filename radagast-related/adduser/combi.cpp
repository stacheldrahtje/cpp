#include <iostream>
#include <string>

using namespace std;

int main()
{
    char username[16]="nament";
    char fullname[16]="Natasha";
    string combi = username;
    combi += " -c ";
    combi += fullname;
    cout << combi << endl;

}