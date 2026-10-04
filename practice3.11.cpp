#include <stdio.h>
#define ll long long 
const int MAXN = 1e6 + 5;

int main() {
    int n,m;
    char s[100];
    do {
        printf("Enter N, M  = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d%d", &n, &m) != 2);
    printf("The first %d bit from the right of %d: ",m,n);
    while(m--) {
        printf("%d",n & 1);
        n >>= 1;
    }
    
    return 0;
}