#include<stdio.h>
#include<stdlib.h>

int main ()
{
int i=0,v[5]={0,1, 2, 3, 4};
int x=5+3;

while (i<5)
{  
printf("imprime %d \n ",v[i]);
i=i+1;
}
printf(" cambio en la rama dos X : %d \n",x );
return (0);
}