//André Fernandes Gonçalves
//Matrícula 114038073

#include <stdio.h>
#include <conio.h>

int main(){
	int i, j, k, m, n, o, p, A[10][10], B[10][10], C[10][10];
	
	printf("\n Este programa calcula o produto matricial inteiro C(m,p) = A(m,n)*B(o,p) e imprime o resultado. \n");
	printf("Insira a ordem da matriz A(m,n) \n");
	scanf("%d %d", &m, &n);
	printf("Insira a ordem da matriz B(o,p) \n");
	scanf("%d %d", &o, &p);
	if(n != o){
		printf("Nao e possivel calcular o produto matricial.");
	}
	else{
		printf("Insira os elementos da matriz A(m,n) \n");
		for (i=0; i<m; i++){
			for (j=0; j<n; j++){
				scanf("%d", &A[i][j]);
			}
		}
		printf("Insira os elementos da matriz B(o,p) \n");
		for (i=0; i<o; i++){
			for (j=0; j<p; j++){
				scanf("%d", &B[i][j]);
			}
		}
		for (i=0 ; i<m; i++){
			for (j=0; j<p; j++){
				C[i][j] = 0;
				for (k=0; k<n; k++){
					C[i][j] = A[i][k]*B[k][j] + C[i][j];
				}
			}
		}	
		printf("Matriz C(m,p) resultante: \n");
		for (i=0; i<m; i++){
			for (j=0; j<p; j++){
				printf("%3d", C[i][j]);
			}
			printf("\n");
		}
	}
	getch();
	return(0);
}
