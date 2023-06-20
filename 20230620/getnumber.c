#include <stdio.h>

int getIntegerNumber ( char userprompt [], int ll, int ul )
{
  int zahl = 0;

  do
  {
    printf("%s", userprompt);
    scanf("%d", &zahl);
  } while (zahl < ll || zahl > ul);

  return zahl;
}

int main (void)
{
  
}