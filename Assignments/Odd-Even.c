#include <stdio.h>
int main()
{
  unsigned int n;
  printf("Enter a number: "); scanf("%u",&n);
  printf("Number is ");
  switch(n%2)
  {
    case 0: printf("even"); break;
    case 1: printf("odd"); break;
  }
  printf(".\n");
  return 0;
}
