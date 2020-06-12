#include <iostream>

using namespace std;

void contador(int numero){
	if(numero>0){
    	while(numero!=1){
    		if(numero%2 == 0){
            	numero=numero/2;
			}else{
            	numero=numero*3+1;
				}
        	printf("%i ",numero);
    }
  }else {
    return;
    }
}

int main (void)
{
    int numero;
    printf("Numero: ");
    scanf("%i",& numero);
    contador(numero);
}
