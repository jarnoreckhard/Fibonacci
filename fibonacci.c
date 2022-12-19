#include <stdio.h>

	int main (void) {

	int fibonaccivorher=0, fibonaccinachher=1, ergebnis, n;

	printf("\nGeben Sie die Zahl ein bis wohin Sie die Fibonacci Zahl sehen möchten: ");
	scanf("%d", &n);
	
	if(n == 0 || n == 1){
		printf("\nDeine Zahl ist %d\n", n);
		return 0;
	}


	for (int i = 2; i <= n; i++) {
		ergebnis = fibonaccivorher + fibonaccinachher;
		fibonaccivorher = fibonaccinachher;
		fibonaccinachher = ergebnis;
	}	

	printf("\nDie Fibonaccizahl ist %d\n", ergebnis);

	return 0; 

}
