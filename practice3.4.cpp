#include <stdio.h>
#define ll long long 

int main() {
    int n;
    char s[100];
    do {
        printf("Enter a positive integer N = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d", &n) != 1);
    ll f = 1, sum = 0, tmp = -1; 
    double ln2 = 0,pi = 1;
    for(int i = 1;i <= n; ++i) {
        tmp *= -1;
        f *= (ll)i;
        ln2 +=((1.0 * tmp) / i);
        pi += (-1.0 * tmp) / (2.0 * i + 1);
        if (i * i <= n) sum += i;
    }
    printf("N! = %lld\nln(2) = %3f\nPI = %3f\nS = %lld\n",f,ln2,pi * 4, sum);
    return 0;
}