#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Corredor{
    
    char nombre[20];
    int edad;
    char sexo[20];
    char club[30];
    char categoria[30];
    
}corredores[100];

int main()
{
	int nc;
	printf("Digite la cantidad de corredores\nque desea conocer su categoria: ");
	scanf("%d", &nc);
	
for(int i=0; i<nc; i++){
	printf("\n");
    fflush(stdin);
    printf(" Digite su nombre: ");
    scanf("%s", &corredores[i].nombre);
    printf(" Digite su edad: ");
    scanf("%d", &corredores[i].edad);
    printf(" Ingrese su sexo: ");
    scanf("%s", &corredores[i].sexo);
    fflush(stdin);
    printf(" Ingrese el club al que pertenece: ");
    scanf("%s", &corredores[i].club);
    if(corredores[i].edad<=18){
        strcpy(corredores[i].categoria, "Juvenil");
    }
    else if(corredores[i].edad<=40){
        strcpy(corredores[i].categoria, "Senior  ");
    }
    else if(corredores[i].edad>40){
        strcpy(corredores[i].categoria, "Veterano");
    }
}
for(int i=0; i<nc; i++){
    printf(" ________________________________\n");
    printf("|| Corredor  | \t#%d \t\t||\n", i+1);
    printf("||  Nombre   | \t%s \t\t||\n", corredores[i].nombre);
    printf("||   Edad    | \t%d \t\t||\n", corredores[i].edad);
    printf("||   Sexo    | \t%s \t||\n", corredores[i].sexo);
    printf("||   Club    | \t%s \t\t||\n", corredores[i].club);
    printf("|| Categoria | \t%s \t||\n", corredores[i].categoria);
}

    system("pause");
    return 0;
}
