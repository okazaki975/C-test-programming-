#include <stdio.h>
 int main() {
    char operator;
    int num1, num2;
    float result;

 printf("Menu:\n");
 printf("1. Add\n");
 printf("2. Subtract\n");
 printf("3. Multiply\n");
 printf("4. Divide\n");
 printf("Enter your choice: ");
 scanf("%d", &operator);

 switch(operator)
 {
 case 1:
    puts("You chose addition.\n");
    break;
 case 2:
    puts("You chose subtraction.\n");
    break;
 case 3:
    puts("You chose multiplication.\n");
    break;
 case 4:
    puts("You chose division.\n");
    break;
 default:
    puts("Invalid option.\n");
  }

 return(0);
 }