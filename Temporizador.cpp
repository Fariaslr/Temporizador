#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int segundos;
	int h,m, s, resto;
	
	setlocale(LC_ALL,"portuguese");
	printf("Quantos segundos você deseja no seu temporizador?\n");
	scanf("%d",&segundos);
	    
	while(segundos >= 0){
		
		system("cls");
		
		h = segundos / 3600;
	    resto = segundos % 3600;
	    m = resto / 60;
	    s = resto % 60;
	    segundos--;
	    printf("______________\n");
	    printf("|  H   M   S |\n");
	    printf("|%2d :%2d :%2d  |\n", h, m, s);
	    printf("|____________|\n");
	    
		Sleep(1000);	
	}    
    
	if(segundos){
		printf("\nTempo encerrado!\n");
	}
	
	return 0;
}
