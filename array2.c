#include <stdio.h>

int main() {
int myNumbers[10];
myNumbers[0]= 12;
myNumbers[1]= 2;
myNumbers[2]= 12;
myNumbers[3]= 122;
myNumbers[4]= 122;
myNumbers[5]= 1883;

int i;

for(i = 0; i < 6; i++) {
    printf("%d\n", myNumbers[i]);
}
return 0;
}