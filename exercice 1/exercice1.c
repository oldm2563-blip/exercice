#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b;
    int i;
    printf("enter number:");
    scanf("%d" , &a);
    for(i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d\n" , a , i ,b = a * i );
    }


    return 0;
}
