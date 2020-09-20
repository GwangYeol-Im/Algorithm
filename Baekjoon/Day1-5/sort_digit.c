#include <stdio.h>

int main(void)
{
  int digit, arr[9], i, j, len, temp;

  scanf("%d", &digit);
  i = 0;
  while (digit)
  {
    arr[i] = digit % 10;
    i++;
    digit /= 10;
  }
  len = i;
  for (i = 1; i < len; i++)
  {
    temp = arr[i];
    for (j = i; j > 0 && arr[j - 1] < temp; j--)
      arr[j] = arr[j - 1];
    arr[j] = temp;
  }
  for (i = 0; i < len; i++)
    printf("%d", arr[i]);
  printf("\n");
}