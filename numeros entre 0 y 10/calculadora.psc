Algoritmo calculadora
	Escribir "Que desea realizar";
	Escribir "1 sumar";
	Escribir "2 restar";
	Escribir "3 multiplicar";
	Escribir "4 dividir";
	leer opcion;
	Si opcion = 1 Entonces
		Escribir "ingrese el primer numero a evaluar";
		leer a;
		Escribir "ingrese el segundo numero a evaluar";
		leer b;
		resul<-(a+b);
		Escribir "la suma de los dos numero es: ", resul;
		
	SiNo
		Si opcion = 2 Entonces
			Escribir "ingrese el primer numero a evaluar";
			leer a;
			Escribir "ingrese el segundo numero a evaluar";
			leer b;
			resul<-(a-b);
			Escribir "la resta de los dos numero es: ", resul;
		SiNo
			Si opcion = 3 Entonces
				Escribir "ingrese el primer numero a evaluar";
				leer a;
				Escribir "ingrese el segundo numero a evaluar";
				leer b;
				resul<-(a*b);
				Escribir "la multiplicacion de los dos numero es: ", resul;
			SiNo
				Si opcion = 4 Entonces
					Escribir "ingrese el primer numero a evaluar";
					leer a;
					Escribir "ingrese el segundo numero a evaluar";
					leer b;
					si b = 0;
						
						Escribir "Error matematico no se puede dividir entre 0";
							
					
						

					FinSi
							

					resul<-(a/b);
					Escribir "la division de los dos numero es: ", resul;
					
				SiNo
					Escribir "evaluar si el numero que elegio es correcto";
				Fin Si
			Fin Si
		Fin Si
	Fin Si
FinAlgoritmo
