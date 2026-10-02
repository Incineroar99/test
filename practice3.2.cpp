#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    char s[100];
    do {
        printf("Enter coefficients a, b, c = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d%d%d", &a, &b, &c) != 3);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem!\n");
            } else {
                printf("No solution!\n");
            }
        } else {
            printf("Solution 1 = %f\n", (double)(-c / b));
        }
        return 0;
    }
    int delta = b * b - 4 * a * c;
    if (delta < 0) printf("No solution!");
    else if (delta == 0) printf("Solution 1 = %f", (-b + sqrt(delta))/(2 * a));
    else {
        printf("Solution 1 = %f\n", (-b + sqrt(delta))/(2.0 * a));
        printf("Solution 2 = %f", (-b - sqrt(delta))/(2.0 * a));
    }
    return 0;
}