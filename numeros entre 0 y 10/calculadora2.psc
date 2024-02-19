Algoritmo calculadora2
	Definir n1,n2,ope,resul Como real;
	Definir rep Como Caracter;
	
	Repetir
	Escribir "Ingrese una opcion";
	Escribir "1. suma";
	Escribir "2. resta";
	Escribir "3. multiplicacion";
	Escribir "4. division";
	leer ope;
	
	
	
	Escribir "Ingrese primer valor";
	leer n1;
	
	Escribir "Ingrese segundo valor";
	leer n2;
	
		Segun ope Hacer
			1:
				resul = n1+n2;
				Escribir "La suma es ", resul;
			2:
				resul = n1-n2;
				Escribir "La resta es ", resul;
			3:
				resul = n1*n2;
				Escribir "La multiplicacion es ", resul;
			4:
				n2 = 0;
				Escribir "Division de 0 no es posible";
				resul = n1/n2;
				Escribir "La division es ", resul;
			De Otro Modo:
				Escribir "Opcion incorrecta";
				
				
		Fin Segun
		
		
		Escribir "Desea realizar otra opreacion?";
		Escribir "S/N";
		Leer rep;
		
		
		Hasta Que rep = "N"; 
		
		
FinAlgoritmo
