#include <stdio.h>
#include <string.h>
#define ll long long 
const int MAXN = 1e6 + 5;
bool prime[MAXN];
void sieve(bool prime[]) {
    memset(prime, true, sizeof(bool) * MAXN);
    prime[0] = prime[1] = false;
    for(int i = 2;i * i < MAXN; ++i) {
        if (prime[i]) {
            for(int j = 2 * i;j < MAXN;j += i) prime[j] = false;
        }
    }
}
int main() {
    int n;
    char s[100];
    do {
        printf("Enter a positive integer  = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d", &n) != 1);
    sieve(prime);
    int cnt = 1;
    for(int i = 2;i <= n; ++i) {
        if (prime[i]) {
            printf("#%d = %d\n",cnt,i);
            cnt++;
        }
    }
    return 0;
}