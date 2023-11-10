#include <iostream>
#include <string>
#include "stdout.h"

using namespace std;

int main()
{
 const char* comnd = "whoami";
 string backfire = exec(comnd);
 cout << "Result is: "+backfire;
 return 0;
}

