#include <stdio.h>

int gcd(int num1, int num2)
{
  int divident = num1 > num2 ? num1 : num2;
  int divisor = num1 < num2 ? num1 : num2;
  int quotient = divident % divisor;
  if(!quotient){
    return divisor;
  }
  return gcd(divisor, quotient);
}

int main()
{
  printf("%d",gcd(30,75));
}