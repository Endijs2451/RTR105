#include <stdio.h>
int main()
{
  char vards[80];
  int vecums, gads;

  printf ("Ievadi savu vārdu: ");
  scanf ("%s", vards);
  printf ("Ievadi savu vecumu: ");
  scanf ("%d", &vecums);
  gads = 2023-vecums;
  printf ("Tevi sauc %s, un tu esi dzimis %d. gadā.\n", vards, gads);

  return 0;
}
