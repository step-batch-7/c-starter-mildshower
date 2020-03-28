#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long square(int);
long cube(int);
unsigned int gcd(unsigned int, unsigned int);
unsigned long lcm(unsigned int, unsigned int);
float find_simple_interest(float, float, float);
float find_compound_interest(float, float, int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

long square(int num)
{
  return (long)num * num;
}

long cube(int num)
{
  return square(num) * num;
}

unsigned gcd(unsigned num1, unsigned num2)
{
  unsigned divident = num1 > num2 ? num1 : num2;
  unsigned divisor = num1 < num2 ? num1 : num2;
  unsigned quotient = divident % divisor;
  if(!quotient)
  {
    return divisor;
  }
  return gcd(divisor, quotient);
}

unsigned long lcm(unsigned num1, unsigned num2)
{
  return ((unsigned long)num1 * num2) / gcd(num1, num2);
}

float find_simple_interest(float principal, float interest_rate, float duration)
{
  return (principal * interest_rate * duration) / 100;
}

float find_compound_interest(float principal, float interest_rate, int duration)
{
  return principal*pow((1+interest_rate/100),duration) - principal;
}

int main(void)
{
  int num1, num2, num3, num4;
  unsigned num5, num6;
  float principal, interest_rate, duration;

  printf("Enter a number to check whether it is even or not: ");
  scanf("%d",&num1);
  printf("Your Entered Number %d is %s\n\n",num1,is_even(num1)?"Even":"Not Even");

  printf("Enter a number to check whether it is odd or not: ");
  scanf("%d",&num2);
  printf("Your Entered Number %d is %s\n\n",num2,is_odd(num2)?"Odd":"Not Odd");

  printf("Enter a number to find square: ");
  scanf("%d",&num3);
  printf("Square of entered number %d is %ld\n\n",num3,square(num3));

  printf("Enter a number to find cube: ");
  scanf("%d",&num4);
  printf("Cube of entered number %d is %ld\n\n",num4,cube(num4));

  printf("Enter two numbers to find GCD and LCM (separate by space): ");
  scanf("%u%u",&num5,&num6);
  printf("GCD of %u and %u is: %u\n",num5,num6,gcd(num5,num6));
  printf("LCM of %u and %u is: %lu\n\n",num5,num6,lcm(num5,num6));

  printf("Finding Interest--\nEnter Principal: ");
  scanf("%f", &principal);
  printf("Enter Interest Rate: ");
  scanf("%f", &interest_rate);
  printf("Enter Duration: ");
  scanf("%f", &duration);
  printf("Simple Interest of %.3f at %.3f%%/year for %.3f year(s) is: %.3f\n",principal,interest_rate,duration,find_simple_interest(principal,interest_rate,duration));
  printf("Compound Interest of %.3f at %.3f%%/year for %.3f year(s) is: %.3f\n\n",principal,interest_rate,duration,find_compound_interest(principal,interest_rate,(int)duration));

  return 0;
}