#include<stdio.h>
int main()
{
    int a,b,c, max;
    printf("Enter the three number :");
    scanf("%d%d%d", &a, &b, &c);
    max = a>b ? (a>c ? a : c) : (b>c ? b : c);
    printf("The leargest number is %d", max);
    return 0;
} 