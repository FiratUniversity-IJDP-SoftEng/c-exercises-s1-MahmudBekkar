#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main() {
    string y = get_string("Do you have a cat or a dog? ");

if (strcmp(y, "cat") == 0)
 {
printf("The cat says: Meow!!\n");
 }

else if (strcmp(y, "dog") == 0)
 {
  printf("The dog says: Aoww!!\n");
 }
}
