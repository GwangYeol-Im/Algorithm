//지뢰찾기 로직

#include <stdio.h>
#include <stdlib.h>

// int isMine(char **map, int row, int col)
// {
//   if (row < 0 || col < 0)
//     return (0);
//   if (!map[row][col])
//     return (0);
//   if (map[row][col] != '*')
//     return (0);
//   return (1);
// }

// int exist_count(char **map, int row, int col)
// {
//   int cnt = 0;

//   if (isMine(map, row - 1, col - 1))
//     cnt++;
//   if (isMine(map, row - 1, col))
//     cnt++;
//   if (isMine(map, row - 1, col + 1))
//     cnt++;
//   if (isMine(map, row, col - 1))
//     cnt++;
//   if (isMine(map, row, col + 1))
//     cnt++;
//   if (isMine(map, row + 1, col - 1))
//     cnt++;
//   if (isMine(map, row + 1, col))
//     cnt++;
//   if (isMine(map, row + 1, col + 1))
//     cnt++;

//   return (cnt);
// }

// char **check_mine(char **map, int row, int col)
// {
//   int i;
//   int j;
//   char check;

//   for (i = 0; i < row; i++)
//   {
//     for (j = 0; j < col; j++)
//     {
//       check = map[i][j];
//       if (check != '*' && check != '.')
//         return (0);
//       if (check == '.')
//         map[i][j] = exist_count(map, i, j) + '0';
//     }
//   }
//   return (map);
// }

void print_cnt(char **map, int curr_row, int curr_col, int row, int col)
{
  int i;
  int j;
  int cnt;

  cnt = 0;
  for (i = curr_row - 1; i <= curr_row + 1; i++)
  {
    for (j = curr_col - 1; j <= curr_col + 1; j++)
    {
      if (i < 0 || j < 0 || i >= row || j >= col)
        continue;
      if (map[i][j] == '*')
        cnt++;
    }
  }
  printf("%d", cnt);
}

void sweep_mine(char **map, int row, int col)
{
  int curr_row;
  int curr_col;
  char check;

  for (curr_row = 0; curr_row < row; curr_row++)
  {
    for (curr_col = 0; curr_col < col; curr_col++)
    {
      check = map[curr_row][curr_col];
      if (check != '*' && check != '.')
        return;
      else if (check == '*')
        printf("%c", check);
      else
        print_cnt(map, curr_row, curr_col, row, col);
    }
    printf("\n");
  }
}

int check_valid_range(int row, int col)
{
  if (row < 3 || row > 10)
    return (0);
  else if (col < 3 || col > 10)
    return (0);
  return (1);
}

int main(void)
{
  int row;
  int col;
  int i;
  char **map;

  scanf("%d %d", &row, &col);
  if (!check_valid_range(row, col))
    return (0);
  if (!(map = malloc(sizeof(char *) * (row + 1))))
    return (0);
  map[row] = 0;

  for (i = 0; i < row; i++)
  {
    if (!(map[i] = malloc(sizeof(char) * (col + 1))))
      return (0);
    map[i][col] = 0;
    scanf("%s", map[i]);
  }

  sweep_mine(map, row, col);

  for (i = 0; i < row; i++)
  {
    free(map[i]);
  }
  free(map);
  return (0);
}