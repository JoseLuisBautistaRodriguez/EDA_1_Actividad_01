// Prueba Diagnostico
/*
	José Luis Bautista Rodríguez
	
	Actividad: Implemetar un programa que solicite un numero entero y muestre 
				un triangulo escalonado.
*/
	#include <stdio.h>
	#include <stdlib.h>
	
	void generadorDeNumero( unsigned int num );
	
	
	void main()
	{
		unsigned int numeroDeUsuario ;
		
		/* Activar siguiente linea de codigo para ingresar datos por parte del usuario.

		printf("\n\tIngresa un numero natural: ");
		scanf("%i", numeroDeUsuario);
		
		*/
		numeroDeUsuario = 4 ;
		generadorDeNumero( numeroDeUsuario);
	
	}
	
	void generadorDeNumero( unsigned int num)
	{
		unsigned int contador = num , contadorSecundario, parametro = num , controlNumeroPar = 0 , controlNumeroImpar = 1 ;
			for ( contador = 0 ; contador < num ; contador++ )
		{
			printf( "\n\t " );
			if ( (contador % 2) == 0 )
			{
				for( contadorSecundario = 0 ; contadorSecundario < parametro ; contadorSecundario++ )
				{
					printf("%i ", controlNumeroPar );
					controlNumeroPar = controlNumeroPar + 2 ;
				}
			}else
			{
				for ( contadorSecundario = 0 ; contadorSecundario < parametro ; contadorSecundario++ )
				{
					printf("%i ", controlNumeroImpar );
					controlNumeroImpar = controlNumeroImpar + 2 ;
				}
			}
			parametro--;
		}

		printf( "\n\n\t Fin del programa, funci%cn generadorDeNumero ejecutada con %cxito.\n\n", 162, 130 );

	}
