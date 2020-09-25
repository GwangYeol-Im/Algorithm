#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#include <string>

using namespace std;

struct User
{
  int idx;
  int age;
  string name;
};

bool compare(User a, User b)
{
  if (a.age == b.age)
    return a.idx < b.idx;
  else
    return a.age < b.age;
}

int main(void)
{
  int n;
  User user;
  vector<User> users;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    user.idx = i;
    cin >> user.age >> user.name;
    users.push_back(user);
  }
  sort(users.begin(), users.end(), compare);
  for (int i = 0; i < n; i++)
  {
    cout << users[i].age << ' ' << users[i].name << '\n';
  }

  return (0);
}