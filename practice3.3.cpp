#include <stdio.h>

int main() {
    int a,b;
    char s[100];
    do {
        printf("Enter month and year = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d%d", &a, &b) != 2);
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0)) month[2]++;
    printf("Month %d in year %d has %d days",a,b,month[a]);
    return 0;
}