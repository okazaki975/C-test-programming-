#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0){
        printf("%d is a positive.\n", number);
    } else if (number < 0) {
    printf("%d is a negative.\n", number);
    } else {
        printf("%d s zero");
    }
    
    return 0;

}