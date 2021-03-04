#include<stdio.h>
#include<stdlib.h>


int main()
{
      int j=0,p,f,n,d;
      printf("Quantos numeros primos pretende exibir? ");
      scanf("%i",&n);
      d=n*(-1);
      printf("Os primeiros %i numeros primos sao:\n",n);
      do
      {  j++;        
         f=0;
         for(p=1;p<j;p++)
             if(j%p==0)
             f++;
         if(f==1){
             printf("%i\n",j);
             d++;
                 }
      }while(d);
      printf("\n\n");
    return 0;
}                    