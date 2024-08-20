#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if (i <= j && i <= (2*n-i) && i <= (2*n-j))
            {
                printf("%d ",n-i+1);
            }
            else if (j <= i && j <= (2*n-i) && j <= (2*n-j))
            {
                printf("%d ",n-j+1);
            }
            else if ((2*n-i) <= j && (2*n-i) <= i && (2*n-i) <= (2*n-j))
            {
                printf("%d ",n-(2*n-i)+1);
            }
            else if ((2*n-j) <= j && (2*n-j) <= (2*n-i) && (2*n-j) <= i)
            {
                printf("%d ",n-(2*n-j)+1);
            }
            else
            {
                printf("%d ",n-i+1);
            }
        }
        printf("\n");
    }
}

/*int c = -1;
   int nn = 0;
   label1:
   nn++;
   c++;
    for (int i = 1; i <= (2*n-1); i++) {
            //int c = i-1;
            for (int j = 1; j <= (2*n-1); j++) {
                if (nn ==5){
                    goto label2;
                }
                if (i == n-c || i == n+c || j == n-c || j == n+c) {
                    printf("%d ",(nn));
                } else {
                    printf("  ");
                }
                break;
            }
            printf("\n");
            break;
    }
    goto label1;
    label2:
    return 0;*/