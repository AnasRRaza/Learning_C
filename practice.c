#include <stdio.h>
#include <math.h>

int main()
{
  char operator;
  float num1, num2;
  printf("Enter an operator: (+, -, *, /, s, p, t): ");
  scanf("%c", &operator);
  switch (operator)
  {
  case '+':
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    break;
  case '-':
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    break;
  case '*':
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    break;
  case '/':
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
    break;
  case 's':
    printf("Enter an operand: ");
    scanf("%f", &num1);
    printf("Square root of %.2f = %.2f", num1, sqrt(num1));
    break;
  case 'p':
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f ^ %.2f = %.2f", num1, num2, pow(num1, num2));
    break;
  case 't':
    printf("Enter the value of angle: ");
    scanf("%f", &num1);
    printf("Sin(%.2f) = %.2f\n", num1, sin(num1));
    printf("Cos(%.2f) = %.2f\n", num1, cos(num1));
    printf("Tan(%.2f) = %.2f\n", num1, tan(num1));
    break;

  default:
    printf("Error! Operator is not correct");
  }
  return 0;
}