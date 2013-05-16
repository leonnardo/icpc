#include <cstdio>

int conta_ciclos(int n) {
	int ciclos = 1;
	while (n != 1) {
		if (n%2 == 1) 
			n = 3*n+1;
		else
			n = n/2;
		ciclos++;
	}
	
	return ciclos;
}

int main() {
	int a, b, max, aux, i;
	
	while (scanf("%d %d", &a, &b) != EOF) { 
		if (b > a) {
			max = conta_ciclos(a);
			for (i = a+1; i <= b; i++) {
				aux = conta_ciclos(i);
				if (aux > max)
					max = aux;
			}		
		}

		else {
			max = conta_ciclos(b);
			for (i = b+1; i <= a; i++) {
				aux = conta_ciclos(i);
				if (aux > max)
					max = aux;
			}
		}

		printf("%d %d %d\n", a, b, max);
	}
	return 0;
}
