#include <iostream>
#include <string>
#include "command.h"

using namespace std;

int main()
{
	string a = "hello";
	string b = "world";
	string c = "!";
	adduser(a, b);
	setpasswd (b, c);
	return 0;
}
