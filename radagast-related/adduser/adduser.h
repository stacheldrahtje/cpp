#ifndef adduser.h
#define adduser.h
#include <iostream>

using namespace std;

class Adduser
{
private:
string uname;
int exit_code;
public:
int fnc_adduser (char[]);
};

// function declaration
int Adduser::fnc_adduser (char user[])
{
uname = user;
//ret = system("sudo zypper se djflasjkdfhlkajsdhfajklsdhfkjsdh");
//cout << "ret is " << ret << endl;
exit_code = WEXITSTATUS(system("sudo useradd natasha"));
cout << "The exitcode is: " << exit_code << endl;
return exit_code;
};
#endif
