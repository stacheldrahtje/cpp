#include <iostream>
#include <string>

using namespace std;

int main()
{
    char username[16]="<username>";
    char fullname[16]="<fullname>";
    string combi = username;
    combi += " -c ";
    combi += fullname;
    cout << combi << endl;
    return 0;
}
