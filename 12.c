#include <stdio.h>
#include <stdlib.h>

int *arr = NULL,*arr_rev = NULL;

int main()
{
    int num;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    arr_rev = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {
        int j = (num-i-1);
        scanf("%d",(arr + i));
        *(arr_rev + j) = *(arr+i);
    }
    for(int i = 0; i < num; i++){
        printf("%d ",arr_rev[i]);
    }
    return 0;
}