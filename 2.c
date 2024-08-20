#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char c2[40];
    char c3[100];
    scanf("%c",&c);
    scanf("%s",c2);
    getchar();
    scanf("%[^\n]%*c",&c3);
    printf("%c\n",c);
    printf("%s\n",c2);
    printf("%s\n",c3);
    return 0;
}