#include <iostream>

using namespace std;

int main()
{
    const char *p = "A";
    cout << "At address " << &p << " resides character " << *p << "." << endl;
    const char *z[2] = { "A", "B"};
    cout << "At address " << &z[0] << " resides character " << *z[0] << "." << endl;
    cout << "At address " << &z[1] << " resides character " << *z[1] << "." << endl;
    return 0;
}
