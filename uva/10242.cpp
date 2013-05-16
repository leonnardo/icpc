#include <cstdio>

struct ponto {
	double x;
	double y;
};

int main () {

	struct ponto lado1_A, lado1_B, lado2_A, lado2_B,ponta_final;
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&lado1_A.x, &lado1_A.y,&lado1_B.x, &lado1_B.y,&lado2_A.x, &lado2_A.y,&lado2_B.x, &lado2_B.y) != EOF) {
		if (lado1_B.x == lado2_A.x && lado1_B.y == lado2_A.y) {
			ponta_final.x = lado1_A.x + lado2_B.x - lado2_A.x;
			ponta_final.y = lado1_A.y + lado2_B.y - lado2_A.y;
		}
		
		else if (lado1_B.x == lado2_B.x && lado1_B.y == lado2_B.y) {
			ponta_final.x = lado1_A.x + lado2_A.x - lado1_B.x;
			ponta_final.y = lado1_A.y + lado2_A.y - lado1_B.y;
		}

		else if (lado1_A.x == lado2_A.x && lado1_A.y == lado2_A.y) {
			ponta_final.x = lado1_B.x + lado2_B.x - lado1_A.x;
			ponta_final.y = lado1_B.y + lado2_B.y - lado1_A.y;
		}
		
		else if (lado1_A.x == lado2_B.x && lado1_A.y == lado2_B.y) {
			ponta_final.x = lado1_B.x + lado2_A.x - lado1_A.x;
			ponta_final.y = lado1_B.y + lado2_A.y - lado1_A.y;

		}

		printf("%.3lf %.3lf\n", ponta_final.x, ponta_final.y);
	}

	return 0;
}
