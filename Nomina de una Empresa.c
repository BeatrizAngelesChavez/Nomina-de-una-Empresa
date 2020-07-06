#include <stdio.h>
#include <stdlib.h>

int main (){
	int op;
	
	printf("Nominade una Empresa\n\n");
	printf("1.Datos de la Empresa\n");
	printf("2.Datos basicos del Trabajador\n");
	printf("3.Periodo de Liquidacion\n");
	printf("4.Detalle de las Percepciones\n");
	printf("5.Detalle de las Deducciones\n");
	printf("6.Detalle de las Bases de Cotizacion\n");
	printf("7.Liquido a Persivir\n");
	printf("8.Lugar de emision,firma y sello por la empresa y trabajador\n");
	printf("9.Salir del menu\n");
	scanf("%d",&op); 
	switch (op){
	case 1:
			printf("rason social\n");
			printf("RFC\n");
			printf("Incidencias\n");
			printf("Salario ordinario\n");
			printf("Percepciones\n");
			break;
	case 2:
			printf("Nombre del Trabajador\n");
			printf("RFC\n");
			break;
	case 3:
			printf("Salario Nº Dias:\n");
			break;
	case 4:
			printf("Deducciones:\n");
			break;	
	case 5:
			printf("Deducciones de Anticipos o Embargos\n");
			break;	
	case 6:
			printf("Nomina de Bases de IRPF:\n");
			break;	
	case 7:
			printf("Documento Acreditativo de Pago de Salarios Pendientes:\n");
			break;
	case 8:
			printf("Firma del Trabajador para Demostrar la Percepcion Salarial por Parte del Trabajador:\n");
			break;					
	return 0;
}
}
