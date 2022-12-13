#include <stdio.h>

int palindromecheck(int n)
{
  int reversal = 0, reminder;
  int num = n;

  while (n != 0)
  {
    reminder = n % 10;
    reversal = reversal * 10 + reminder;
    n /= 10;
  }
  printf("reversed no. is %d\n", reversal);
  if (reversal == num)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int number;
  printf("Enter the number to check whether the number is palindrome or not :");
  scanf("%d", &number);

  if (palindromecheck(number))
  {
    printf("The number is a palindrome.");
  }
  else
  {
    printf("The number is not a palindrome.");
  }

  return 0;
}