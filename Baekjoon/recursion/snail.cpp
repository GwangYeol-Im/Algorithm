#include <iostream>
#include <cstdlib>
void fill_row(int row, int col, int flag, int **arr, int num);

using namespace std;

int N;
int LEN;
int TARGET;

void print(int **arr)
{
  int x, y;
  for (int i = 0; i < LEN; i++)
  {
    for (int j = 0; j < LEN; j++)
    {
      cout << arr[i][j] << ' ';
      if (arr[i][j] == TARGET)
      {
        x = i + 1;
        y = j + 1;
      }
    }
    cout << '\n';
  }
  cout << x << ' ' << y << '\n';
}

void fill_col(int row, int col, int flag, int **arr, int num)
{
  if (num == 0)
  {
    print(arr);
    return;
  }
  int i = N;
  if (flag == 0)
  {
    while (i--)
    {
      arr[row][col++] = num--;
    }
    flag = 1;
    fill_row(row - 1, col - 1, flag, arr, num);
  }
  else
  {
    while (i--)
    {
      arr[row][col--] = num--;
    }
    flag = 0;
    fill_row(row + 1, col + 1, flag, arr, num);
  }
}

void fill_row(int row, int col, int flag, int **arr, int num)
{
  int i = N;
  N--;
  if (flag == 0)
  {
    while (i--)
    {
      arr[row++][col] = num--;
    }
    fill_col(row - 1, col + 1, flag, arr, num);
  }
  else
  {
    while (i--)
    {
      arr[row--][col] = num--;
    }
    fill_col(row + 1, col - 1, flag, arr, num);
  }
}

int main(void)
{
  cin >> N;
  LEN = N;
  cin >> TARGET;
  int **arr;

  arr = (int **)malloc(sizeof(int *) * N);
  for (int i = 0; i < N; i++)
  {
    arr[i] = (int *)malloc(sizeof(int) * N);
  }
  fill_row(0, 0, 0, arr, N * N);
}