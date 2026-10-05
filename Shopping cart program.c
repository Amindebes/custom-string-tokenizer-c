#include <stdio.h>
#include <string.h>

int main() {

    // MAD LIBS GAME

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description):");
    fgets(adjective1, sizeof(adjective1), stdin);

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);

    printf("Enter an adjective (description):");
    fgets(adjective2, sizeof(adjective2), stdin);

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    
    printf("Enter an adjective (description):");
    fgets(adjective3, sizeof(adjective3), stdin);

printf("%s\n", noun);
printf("%s\n", verb);
printf("%s\n", adjective1);
printf("%s\n", adjective2);
printf("%s\n", adjective3);

  return 0;
}    
   
  