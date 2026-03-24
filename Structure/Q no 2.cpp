#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

int main()
{
    struct complex c1, c2, sum;

    printf("Enter first complex number:\n");
    printf("Enter real part: ");
    scanf("%f", &c1.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);

    printf("\nEnter second complex number:\n");
    printf("Enter real part: ");
    scanf("%f", &c2.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("\nFirst complex number = %.2f + i%.2f\n", c1.real, c1.imag);
    printf("Second complex number = %.2f + i%.2f\n", c2.real, c2.imag);
    printf("Sum = %.2f + i%.2f\n", sum.real, sum.imag);

    return 0;
}