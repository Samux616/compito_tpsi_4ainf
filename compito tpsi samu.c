#include <stdio.h>
#include <math.h>

int main(){
	
	int menu(void);
	int s = 0;
	
		printf("inserisci la scelta tra +, *, -, /, ^, #, !(per uscire) :\n");
		scanf ("%s",&s);
		printf("+ Somma\n");
		printf("* Moltiplicazione\n");
		printf("- Differenza\n");
		printf("/ Divisione\n");
		printf("^ Potenza\n");
		printf("# Logger\n");
		printf("! Esci\n");


	int somma(int n1, int n2){
		int som=0;
		printf("Inserisci un numero:\n");
		scanf ("%d",&n1);
		printf ("Inserisci un numero:\n");
		scanf ("%d",&n2);
		som=n1+n2;
		printf("%d+%d= %d",som);
		return n1,n2;
	}
	int differenza(int n1, int n2){
		int diff=0;
		printf ("Inserisci un numero:\n");
		scanf ("%d",&n1);
		printf ("Inserisci un numero:\n");
		scanf ("%d",&n2);
		diff=n1-n2;
		printf ("%d-%d=%d",diff);
		return n1,n2;
	}
	int moltiplicazione(int n1, int n2){
		int ris=0;
		printf ("Inserisci un numero:\n");
		scanf ("%d",&n1);
		printf ("Inserisci un numero:\n");
		scanf ("%d",&n2);
		ris=n1*n2;
		printf ("%d*%d=%d",ris);
		return n1,n2;
	}
	float divisione(float n1, float n2){
		float div=0;
		printf ("Inserisci un numero:\n");
		scanf ("%f",&n1);
		printf ("Inserisci un numero:\n");
		scanf ("%f",&n2);
		div=n1/n2;
		printf ("%f:%f=%.2f",div);
		return n1,n2;
	}
}	
	


