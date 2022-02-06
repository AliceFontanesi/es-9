# include <stdio.h>
int main()
{
   int a, b, c;
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
            printf("Il valore minimo della seguente terna è: %d \n", a);
            printf("Il valore massimo della seguente terna è: %d \n", c);
       }else
            printf("La terna non rispetta la condizione a < b < c \n");
   } while (a >= 0 && b >= 0 && c >= 0);
   return 0;
}
