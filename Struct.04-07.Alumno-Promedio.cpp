#include<iostream>
#include<conio.h>

struct Alumno{
    char name[20];
    int edad;
    float prom;
}alumnos[3];

int main(){
    
    int na, i, j;
    for(i=0; i<3; i++){
        printf(" Ingresa el nombre del alumno %d: ", i+1);
        scanf("%s", &alumnos[i].name);
        printf(" Digite su edad: ");
        scanf("%d", &alumnos[i].edad);
        printf(" Digite su promedio: ");
        scanf("%f", &alumnos[i].prom);
        printf("\n");
    }
	
	Alumno aux;
	
	for(i=0; i<3-1; i++){
		for(j=i+1; j<3; j++){
			if(alumnos[i].prom<alumnos[j].prom){
				aux = alumnos[i];
				alumnos[i] = alumnos[j];
				alumnos[j] = aux;
			}
		}
	}
	
	printf("\nEl mejor promedio pertenece a %s de edad %d, con %.2f\n", alumnos[0].name, alumnos[0].edad, alumnos[0].prom);
	
	return 0;
}
