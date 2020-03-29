#include <stdio.h>

unsigned long find_factorial(unsigned);
void print_fibonacci(unsigned);
void print_odd_series(unsigned);
void print_even_series(unsigned);

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
  printf("%u fibonacci element(s)--\n",elementCount);
  for(; elementCount > 0; elementCount--)
  {
    printf("%lu\n", prev);
    next += prev;
    prev = next - prev;
  }
}

void print_odd_series(unsigned limit)
{
  printf("Odd numbers between 1 and %u(inclusive)--\n",limit);
  for(unsigned odd = 1; odd <= limit; odd += 2){
    printf("%u\n", odd);
  }
}

void print_even_series(unsigned limit)
{
  printf("Even numbers between 1 and %u(inclusive)--\n",limit);
  for(unsigned even = 2; even <= limit; even += 2){
    printf("%u\n", even);
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

  printf("\nEnter upper limit to see Odd and Even numbers: ");
  scanf("%u",&upperLimit);
  print_odd_series(upperLimit);
  print_even_series(upperLimit);

  return 0;
}