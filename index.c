#include <stdio.h>
int main()
{
  char character;
  double deciInt;
  float decimal;
  char *string;

  printf("Enter character \n");
  scanf("%c", &character);
  printf("Enter deciInt \n");
  scanf("%lf", &deciInt);
  printf("Enter decimal \n");
  scanf("%f", &decimal);
  printf("Enter string \n");
  scanf("%s", &*string);

  printf("you entered %c", character);
  printf("\n you entered %lf", deciInt);
  printf("\n you entered %f", decimal);
  printf("\n you entered %s", string);
  return 0;
}
