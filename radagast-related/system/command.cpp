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

int setpasswd(string passwd)
{
  return 0;
}
