#include <stdio.h>
#include <conio.h>

struct Empleado{
	char name[20];
	float sueldo;
	
}empleados[100];

int main(){
	
	int ne, i, j;
	
	printf("Digite la cantidad de empleados con la que se esta trabajando: ");
	scanf("%d", &ne);
	printf("\n");
	
	for(i=0; i<ne; i++){
		printf("Para el empleado #%d, por favor:\n", i+1);
		printf(" Ingrese el nombre: ");
		scanf("%s", &empleados[i].name);
		printf(" Ingrese el sueldo: ");
		scanf("%f", &empleados[i].sueldo);
		printf("\n");
	}
	
	Empleado aux;
	
	for(i=0; i<ne-1; i++){
		for(j=i+1; j<ne; j++){
			if(empleados[i].sueldo<empleados[j].sueldo){
				aux = empleados[i];
				empleados[i] = empleados[j];
				empleados[j] = aux;
			}
		}
	}
	
	printf(" N\t Nombre\t\t Sueldo \n");
	for(i=0; i<ne; i++){
		printf("#%d\t %s\t\t %f\n", i+1, empleados[i].name, empleados[i].sueldo);
	}
	printf("\n");
	printf("El empleado con mayor sueldo es: %s con %f de sueldo.\n", empleados[0].name, empleados[0].sueldo);
	printf("El empleado con menor sueldo es: %s con %f de sueldo.", empleados[ne-1].name, empleados[ne-1].sueldo);

	
	return 0;
}
