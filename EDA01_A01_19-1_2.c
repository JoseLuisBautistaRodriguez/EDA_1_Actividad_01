// Prueba Diagnostico
/*
	José Luis Bautista Rodríguez
	
	Actividad: Implemetar un programa que solicite un numero entero y muestre 
				un triangulo escalonado.
*/
	#include <stdio.h>
	#include <stdlib.h>
	#include <conio.h>
	
	void generadorDeNumero( unsigned int num );
	
	
	void main()
	{
		system("color 74");
		unsigned int numeroDeUsuario ;
		
		/* Activar siguiente linea de codigo para ingresar datos por parte del usuario, sí es el caso, desactivar linea 26.

		printf("\n\tIngresa un numero natural: ");
		scanf("%i", &numeroDeUsuario);
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
				printf("NL %i %c", parametro, 219 );
				for( contadorSecundario = 0 ; contadorSecundario < parametro ; contadorSecundario++ )
				{
					printf("%4d ", controlNumeroPar );
					controlNumeroPar += 2 ;
				}
			}else
			{
				printf("NL %i %c", parametro , 219);
				for ( contadorSecundario = 0 ; contadorSecundario < parametro ; contadorSecundario++ )
				{
					printf("%4d ", controlNumeroImpar );
					controlNumeroImpar += 2 ;
				}
			}
			parametro--;
		}

		printf( "\n\n\t Fin del programa, funci%cn generadorDeNumero ejecutada con %cxito.\n\n", 162, 130 );

	}
