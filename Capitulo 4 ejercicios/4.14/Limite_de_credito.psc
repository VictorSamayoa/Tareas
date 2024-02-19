Algoritmo Limite_de_credito
	
	Definir Numero_de_cuenta, Salida Como Entero;
	Definir Sinicial, CargosT, CreditosT, LimiteCredito, Snuevo  Como real;
	
	Escribir "Ingrese su numero de cuenta";
	Leer Numero_de_cuenta;
	
	Escribir "Si Desea salir ingrese -1 de lo contrario ingrese 1";
	Leer salida;
	
	
	Mientras salida = 1 Hacer
		
		Escribir "Ingrese su Saldo inicial: "; 
		Escribir ""; 
		Escribir "Ingrese sus cargos Totales: ";
		Escribir " "; 
		Escribir "Ingrese sus Creditos Totales: ";
		Escribir ""; 
		Escribir "Ingrese su limite: ";
		Escribir ""; 
		
		
		Leer Sinicial, CargosT, CreditosT, LimiteCredito;
		
		Snuevo = (Sinicial+CargosT)-CreditosT;
		
		
		Escribir "Saldo Inicial: " Sinicial;
		Escribir ""; 
		Escribir "Cargos Totales: " CargosT;
		Escribir ""; 
		Escribir "Creditos Totales: " CreditosT;
		Escribir ""; 
		Escribir "Limite de credito: " LimiteCredito;
		Escribir ""; 
		
		
		Escribir 'El nuevo saldo es: ' Snuevo;
		Escribir ""; 
		
		Si snuevo > LimiteCredito Entonces
			Escribir  "Cuenta: " Numero_de_cuenta;
			Escribir ""; 
			Escribir "Limite de credito: " LimiteCredito;
			Escribir ""; 
			Escribir 'Saldo: ' Snuevo;
			Escribir ""; 
			Escribir " Se exedio el limite de su credito";
			
		SiNo
			Escribir  "Cuenta: " Numero_de_cuenta;
			Escribir ""; 
			Escribir "Limite de credito: " LimiteCredito;
			Escribir ""; 
			Escribir 'Saldo: ' Snuevo;
			Escribir ""; 
			Escribir " Su credito no ah sido exedido";
		Fin Si
		
		Escribir "Desea salir ingrese -1?";
		Leer salida;
		
	Fin Mientras
	
	
	
FinAlgoritmo
