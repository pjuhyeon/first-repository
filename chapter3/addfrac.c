#include <stdio.h>

int main(void)
{
    int num1, frac1 = 0;
    int num2, frac2 = 0;

    printf("Enter the first frac : ");
    scanf("%d/%d", &num1, &frac1);

    printf("Enter the Second frac : ");
    scanf("%d/%d", &num2, &frac2);

    printf("Sum is %d/%d", num1 * frac2 + num2 * frac1, frac1 * frac2);
    return 0;
}
