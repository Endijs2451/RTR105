#include <stdio.h>

int main()
{
char teikums[100];
int atstarpes = 0;
int burti_varda = 0;
int vardi = 0;

printf("Ievadi teikumu: ");
fgets(teikums, sizeof(teikums), stdin);
printf("Ievadītais teikums ir :");
puts(teikums);

int n_bytes = sizeof(teikums);
int n = n_bytes/sizeof(int);
printf("%d\n", n);

for(int i=0; i<=n;i++) {

	if(teikums[i]==' ') {
		printf("atstarpes\n");
		atstarpes++;
	} else {
	burti_varda++;
	if(burti_varda>=5){
	vardi++;
}
	}
	
}
printf("Teikumā ir %d atstarpes\n", atstarpes);
printf("teikumā ir %d vārdi\n", vardi);
}
