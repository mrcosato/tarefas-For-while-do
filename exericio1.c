#include <stdio.h>
#include <conio.h>



//1.	Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura e o código 
////do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
//- a maior e a menor altura da turma;
//- a média de altura das mulheres;
//- a média de altura da turma.
//- a quantidade de homens.



void main(){
	
	float altura1,altura,maior_alt, alt_Wmenor,soma_W,mediaMulher,soma_M,somaTotal,mediaTurma,alt_Wmaior,alt_Mmaior,alt_Mmenor,maiorH,menorH;
	int i, sexo, count_sexo_M = 0,count_sexo_W =0, cont_alt = 0;
	char msg;
	printf("Programa calculadora contem altura e codigo do sexo de uma pessoa para um conjunto de 10 fichas\n");
	printf(" Te dara os seguintes resultados: \n a maior e a menor altura da turma\n a média de altura das mulheres\n a média de altura da turma\n a quantidade de homens\n");
	for( i = 1; i <= 10; i++){
		printf("Informe Altura: ");
		scanf("%f", &altura);
		maior_alt += altura;
		printf("(codigo = 1 se for masculino e 2 se for feminino): ");
		scanf("%d", &sexo);
		if( sexo == 1){
			soma_M += altura;
			count_sexo_M++;
			i++;
			if(i =1){
				altura1 = altura;
			} else if(i<10 || i>1){
				if(altura > altura1) {
					alt_Mmaior = altura;
				}
				else {
					alt_Mmenor = altura;										
				}
			}/*else{
				printf("informe um nome para altura");
				scanf("%s", msg);
				const n ="alturan";
				const n = n + msg ;
				if (i = 1){
					const n = n;
					n = parseString(altura);
					printf("%s", n);
				}
			}
			else{
			}*/
		}
		if( sexo == 2){
			soma_W += altura;
			i++;
			count_sexo_W++;
			if(i =1){
				int altura1 = altura;
			}
       		else if(i<10 && i>1){
				if(altura > altura1) {
					alt_Wmaior = altura;
				}
				else {
					alt_Wmenor = altura;
				}
				/*else if (altura > n){
					n = altura;
				}
			
				printf("informe um nome para altura");
				scanf("%s", msg);
				const n = alturan;
				const n = n + msg ;
				if (i = 1){
					const n = n;
					parseString(altura) = n;
					printf("%s", n);
				}*/
			}
		}
	
		if (alt_Wmenor < alt_Mmenor || alt_Mmaior > alt_Wmenor){
			menorH = alt_Wmenor;
			maiorH = alt_Mmaior;
		}

		else {
			menorH = alt_Mmenor; 
			maiorH = alt_Wmaior;
		}
	}
	printf("a maior eh %f \n" ,maiorH);	
	printf("a menor eh %f \n" ,menorH);	
	mediaMulher = soma_W / count_sexo_W;
	printf(" media altura Mulheres %f\n", mediaMulher); 
	somaTotal = soma_W + soma_M;
	mediaTurma = somaTotal/ i; 
	printf("Media de altura contadas da turma e %f\n",mediaTurma);
	printf("Quantidade de Sexo Masculino presente no conjunto eh: %d\n", count_sexo_M);
}