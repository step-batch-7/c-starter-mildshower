#include <stdio.h>

void breakdown_currency(unsigned amount, unsigned denominations_count, unsigned breakdown_values[][2]);
void print_denominations(unsigned, unsigned[][2]);

void breakdown_currency(unsigned amount, unsigned denominations_count, unsigned breakdown_values[][2])
{
  unsigned left_amount = amount;
  for (int count = 0; count < denominations_count; count++)
  {
    breakdown_values[count][1] = left_amount / breakdown_values[count][0];
    left_amount = left_amount % breakdown_values[count][0];
  }
}

void print_denominations(unsigned denominations_count, unsigned breakdown_values[][2])
{
  for (int index = 0; index < denominations_count; index++)
  {
    printf("%u x %u\n", breakdown_values[index][0], breakdown_values[index][1]);
  }
}

int main(void)
{
  unsigned breakdown_values[][2] = {{2000, 0}, {500, 0}, {200, 0}, {100, 0}, {50, 0}, {10, 0}, {5, 0}, {1, 0}};
  unsigned amount, denominations_count = sizeof(breakdown_values) / sizeof(breakdown_values[0]);

  printf("Enter an amount to breakdown it into denominations: ");
  scanf("%u", &amount);
  breakdown_currency(amount, denominations_count, breakdown_values);
  print_denominations(denominations_count, breakdown_values);

  return 0;
}