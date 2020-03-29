#include <stdio.h>

unsigned long find_factorial(unsigned);

unsigned long find_factorial(unsigned num)
{
  unsigned long fact = 1;
  for(; num > 0; num--)
  {
    fact *= num;
  }
  return fact;
}

int main()
{
  unsigned num1;
  
  printf("Enter a number to find factorial: ");
  scanf("%u",&num1);
  printf("Factorial of %u is: %lu\n\n",num1,find_factorial(num1));

  return 0;
}