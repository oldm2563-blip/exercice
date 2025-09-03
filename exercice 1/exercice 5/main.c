#include <stdio.h>
#include <stdlib.h>

int main()
{
int a , b , c , d;
int i = 1;
printf("please enter a number:");
scanf("%d" , &a);
printf("puissance :");
scanf("%d" , &d);

if(d == 0){
    printf("%d" ,i);
}
else{
        c = a ;
    for(b = 2 ;b <= d ;b++){
        a = c * a ;

    }
printf("%d" , a);
}

    return 0;
}
