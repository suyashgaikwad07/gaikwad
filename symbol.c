#include <stdio.h>
#include <stdlib.h>  // for abs()

int main()
{
    int x, y, i, prod = 0, quo = 0, rem;
    int signx = 1, signy = 1;

    printf("Enter value of x and y: ");
    scanf("%d%d", &x, &y);

    if (x < 0)
        signx = -1;
    if (y < 0)
        signy = -1;

    int absX = abs(x);
    int absY = abs(y);

    /*** Calculate product using addition ***/
    for (i = 1; i <= absY; i++)
        prod += absX;

    if (signx != signy)
        prod = -prod;

    /*** Calculate quotient and remainder ***/
    int tempX = absX;
    while (tempX >= absY)
    {
        tempX -= absY;
        quo++;
    }

    rem = tempX;

    if (signx != signy)
        quo = -quo;

    if (signx == -1)
        rem = -rem;

    printf("\nThe product is %d", prod);
    printf("\nThe quotient is %d", quo);
    printf("\nThe remainder is %d", rem);

    return 0;
}
