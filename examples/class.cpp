#include <iostream>

using namespace std;

class test
{
  private:
    int age;
  public:
  int getage()
  {
    return age;
  }
  void setage (int ager)
  {
    age = ager;
  }
};


int main()
{
  test myTest;
  myTest.setage(18);
  cout << myTest.getage() << endl;
  return 0;
}
