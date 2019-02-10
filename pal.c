#include <stdio.h>
int main()
{
   int number, reminder = 0, total;
   printf("Enter an integer to check if it is palindrome or not\n");
   scanf("%d", &number);
   total = number;
   while (total != 0)
   {
      reminder = reminder * 10;
      reminder = reminder + t%10;
      total = total/10;
   }
   if (number == reminder)
      printf("%d is a palindrome number.\n", number);
   else
      printf("%d isn't a palindrome number.\n", number);
   return 0;
}
