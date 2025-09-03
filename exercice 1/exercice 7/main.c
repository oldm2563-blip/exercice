#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, c, d , e , f , g , h , i ,j;
printf("please enter number :");
scanf("%d" , &a);
b = a % 10;
c = a / 10;
d = c % 10;
e = a / 100;
f = e % 10;
g = a / 1000;
h = g % 10;
i = a / 10000;
j = i % 10;

printf("%d%d%d%d%d" , b, d , f ,h , j);
}
