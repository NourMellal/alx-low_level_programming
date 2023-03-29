#include <stdio.h>

int main() {
    char myChar = 'c'; // Change this to test different characters
while (1) 
{
    printf ("Please enter the character: ");
    scanf (" %c", &myChar);
    switch (myChar) {	
        case 'a':
            printf("  #  \n");
            printf(" # # \n");
            printf("#   #\n");
            printf("#####\n");
            printf("#   #\n");
            break;
        case 'b':
            printf("###  \n");
            printf("#  # \n");
            printf("###  \n");
            printf("#  # \n");
            printf("###  \n");
            break;
        case 'c':
            printf(" ### \n");
            printf("#   #\n");
            printf("#    \n");
            printf("#   #\n");
            printf(" ### \n");
            break;
        case 'd':
            printf("###  \n");
            printf("#  # \n");
            printf("#   #\n");
            printf("#  # \n");
            printf("###  \n");
            break;
        case 'e':
            printf("#####\n");
            printf("#    \n");
            printf("###  \n");
            printf("#    \n");
            printf("#####\n");
            break;
        case 'f':
            printf("#####\n");
            printf("#    \n");
            printf("###  \n");
            printf("#    \n");
            printf("#    \n");
            break;
 
case 'g':
            printf(" ### \n");
            printf("#   #\n");
            printf("#    \n");
            printf("#  ##\n");
            printf(" ### \n");
            break;
        case 'h':
            printf("#   #\n");
            printf("#   #\n");
            printf("#####\n");
            printf("#   #\n");
            printf("#   #\n");
            break;
        case 'i':
            printf(" ### \n");
            printf("  #  \n");
            printf("  #  \n");
            printf("  #  \n");
            printf(" ### \n");
            break;
        case 'j':
            printf("   # \n");
            printf("   # \n");
            printf("   # \n");
            printf("#  # \n");
            printf(" ##  \n");
            break;
        default:
            printf("The character is not one of the first 10 characters of the alphabet.\n");
            break;
    }
}
    return 0;
}