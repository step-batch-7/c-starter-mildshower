#include <stdio.h>

void breakdown_currency(unsigned);

void breakdown_currency(unsigned amount)
{
  printf("Denominations breakdown for Rs %u :\n",amount);
  unsigned rest_amount = amount;
  printf("%u x Rs 2000\n", rest_amount / 2000);
  rest_amount = rest_amount % 2000;
  printf("%u x Rs 500\n", rest_amount / 500);
  rest_amount = rest_amount % 500;
  printf("%u x Rs 200\n", rest_amount / 200);
  rest_amount = rest_amount % 200;
  printf("%u x Rs 100\n", rest_amount / 100);
  rest_amount = rest_amount % 100;
  printf("%u x Rs 50\n", rest_amount / 50);
  rest_amount = rest_amount % 50;
  printf("%u x Rs 10\n", rest_amount / 10);
  rest_amount = rest_amount % 10;
  printf("%u x Rs 5\n", rest_amount / 5);
  rest_amount = rest_amount % 5;
  printf("%u x Rs 1\n", rest_amount / 1);
}

int main(void)
{
  unsigned amount;

  printf("Enter an amount to breakdown it into denominations: ");
  scanf("%u",&amount);
  breakdown_currency(amount);
  
  return 0;
}