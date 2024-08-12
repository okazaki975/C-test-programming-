#include <stdio.h>
#include <ctype.h> // for isupper() and islower()

int main() {
    char  ch;

    printf("Enter a character: ");
    scanf(" %c ", &ch);

    if (isupper(ch)) {
        printf("%c is uppercase.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a lowercase.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

return 0;

}