#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i , n ;
  int to = 1;
  printf("pick number :");
  scanf("%d" , &n);
  for(i = 1 ; i <= n ; i++){
    to = i * to ;
  }

  printf("%d" ,to);

}
