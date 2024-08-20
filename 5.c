#include <stdio.h>

void update(int *a,int *b) {
    int aa = *a + *b;
    int bb = *a - *b;
    if (bb < 0)
    {
        bb *= -1;
    }
    *a = aa;
    *b = bb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}