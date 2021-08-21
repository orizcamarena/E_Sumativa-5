/* Activvidad: Elaborar una aplicación de línea de comandos en C que permita la usuario adivinar una palabra secreta.
El usuario tiene un máximo de 3 intentos para lograrlo. Los intentos ejecutados por el usuario deben aparecer en
pantalla. */ 

#include <stdio.h>
#include <string.h> 

int main () {

    int i; 
    char Palabra[] = "Mandarina", intento[] = "Mandarina" ; 
 
	printf("\n\t\t   Evaluacion Sumatica #5 \n ");


    printf("\n\t    Adivina la Palabra Secreta\n");
	printf("Es una fruta que empieza con 'M' y termina en 'a'\n");
    printf("Tienes 3 Intentos para adivinar la palabra \n\n");
    for( i = 1; i <= 3; i++ ){
        printf("Introduce tu palabra:\n ");
        scanf("%s", intento);

        if (strcmp(intento, Palabra) == 0){
            printf("\n !!FELICIDADES HAS ADIVINADO LA PALABRA SECRETA!!");
            break;
        }else{
            printf("\nMala suerte, perdiste... \n\n"); 
			
            
        }
    }
}


   