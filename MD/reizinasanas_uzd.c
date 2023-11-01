#include <stdio.h>
int main()
{
long int skaitlis1;
long int skaitlis2;

printf ("Ievadi skaitli 400 000\n ");
scanf ("%ld", &skaitlis1);
printf ("Ievadi skaitli 100 000\n ");
scanf ("%ld", &skaitlis2);
long long result = skaitlis1*skaitlis2;
printf ("Sarezinot %ld ar %ld rezultats ir %lld\n", skaitlis1, skaitlis2, result);
return 0;
}
