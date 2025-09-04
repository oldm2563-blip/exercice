    ²#include <stdio.h>
#include <stdlib.h>

int main()
{ char name[20];
   int a , b , c , d, e , f ;
   int tot, moy, big, low;

    do{
    f = 1;
   printf("enter your name :");
   scanf("%s" , &name);
   printf("la note matiere 1 :");
   scanf("%d" , &a);
   printf("la note matiere 2 :");
   scanf("%d" , &b);
   printf("la note matiere 3 :");
   scanf("%d" , &c);
   printf("la note matiere 4 :");
   scanf("%d" , &d);
   printf("la note matiere 5 :");
   scanf("%d" , &e);

   if( a > 100 ||  a <0){
    printf("try again\n");
    f = 0;
   }
  else if( b > 100 ||  b <0)
    {
    printf("try again");
    f = 0;
   }
    else if( c > 100 ||  c <0)
    {
    printf("try again");
    f = 0;
   }
    else if( d > 100 ||  d <0)
    {
    printf("try again");
    f = 0;
   }
    else if( e > 100 ||  e <0)
    {
    printf("try again");
    f = 0;
   }

   }while(f == 0);
     big = a;
    if (b > big) big = b;
    if (c > big) big = c;
    if (d > big) big = d;
    if (e > big) big = e;

       low = a;
    if (b < low) low = b;
    if (c < low) low = c;
    if (d < low) low = d;
    if (e < low) low = e;

    tot = a + b + c + d + e ;

     moy = tot / 5;



printf("%s\n" , name);

printf("matiere 1 %d\n" , a);
printf("matiere 2 %d\n" , b);
printf("matiere 3 %d\n" , c);
printf("matiere 4 %d\n" , d);
printf("matiere 5 %d\n" , e);
printf("total %d\n" , tot);

printf("moyenne %d\n" , moy);
printf("highest score is %d\n" , big);
printf("lowest score is %d\n" , low);
if(moy>90){
    printf("A");
}
else if(moy>80){
    printf("B");
}
else if(moy>70){
    printf("C");
}
else if(moy>60){
    printf("D");
}
else{
    printf("F");
}
}

