#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

// Allocate memory for n integers using calloc

ptr =  (int*)calloc(n, sizeof(int));

// check if memory allocation was successful

if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}
printf("The elements are:\n");
for (i = 0; i < n; i++) {
    printf("%d", ptr[i]);

}
printf("\n");

//Free allocated memory
free(ptr);

return 0;
}