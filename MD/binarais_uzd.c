#include <stdio.h>
int main()
{
char skaitlis;

printf ("Ievadi naturālu skaitli\n ");
scanf ("%hhd", &skaitlis);
int biti = sizeof(skaitlis)*8;
printf("Binārais kods: ");
    for (int i = biti - 1; i >= 0; i--) {
        int bit = (skaitlis >> i) & 1;
        printf("%d", bit);
    }

printf("\n");
return 0;
}
