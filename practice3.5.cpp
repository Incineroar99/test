#include <stdio.h>
#define ll long long 
#ifdef _WIN32
#include <windows.h>
#define sle(x) Sleep(x)
#else
#include <unistd.h>
#define sle(x) usleep((x) * 1000)
#endif

int main() {
    int n;
    char s[100];
    do {
        printf("Enter N = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d", &n) != 1);
    int cnt = 0;
    for (int x = 100; x <= 999 && cnt < n; ++x) {
        int hundreds = x / 100;
        int tens = (x / 10) % 10;
        int ones = x % 10;
        if (tens == hundreds + ones) {
            ++cnt;
            printf("%d: %d\n", cnt, x);
            sle(1000);
        }
    }
    return 0;
}