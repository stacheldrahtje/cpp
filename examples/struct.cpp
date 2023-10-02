#include <iostream>

using namespace std;

int main()
{
    struct Tester
    {
        int abra;
        int cadabra;
    };

    Tester abc;
    abc.abra = 12;
    abc.cadabra = 13;
    cout << "abra is " << abc.abra << " and cadabra is " << abc.cadabra << endl;
    return 0;
}
