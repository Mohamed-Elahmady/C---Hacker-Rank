#include <stdio.h>
#include <stdlib.h>
#define max 20

char *arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    int num = 0;
    scanf("%d",&num);
    
    if (num < 10)
    {
        for (int i = 0 ; i < 10; i++)
        {
            if((num-1) == i){
                printf("%s",arr[i]);
            }
        }
    }else
    {
        printf("Greater than 9");
    }
    return 0;
}
