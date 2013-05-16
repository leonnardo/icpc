#include <cstdio>

int main() {
	int a,b,t,soma,i,caso,n;
	scanf("%d", &t);
	caso = 1;
	while (t--) { 
		scanf("%d", &a);
		scanf("%d", &b);
		if (a%2 == 0)
			a++;
		if (b%2 == 0)
			b--;
		
		n = ((b-a)/2)+1;
		soma = (a+b)*n/2;

		printf("Case %d: %d\n", caso, soma);
		caso++;
	}

	return 0;
}
