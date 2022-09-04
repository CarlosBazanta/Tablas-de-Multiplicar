#include <stdio.h> 
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void clearBuf(void);
int validFormat(const char*, void*);
int validar=1;

int main(){
	
	int op,opc,i,mul; //se de claran las variables
	 
		 op=1;//inicia el bucle
	 
	while(op==1){//bucle que repite el progrma
	 
	 	//se le pide al usuario que ingrese los datos
	 
		verificacion1: //marca un punto en el programa para poder retornar a el
				
			do{//empieza un ciclo para reiniciar en caso de que una opcion este mala
			
				printf("\nIngrese la tabla quedesea calcular\n");
				printf("\nSu numero = "); //se imprime en pantalla las opciones a ingresar
					
				if(validFormat("%i",&opc)) continue; //validformat nos sirve para ingresar los datos y validarlos
			
				validar=opc<=0;//valida la opcion y si es menor saltara un error
			
				if(validar){//if que sirve para imprimir en pantalla el error
				
					printf("\n\nIngreso un numero invalido\n");
					printf("No se aceptan valores tan bajos\n\n"); //imprime en pantalla el error
			
				}
			}while(validar); //que retorna despues de mostrar el error
			
			if(opc>=11 || opc>=999999){ //if que sirve para imprimir en pantalla el error de numeros muy grandes
				
				printf("\n\nIngreso un numero demasiado alto o invalido\n");
				printf("Ingrese una opcion valida\n\n"); //imprime en pantalla el error
			
				goto verificacion1; //da la orden para que el programa vaya a un punto de este
				
			}
			
			printf("\n-------Tabla del %i-------\n",opc); //imprime un membrete
			
			for(i=0;i<=10;i++){
				
			mul=i*opc;//operacion matetatica
			
			printf("\n|\t%ix%i = %i \t|\n",opc,i,mul);//imprime el resultado
			
			if(i==10){
				
				printf("-------------------------");
				
			}	
				
			}
	 
		//se le pide al usuario que ingrese los datos
	 
		verificacion: //marca un punto en el programa para poder retornar a el
				
			do{//empieza un ciclo para reiniciar en caso de que una opcion este mala
			
				printf("\nDesea repetir el programa\n\t1.Si o 2.No\n");
				printf("\nSu opcion es = "); //se imprime en pantalla las opciones a ingresar
					
				if(validFormat("%i",&op)) continue; //validformat nos sirve para ingresar los datos y validarlos
			
				validar=op<=0;//valida la opcion y si es menor saltara un error
			
				if(validar){//if que sirve para imprimir en pantalla el error
				
					printf("\n\nIngreso un numero invalido\n");
					printf("No se aceptan valores tan bajos\n\n"); //imprime en pantalla el error
			
				}
			}while(validar); //que retorna despues de mostrar el error
			
			if(op>=3 || op>=999999){ //if que sirve para imprimir en pantalla el error de numeros muy grandes
				
				printf("\n\nIngreso un numero demasiado alto o invalido\n");
				printf("Ingrese una opcion valida\n\n"); //imprime en pantalla el error
			
				goto verificacion; //da la orden para que el programa vaya a un punto de este
				
			}
		
			system("cls");//limpia la pantalla
		
	}

printf("\n\n\t\4Hasta la proxima\4\n");//mensaje de despedida


getch();
	
}




int validFormat(const char* formato, void* variable){ /* Esto es para verificar variables */
	
	validar=1;//reseteamos la comprobacion de la opcion
    /* si se retorna 0 fue porque ocurrio un error*/
    
    if(!scanf(formato, variable) || (getchar() != '\n'))
    {
        
        clearBuf();/* Se utiliza para limpiar el buffer */
        
        printf("\n\n\tError\n\n");
        printf("\n\tUsted Ingreso una opcion no valida\n"); /* Se imprime en pantalla el error */
        printf("\n\tPor favor ingrese una opcion valida\n");
        system("pause");
		
        return 1;
    }
    
    return 0;
}

void clearBuf()
{
    int ch;
    /* Se utiliza para limpiar el buffer */
    while((ch = getchar()) != '\n' && ch != EOF);
}

