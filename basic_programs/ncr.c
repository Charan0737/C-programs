#include<stdio.h>

int fact(int n) {
    int f = 1, i = 1;
    while (i <= n) {
        f = f * i;
        i++;
    }
    return f;
}

int main() { 
    int n, r, ncr;
    scanf("%d%d", &n, &r);
    ncr = fact(n) / (fact(r) * fact(n - r));
    printf("%d", ncr);
}
