#include <stdio.h>

int main()
{
   int number;
   printf("Hello\n");
   printf("Enter number: ");
   scanf("%d", &number);
   if (number == 0)
   {
      printf("Zero\n");
   }
   else if (number > 0)
   {
      printf("Positive\n");
   }
   else
   {
      printf("Negative\n");
   }
   return 0;
}
