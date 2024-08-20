#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int i = a;
    if (i < b)
    {
        i = b;
    }
    if (i < c)
    {
        i = c;
    }
    if (i < d)
    {
        i = d;
    }
    return i;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}