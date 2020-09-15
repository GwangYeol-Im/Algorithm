#include <stdio.h>

int main(void)
{
  int i, sum, input, digit;
  int arr[10] = {
      0,
  };

  sum = 1;
  for (i = 0; i < 3; i++)
  {
    scanf("%d", &input);
    sum *= input;
  }
  while (sum)
  {
    digit = sum % 10;
    arr[digit]++;
    sum /= 10;
  }
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", arr[i]);
  }
  return (0);
}