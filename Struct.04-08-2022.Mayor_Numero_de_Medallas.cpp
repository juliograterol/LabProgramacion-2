#include <stdio.h>
#include <conio.h>

struct Atleta{
	char name[20];
	char pais[30];
	int medallas;
	
}atletas[100];

int main(){
	
	int na, i, j;
	
	printf("Digite la cantidad de atletas con la que se esta trabajando: ");
	scanf("%d", &na);
	printf("\n");
	
	for(i=0; i<na; i++){
		printf("Para el atleta #%d, por favor:\n", i+1);
		printf(" Ingrese el nombre: ");
		scanf("%s", &atletas[i].name);
		printf(" Ingrese el pais de donde proviene: ");
		scanf("%s", &atletas[i].pais);
		printf(" Ingrese la cantidad de medallas: ");
		scanf("%d", &atletas[i].medallas);
		printf("\n");
	}
	
	Atleta aux;
	
	for(i=0; i<na-1; i++){
		for(j=i+1; j<na; j++){
			if(atletas[i].medallas<atletas[j].medallas){
				aux = atletas[i];
				atletas[i] = atletas[j];
				atletas[j] = aux;
			}
		}
	}
	
	printf(" N\t Nombre\t\t Pais\t\t\tMedallas \n");
	for(i=0; i<na; i++){
		printf("#%d\t %s\t\t %s\t\t %d\n", i+1, atletas[i].name, atletas[i].pais, atletas[i].medallas);
	}
	printf("\n");
	printf("El atleta con mas medallas es: %s de %s con %d medallas.\n", atletas[0].name, atletas[0].pais, atletas[0].medallas);
	
	return 0;
}
