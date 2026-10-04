#include <stdio.h>
#define ll long long 
int max(int a,int b) {
    if (a > b) return a;
    else return b;
}
int min(int a,int b) {
    if (a < b) return a;
    else return b;
}
int main() {
    int n;
    char s[100];
    int ma = -1e9;
    int mi = 1e9;
    int cnt = 1;
    do {
        printf("Number %d = ",cnt);
        fgets(s,100,stdin);
        sscanf(s, "%d\n", &n);
        if (n != 0) {
            ma = max(ma, n);
            mi = min(mi, n);
        }
        cnt++;
    } while (n != 0);

    printf("Max = %d\n",ma);
    printf("Min = %d",mi);
    return 0;
}