#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string name;
  string age;

  cout << "Enter your name : ";
  getline(cin, name);
  cout << "Enter your age : ";
  getline(cin, age);

  cout << "Your name is " + name + ", and you are " + age << endl;
}