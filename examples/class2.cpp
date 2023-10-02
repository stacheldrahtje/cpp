#include <iostream>

using namespace std;

class test
{
    private:
      int age;
    public:
    void setage(int myage);
    int getage();
};

int test::getage()
  {
    return age;
  }
void test::setage(int myage)
  {
    age=myage;
  }

int main()
  {
    int ager;
    test Mytest;
    cout << "Enter your age: ";
    cin >> ager;
    Mytest.setage(ager);
    ager = 0;
    ager = Mytest.getage();
    cout << "Your age is:" << ager << endl;
    return 0;
  }
