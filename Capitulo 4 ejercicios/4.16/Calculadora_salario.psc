Algoritmo Calculadora_salario
	
	Definir  horas, tarifa, salario Como Real;
	Definir salida Como Entero;
	
	Repetir
		
			Escribir  "Introduzca las horas trabajadas: ";
			leer horas;
			
			Escribir  "Introduzca la tarifa de horas del empleado horas trabajadas: ";
			leer tarifa;
			Si horas >= 41 Entonces
				salario = horas * tarifa + (tarifa / 2);
			SiNo
				salario = horas * tarifa;
			Fin Si
		
			
			Escribir  "El salario a pagar es: " salario;
			Escribir  "";
			Escribir  "Si desea salir del programa escriba -1, si desea continuar ingrese 1";
			leer Salida;
			

	Hasta Que Salida = -1;
	
	
FinAlgoritmo
