#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input length and width from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;
    // Calculate perimeter
    perimeter = 2 * (length + width);

    // Output results
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;
}
