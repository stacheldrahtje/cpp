/*
***********************************************************************************************
* Source Code was found at stackoverflow.com						      *
* https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of\*
* -the-command-within-c-using-po							      *
*  Posted by waqas							                      *
***********************************************************************************************
*/

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include "stdout.h"

using namespace std;


string exec(const char* cmd) {
    array<char, 128> buffer;
    string result;
    unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}
