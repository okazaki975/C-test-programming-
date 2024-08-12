#include <stdio.h>

double calculateSum(int x, int y) {

double div = x/y;
return div;
}

int main() {
int x = 500;
int y = 100;
printf("The sum of x and y is: \t %.2lf",calculateSum(x,y) );


}



