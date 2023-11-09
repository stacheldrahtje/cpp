#include "command.h"
#include <iostream>
#include <string>

using namespace std;

int adduser(string uname, string fname)
{
  string command = "echo useradd -c "+fname+" "+uname;
  int exit_code;
  exit_code = WEXITSTATUS(system(command.c_str()));  
  return exit_code;
}

int setpasswd(string uname, string passwd)
{
  string command = "echo chpasswd "+uname+":"+passwd;
  int exit_code;
  exit_code = WEXITSTATUS(system(command.c_str()));  
  return exit_code;
}

//creating and salting passwd
//openssl passwd -6 -salt <salt randomization> <password here>