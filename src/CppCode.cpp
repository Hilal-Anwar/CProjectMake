#include <conio.h>
#include <iostream>
#include <stdio.h>
#include "World.h"
using namespace std;

void sp_to_dash(const char *str);
void array_entry(int *a);
int main() {
  int a,b,s;
  cout << "Enter a number please"<<"\n";
  cin>>a;
  cout<<"Enter a number please"<<"\n";
  cin>>b;
  s=a+b;
  printf("The sum is %d",s);
  int z[]={4,5,9,23};
  array_entry(z);
  sp_to_dash("this is a test");
  sum_finder();
  return 0;
}
void array_entry(int *a){
  for (int i=0;i<*a;i++)
      cout<<a[i];
}
void sp_to_dash(const char *str) {
  while (*str) {
    if (*str == ' ')
      printf("%c", '_');
    else
      printf("%c", *str);
    str++;
  }
}
