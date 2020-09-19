#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

int main(void)
{
  int a(5), b(7);

  swap(a, b);

  cout << a << endl;
  cout << b << endl;
}

// int arr[10] = {3, 1, 4, 5, 2, 1, 2, 3, 7, 8};

//   for (int n : arr)
//     cout << n << endl;