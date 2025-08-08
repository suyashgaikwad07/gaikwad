#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d, r1, r2;
    printf("Enter the values of the cefficients:");
    scanf("%d%d%d", &a,&b,&c);
    d=b * b - 4 * a * c;
    if (d<0)
    printf("\n\n The roots are complex");
else
    if (d==0)
    {
        printf("\n\nThe roots are real and equal");
        r1=-b/(2 * a);
        printf("\n\nrppt1 =%f, root2=%f", r1,r1);
    }
    else
    {  printf("\n\nThe root are real and distinct");
    r1=(-b+sqrt(d))/(2 * a);
    r2=(-b-sqrt(d))/(2*a);
    printf("\n\nroot1 =%f, root2=%f", r1, r2);
}
return 0;
}