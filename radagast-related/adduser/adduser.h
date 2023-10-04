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
int fnc_adduser (char[]);
};

// function declaration
int Adduser::fnc_adduser (char user[])
{
uname = user;
exit_code = WEXITSTATUS(system(("sudo useradd -c <fullname>"+uname).c_str())); //idea: combine char[] for full name and username to one string with a space in between.
cout << "The exitcode is: " << exit_code << endl;
return exit_code;
};
#endif
