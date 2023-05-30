#include <conio.h>
#include <iostream>
#include <stdio.h>
#include "World.h"
#include <math.h>

using namespace std;

void sp_to_dash(const char *str);
void array_entry(int *a);
void find_sum();
void math_library_use();

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
