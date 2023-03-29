#include <stdio.h>
#include <string.h>

int main() {
  char text[100] = {0};
  char result[100] = {0};
  int n1, n2, l;
  
  printf("Input a string: ");
  scanf("%s", text);
  
  printf("Input position-1 for reversing the string: ");
  scanf("%d", &n1);
  
  printf("Input position-2 for reversing the string: ");
  scanf("%d", &n2);
  
  l = strlen(text);
  
  for (int i = 0; i < n1 - 1; i++) {
	result[i] = text[i];
  }
  
  for (int i = n1 + 1, j = n2 + 1; i < n2; i++, j--) {
    result[i] = text[j];
  }
  
  for (int i = n2; i <= l; i++) {
    result[i] = text[i];
  }

  printf("Reversed string : %s\n", result);

  return 0;
}
