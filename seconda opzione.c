#include <stdio.h>
#include <limits.h>
int main()
{
   int a, b, c, min = INT_MAX, max = 0;
   do
   {
       printf("Inserisci a \n");
       scanf("%d", &a);
       printf("Inserisci b \n");
       scanf("%d", &b);
       printf("Inserisci c \n");
       scanf("%d", &c);	
       if(a < b && b < c)
       {
            if(a < min)
                min = a;
            if(c > max)
                max = c;
       }else
            printf("La terna non rispetta la condizione a < b < c \n");
   } while (a >= 0 && b >= 0 && c >= 0);
    printf("Il valore minimo è: %d \n", min);
    printf("Il valore massimo è: %d \n", max);
   return 0;
}
