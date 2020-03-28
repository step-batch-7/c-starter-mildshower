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
float fahrenheit_to_centigrade(float);
float centigrade_to_fahrenheit(float);
float find_largest(float, float, float);
float find_average(float, float, float);

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
  return principal * pow((1 + interest_rate/100), duration) - principal;
}

float fahrenheit_to_centigrade(float temperature)
{
  return (temperature - 32) * 5 / 9;
}

float centigrade_to_fahrenheit(float temperature)
{
  return (temperature * 9 / 5) + 32;
}

float find_largest(float num1, float num2, float num3)
{
  float largest_of_2 = num1 > num2 ? num1 : num2;
  return largest_of_2 > num3 ? largest_of_2 : num3;
}

float find_average(float num1, float num2, float num3)
{
  return (num1 + num2 + num3) / 3;
}

int main(void)
{
  int num1, num2, num3, num4;
  unsigned num5, num6;
  float principal, interest_rate, duration, temperature1, temperature2;
  float num7, num8, num9;

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

  printf("Enter a temperature in Fahrenheit to convert into Centigrade: ");
  scanf("%f",&temperature1);
  printf("%.3f°F = %.3f°C\n\n",temperature1,fahrenheit_to_centigrade(temperature1));

  printf("Enter a temperature in Centigrade to convert into Fahrenheit: ");
  scanf("%f",&temperature2);
  printf("%.3f°C = %.3f°F\n\n",temperature2,centigrade_to_fahrenheit(temperature2));

  printf("Enter 3 numbers to find average and the largest one (separating by space): ");
  scanf("%f%f%f",&num7,&num8,&num9);
  printf("Largest among %.3f, %.3f and %.3f is: %.3f",num7,num8,num9,find_largest(num7,num8,num9));
  printf("Average of %.3f, %.3f and %.3f is: %.3f",num7,num8,num9,find_average(num7,num8,num9));

  return 0;
}