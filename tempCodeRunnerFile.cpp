#include <stdio.h>
#include <string.h>
#define ll long long 
const int MAXN = 1e6 + 5;
bool check_sort(int n) {
    int k = 1;
    int tmp = n;
    while (tmp > 0) {
        k *= 10;
        tmp /= 10;
    }
    k /= 10;
    int pre = -1;
    while (n > 0) {
        tmp = n / k;
        n %= k;
        k /= 10;
        if (pre != -1) if (tmp <= pre) return false;
        pre = tmp;
    }
    return true;
}
bool check_symm(char s[]) {
    int k = strlen(s);
    int ok = 1;

    for (int i = 0, j = k - 1; i < j; i++, j--) {
        if (s[i] != s[j]) return false;
    }

    return true;
}
int main() {
    int n;
    char s[100];
    do {
        printf("Enter N  = ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d", &n) != 1);
    if (check_sort(n)) printf("Descending.\n");
    else printf("Not descending.\n");

    if (check_symm(s)) printf("Symmetric.");
    else printf("Not symmetric.");
    return 0;
}