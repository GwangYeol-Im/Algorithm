// over load : 동일한 함수명이 다른 기능을 수행하는 것.
#include <iostream>

void swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void swap(double &a, double &b)
{
  double tmp = a;
  a = b;
  b = tmp;
}

void swap(int *(&a), int *(&b))
{
  int *tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int a = 20, b = 30;
  double da = 2.222, db = 3.333;
  int *pa = &a, *pb = &b;

  swap(a, b);
  swap(da, db);
  swap(pa, pb);

  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  std::cout << "da : " << da << std::endl;
  std::cout << "db : " << db << std::endl;

  std::cout << "pa : " << *pa << std::endl;
  std::cout << "pb : " << *pb << std::endl;
}