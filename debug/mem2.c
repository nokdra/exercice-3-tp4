#include<stdlib.h>
#include <stdio.h>
int main(void)
{
  int i,size,sum;
  int *p;
  
  printf("Entrez un nombre\n");
  scanf("%d",&size);

  for(i = 0 ; i< size ; i++)
    p[i] = i ;
  
  free(p);
  
/* 
  for(i = 0 ; i< size ; i++)
     sum += p[i]; 
*/  
  return EXIT_SUCCESS;     
}
