#include <iostream>

using namespace std;

int main()
{
  int exit_code;
  exit_code = WEXITSTATUS(system("sudo whoami"));

}