#include <stdio.h>

int get_change_number(char board[][50], int x, int y)
{
  int row, col, cnt;

  cnt = 0;
  for (row = x + 8; x < row; x++)
  {
    for (col = y + 8; y < col; y++)
    {
      if (x - 1 < 0 || y - 1 < 0 || x + 1 == row || y + 1 == col)
        continue;
      if (board[x][y] == board[x - 1][y])
      {
        cnt++;
        board[x - 1][y] = 'X';
      }
      else if (board[x][y] == board[x + 1][y])
      {
        cnt++;
        board[x + 1][y] = 'X';
      }
      else if (board[x][y] == board[x][y - 1])
      {
        cnt++;
        board[x][y - 1] = 'X';
      }
      else if (board[x][y] == board[x - 1][y])
      {
        cnt++;
        board[x][y + 1] = 'X';
      }
      printf("%d, %d 에 있을 때 cnt: %d\n", x, y, cnt);
    }
  }
  return (cnt);
}

int main(void)
{
  int i, row, col, curr_r, curr_c, min, cnt;
  char board[50][50];

  scanf("%d %d", &row, &col);
  for (i = 0; i < row; i++)
  {
    scanf("%s", &board[i][0]);
    board[i][col] = 0;
  }
  min = 32;
  for (curr_r = 0; curr_r < row; curr_r++)
  {
    if (curr_r + 8 > row)
      break;
    for (curr_c = 0; curr_c < col; curr_c++)
    {
      if (curr_c + 8 > col)
        break;
      cnt = get_change_number(board, curr_r, curr_c);
      min = cnt < min ? cnt : min;
    }
  }
  printf("%d\n", min);
  return (0);
}