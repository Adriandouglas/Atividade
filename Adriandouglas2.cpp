#include <stdio.h>

int main ()
{
  int cont1, cont2, div=0;
  
  for(cont2=1; cont2<=1000; cont2++, div = 0){
    
    for(cont1=1; cont1<=1000; cont1++){
      if (cont2%cont1==0){
	div++;
      }
    }
    
    if(div==2)
      printf ("%i é primo\n",cont2);
    else
      printf ("%i não é primo\n",cont2);
  }
  
}