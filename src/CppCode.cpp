#include <conio.h>
#include <iostream>
#include <stdio.h>
#include "World.h"
#include <math.h>

using namespace std;


void find_sum()
{
  int a, b, s;
  cout << "Enter a number please"
       << "\n";
  cin >> a;
  cout << "Enter a number please"
       << "\n";
  cin >> b;
  s = a + b;
  printf("The sum is %d", s);
}
void array_entry(int *a)
{
  for (int i = 0; i < *a; i++)
    cout << a[i];
}
void sp_to_dash(const char *str)
{
  while (*str)
  {
    if (*str == ' ')
      printf_s("%c", '_');
    else
      printf_s("%c", *str);
    str++;
  }
}
void math_library_use()
{
  cout << sin(30) << "\n";
  cout << cos(60) << "\n";
  cout << sqrt(5) << "\n";
}

int getHcf(int a, int b)
{
  int mx = max(a, b);
  int mi = min(a, b);
  while (mx % mi)
  {
    int temp = mi;
    mi = mx % mi;
    mx = temp;
  }
  return mi;
}
int c_factor(int *a)
{
  return getHcf(getHcf(a[0], a[1]), a[2]);
}
void _generatePython_triplet(int start, int end)
{
  int m = (start - 1) / 2;
  int n = m + 1;
  int a, b, c;
  int cr = 0;
  while ((n * n + m * m) <= end)
  {
    int i = n;
    for (; (m * m + i * i) <= end; i++)
    {
      a = i * i - m * m;
      b = 2 * m * i;
      c = m * m + i * i;
      int k = 1;
      int varg[] = {a,b,c};
      if (c_factor(varg) == 1)
      {
        while (c * k <= end)
        {
          k += 1;
          cr++;
        }
      }
    }
    m = m + 1;
    n = n + 1;
  }
  cout << "Number of Pythagorean triplet " << cr << "\n";
}