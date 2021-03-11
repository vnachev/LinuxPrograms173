#include <stdio.h>

int main()
{
   int number;
   printf("Enter number: ");
   scanf("%d", &number);
   if (number == 0)
   {
      printf("Zero");
   }
   else if (number > 0)
   {
      printf("Positive");
   }
   else
   {
      printf("Negative");
   }
   return 0;
}
