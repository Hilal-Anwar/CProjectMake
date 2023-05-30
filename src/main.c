
#include <stdio.h>
int main(int arg,char const *args[]) {
    int a, b, c;
    printf_s("Enter the 3 numbers \n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf_s("The three number that are entered are \n");
    printf_s("%d\n", a);
    printf_s("%d\n", b);
    printf_s("%d\n", c);
    printf_s("Hello ! world \n");
    for (int i = 1; i < arg; ++i) {
        printf_s("%s \n",args[i]);
    }
    return 0;
}