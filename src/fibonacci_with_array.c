#include <stdio.h>

void get_fibonacci_series(unsigned long *numers, unsigned terms)
{
  numers[0] = 0;
  if (terms == 1)
    return;
  numers[1] = 1;
  if (terms == 2)
    return;
  get_fibonacci_series(numers, terms - 1);
  numers[terms - 1] = (unsigned long)numers[terms - 3] + numers[terms - 2];
}

void print_unsigned_long_integers(unsigned long *numbers, unsigned element_count)
{
  for (unsigned count = 0; count < element_count; count++)
  {
    printf("%lu\n", numbers[count]);
  }
}

int main(void)
{
  unsigned terms;
  printf("Enter How Many terms you want: ");
  scanf("%u", &terms);
  unsigned long fibonacci_series[terms];
  get_fibonacci_series(fibonacci_series, terms);
  print_unsigned_long_integers(fibonacci_series, terms);
}