#include <stdio.h>

int main() {
    float percentage;
    char grade;

    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    
    percentage = (float)marks / 100 * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }


    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}