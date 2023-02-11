#include <stdio.h>

int main()
{
  int unit;
  char billType;
  printf("Enter your bill Type, type c for commercial type r for residential: ");
  scanf("%c", &billType);
  printf("Enter Your monthly units: ");
  scanf("%i", &unit);
  if (billType == 'c' || billType == 'C')
  {
    if (unit <= 1000)
    {
      printf("Your bill is %i", 60000);
    }
    else
    {
      printf("Your Bill is %i", 60000 + (unit - 1000) * 5);
    }
  }
  else if (billType == 'r' || billType == 'R')
  {
    printf("Your Bill is %i", 16 * unit);
  }
  else
  {
    printf("Undefined");
  }
  return 0;
}
