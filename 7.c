#include <stdio.h>
#include <stdlib.h>

char *arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    int start = 0,end = 0;
    scanf("%d %d",&start,&end);
        for (int i = 0 ; i < 9; i++)
        {
            if((start-1) <= i){
                printf("%s\n",arr[i]);
            }            
            if (i == 9)
            {
                break;
            }
            
        }
        for (int i = 10; i <= end; i++)
        {
            if (i%2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    return 0;
}