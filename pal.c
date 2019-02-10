#include <stdio.h>
int main()
{
   int number, reminder = 0, total;
   printf("Enter an integer to check if it is palindrome or not\n");
   scanf("%d", &number);
   total = number;
   while (total <=100)
   {
      reminder = reminder * 10;
      reminder = reminder + total%10;
      total = total/10;
   }
   if (number == reminder)
      printf("%d  palindrome number.\n", number);
   else
      printf("%d not palindrome number.\n", number);
   return 0;
}
