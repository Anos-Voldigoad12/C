#include <stdio.h>
char* reverseString(const char str[])
{
  char rev[128];
  int i,j=0,len;
  for(i=0;str[i]!='\0';i++)
    len++;
  for(i=len-1;i>=0;i--)
    rev[j++] = str[i];
  rev[j] = '\0';
  return rev;
}
int main()
{
  char str[128],rev[128];
  printf("Enter a String: "); scanf("%[^\n]",str);
  rev = reverseString(str);
  printf("Reversed String: %s\n",rev);
}
