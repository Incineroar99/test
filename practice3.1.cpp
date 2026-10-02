#include <stdio.h>

int main() {
    int a,b;
    char s[100];
    do {
        printf("Enter two integers = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d%d", &a, &b) != 2);
    char c;
    do {
        printf("Enter an operator (+, -, *, /, %) = ");
        fgets(s, 100, stdin);
        sscanf(s, " %c", &c);
    } while (c != '+' && c != '-' && c != '*' && c != '/' && c != '%');
    if (c == '/' && b == 0) {
        printf("Error: divided by zero");
        return 0;
    }
    switch (c) 
    {
        case '+': a += b; break;
        case '-': a -= b; break;
        case '*': a *= b; break;
        case '/': a /= b; break;
        case '%': a %= b; break;
        default: break;
    }
    printf("Result = %d ", a);
    return 0;
}