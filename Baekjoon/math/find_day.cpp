#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string day[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int month, date;
  int days;

  cin >> month >> date;
  days = date;
  for (int i = 1; i < month; i++)
  {
    switch (i)
    {
    case 2:
      days += 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      days += 30;
      break;
    default:
      days += 31;
    }
  }
  cout << day[days % 7] << '\n';
  return (0);
}