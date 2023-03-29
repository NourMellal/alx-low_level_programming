#include <stdio.h>
int main(void){
    
  char c = '#';
  int i = 0;
  while (i < 7)
  {
      if (i == 0)
      {
          putchar(c);
          putchar(c);
          putchar(c);
          putchar(c);
          putchar(c);
          putchar(c);
		  putchar('\n');
      }
        else if (i == 3)
        {
            putchar(c);
            putchar(c);
            putchar(c);
            putchar(c);
            putchar(c);
			putchar('\n');
        }
      else
      {
          putchar(c);
		  putchar('\n');
      }
	  i++;
  }

    return(0);
}