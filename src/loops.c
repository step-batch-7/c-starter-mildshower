#include <stdio.h>

unsigned long find_factorial(unsigned);
void print_fibonacci(unsigned);
void print_odd_series(unsigned);

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

void print_odd_series(unsigned limit)
{
  for(unsigned odd = 1; odd <= limit; odd += 2){
    printf("%u\n", odd);
  }
}

int main()
{
  unsigned num1, elementCount, upperLimit;
  
  printf("Enter a number to find factorial: ");
  scanf("%u",&num1);
  printf("Factorial of %u is: %lu\n\n",num1,find_factorial(num1));

  printf("Enter how many fibonacci elements you want: ");
  scanf("%u",&elementCount);
  print_fibonacci(elementCount);

  printf("\nEnter upper limit to see Odd numbers: ");
  scanf("%u",&upperLimit);
  print_odd_series(upperLimit);

  return 0;
}