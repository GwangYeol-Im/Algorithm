#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(void)
{

int N, min_n, max_n;
int arr[1000001];

scanf("%d", &N);
for (int i = 0; i < N; i++)
    scanf("%d", &arr[i]);
min_n = arr[0];
max_n = arr[0];
for (int i = 0; i < N; i++)
{
    max_n = max(max_n, arr[i]);
    min_n = min(min_n, arr[i]);
}
printf("%d %d\n", min_n, max_n);
return (0);
}