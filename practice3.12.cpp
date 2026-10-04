#include <stdio.h>
#define ll long long 
const int MAXN = 1e8;
int main() {
    int n;
    char s[100];
    do {
        printf("Phone number: ");
        fgets(s,100,stdin);
    } while (sscanf(s, "%d", &n) != 1 || n / MAXN < 1 || n / MAXN > 9);
    int k = 1e8;
    while (n > 0) {
        switch (n / k)
        {
        case 0: printf("zero "); break;
        case 1: printf("one "); break;
        case 2: printf("two "); break;
        case 3: printf("three "); break;
        case 4: printf("four "); break;
        case 5: printf("five "); break;
        case 6: printf("six "); break;
        case 7: printf("seven "); break;
        case 8: printf("eight "); break;
        case 9: printf("nine "); break;
        default:
            break;
        }
        n %= k;
        k /= 10;
    }
    return 0;
}