#include "command.h"
#include <iostream>
#include <string>

using namespace std;

int adduser(string uname, string fname)
{
  int exit_code;
  exit_code = WEXITSTATUS(system("sudo whoami"));  
  return exit_code;
}

int setpasswd(string passwd)
{

}
