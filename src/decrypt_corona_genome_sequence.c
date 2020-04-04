#include <stdio.h>

int cycle_ascii_code(int code)
{
  if (code > 96 && code < 123)
    return code > 109 ? code - 13 : code + 13;
  return code > 77 ? code - 13 : code + 13;
}

void decrypt(int *cypher, int length, char *message)
{
  int index;
  for (index = 0; index < length; index++)
  {
    unsigned char is_letter = (cypher[index] > 96 && cypher[index] < 123) || (cypher[index] > 64 && cypher[index] < 91);
    message[index] = (char)(is_letter ? cycle_ascii_code(cypher[index]) : cypher[index]);
  }
  message[index] = '\0';
}

int main(void)
{
  int cypher[] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
  int length = sizeof(cypher) / sizeof(int);
  char message[length + 1];
  decrypt(cypher, length, message);

  printf("%s", message);
}