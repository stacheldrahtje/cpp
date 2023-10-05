#ifndef adduser.h
#define adduser.h
#include <iostream>
#include <string>

using namespace std;

class Adduser
{
private:
string uname;
int exit_code;
public:
int fnc_adduser (char[], char[]);
};

// function declaration
int Adduser::fnc_adduser (char u1[], char u2[])
{
uname = u1;
uname += " ";
uname += u2;
cout << uname;
exit_code = WEXITSTATUS(system(("sudo useradd -c "+uname).c_str())); //idea: combine char[] for full name and username to one string with a space in between.
cout << "The exitcode is: " << exit_code << endl;
return exit_code;
};
#endif
