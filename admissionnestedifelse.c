// To determine admission eligibility based on marks in three subjects
#include <stdio.h>

void main() {
    int s1, s2, s3;
    printf("Enter the marks of s1, s2, s3: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 >= 75) {
        if (s2 >= 75) {
            if (s3 >= 75) {
                printf("Eligible for admission\n");
            } else {
                printf("Not eligible for admission (s3 < 75)\n");
            }
        } else {
            printf("Not eligible for admission (s2 < 75)\n");
        }
    } else {
        printf("Not eligible for admission (s1 < 75)\n");
    }
}

