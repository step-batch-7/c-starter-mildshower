#include <stdio.h>

unsigned long find_factorial(unsigned);
void print_fibonacci(unsigned);

unsigned long find_factorial(unsigned num)
{
  unsigned long fact = 1;
  for(; num > 0; num--)
  {
    fact *= num;
  }
  return fact;
}

void print_fibonacci(unsigned elementCount)
{
  unsigned long prev = 0, next = 1;
  for(; elementCount > 0; elementCount--)
  {
    printf("%lu\n", prev);
    next += prev;
    prev = next - prev;
  }
}

int main()
{
  unsigned num1, elementCount;
  
  printf("Enter a number to find factorial: ");
  scanf("%u",&num1);
  printf("Factorial of %u is: %lu\n\n",num1,find_factorial(num1));

  printf("Enter how many fibonacci elements you want: ");
  scanf("%u",&elementCount);
  print_fibonacci(elementCount);

  return 0;
}