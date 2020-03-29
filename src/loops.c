#include <stdio.h>

unsigned long find_factorial(unsigned);
void print_fibonacci(unsigned);
void print_odd_series(unsigned);
void print_even_series(unsigned);
void print_multiplication_table(unsigned, unsigned);
long get_sum_of_numbers(int, unsigned);
long get_product_of_numbers(int, unsigned);
void print_odd_numbers(int, int);
void print_nth_numbers(int, int, int);
long get_sum_of_evens(int, int);
void print_reverse_odds(unsigned);

unsigned long find_factorial(unsigned num)
{
  unsigned long fact = 1;
  for(; num > 0; num--)
  {
    fact *= num;
  }
  return fact;
}

void print_fibonacci(unsigned element_count)
{
  unsigned long prev = 0, next = 1;
  printf("%u fibonacci element(s)--\n",element_count);
  for(; element_count > 0; element_count--)
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

void print_multiplication_table(unsigned multiplicand, unsigned multiplierLimit)
{
  printf("Multiplication Table of %u upto %u--\n",multiplicand,multiplierLimit);
  for(unsigned multiplier = 1; multiplier <= multiplierLimit; multiplier++)
  {
    printf("%u x %u = %lu\n", multiplicand, multiplier, (unsigned long)multiplicand * multiplier);
  }
}

long get_sum_of_numbers(int start_num, unsigned number_count)
{
  long sum = 0;
  for(int curr_num = start_num; curr_num < start_num + number_count; curr_num++)
  {
    sum += curr_num;
  }
  return sum;
}

long get_product_of_numbers(int start_num, unsigned number_count)
{
  long product = 1;
  for(int curr_num = start_num; curr_num < start_num + number_count; curr_num++)
  {
    product *= curr_num;
  }
  return product;
}

void print_odd_numbers(int start_num, int end_num)
{
  printf("Odd Numbers between %d and %d(inclusive)--\n",start_num,end_num);
  for(int odd = start_num % 2 == 0 ? start_num + 1 : start_num; odd <= end_num; odd += 2)
  {
    printf("%d\n",odd);
  }
}

void print_nth_numbers(int start_num, int end_num, int increment)
{
  printf("%dth Numbers between %d and %d(inclusive)--\n",increment,start_num,end_num);
  for(int curr_num = start_num; curr_num <= end_num; curr_num += increment)
  {
    printf("%d\n",curr_num);
  }
}

long get_sum_of_evens(int start_num, int end_num){
  long sum = 0;
  for(int even = start_num % 2 == 0 ? start_num : start_num + 1; even <= end_num; even += 2)
  {
    sum += even;
  }
  return sum;
}

void print_reverse_odds(unsigned start_num)
{
  printf("Odd numbers in reverse from %u to 1(inclusive)--\n",start_num);
  for(int odd = start_num % 2 != 0 ? start_num : start_num - 1; odd > 0; odd -= 2)
  {
    printf("%u\n",odd);
  }
}

int main()
{
  unsigned num1, num2, num3, num4, num12, element_count, upper_limit;
  int start_num, num5, num6, num7, num8, num9, num10, num11;
  
  printf("Enter a number to find factorial: ");
  scanf("%u",&num1);
  printf("Factorial of %u is: %lu\n\n",num1,find_factorial(num1));

  printf("Enter how many fibonacci elements you want: ");
  scanf("%u",&element_count);
  print_fibonacci(element_count);

  printf("\nEnter upper limit to see Odd and Even numbers: ");
  scanf("%u",&upper_limit);
  print_odd_series(upper_limit);
  print_even_series(upper_limit);

  printf("\nEnter Multiplicand: ");
  scanf("%u",&num2);
  printf("Enter Multiplier limit: ");
  scanf("%u",&num3);
  print_multiplication_table(num2, num3);

  printf("\nEnter starting number and numbers count separated by space: ");
  scanf("%d%u",&start_num,&num4);
  printf("Sum of %u number(s) starting from %d is: %ld\n",num4,start_num,get_sum_of_numbers(start_num,num4));
  printf("Product of %u number(s) starting from %d is: %ld\n\n",num4,start_num,get_product_of_numbers(start_num,num4));

  printf("Enter start and end number for odds (separated by space): ");
  scanf("%d%d",&num5,&num6);
  print_odd_numbers(num5, num6);

  printf("\nEnter start and end number for nth numbers (separated by space): ");
  scanf("%d%d",&num7,&num8);
  printf("Enter jump between numbers: ");
  scanf("%d",&num9);
  print_nth_numbers(num7, num8, num9);

  printf("\nEnter start and end number for even sum (separated by space): ");
  scanf("%d%d",&num10,&num11);
  printf("Sum of evens between %d and %d(inclusive): %ld\n\n",num10,num11,get_sum_of_evens(num10,num11));

  printf("Enter starting number for reverse odds: ");
  scanf("%u",&num12);
  print_reverse_odds(num12);

  return 0;
}