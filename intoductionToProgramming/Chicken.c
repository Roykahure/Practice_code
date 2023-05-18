#include <stdio.h>
float sum;
void show()
{
    float num1, num2;
    printf("Enter first number\n");
    scanf("%f", &num1);
    printf("Enter Second number\n");
    scanf("%f", &num2);
    sum = num1 + num2;

    printf("the answer is %f", sum);
}
int main()
{
    show();
    return 0;
}