#include <stdio.h>

int main()
{
  char * str;

  gets(str);

  printf("%s\n", &str);

}
