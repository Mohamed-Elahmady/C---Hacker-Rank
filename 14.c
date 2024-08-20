#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char arr[1000];
    scanf("%s",arr);
    int n = strlen(arr);
    //int repeat = 0;
    for (int i = 0; i < 10; i++)
    {
        int repeat = 0;
        for (int j = 0; j < n; j++)
        {
            if ((arr[j]-48) == i)
            {
                repeat++;
            }
        }
        printf("%d ",repeat);
    }
    
    return 0;
}
