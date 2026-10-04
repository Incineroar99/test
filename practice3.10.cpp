#include <stdio.h>
#define ll long long 
const int MAXN = 1e6 + 5;
int gcd(int a,int b) {
    if (b == 0) return a;
    return gcd(b,a % b);
}
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}
int main() {
    int a,b;
    char s[100];
    do {
        printf("Enter 2 positive integers  = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d%d", &a, &b) != 2);
    printf("GCD = %d\n",gcd(a,b));
    printf("LCM = %d",lcm(a,b));
    return 0;
}