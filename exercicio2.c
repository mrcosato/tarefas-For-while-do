#include<stdio.h>
#include<conio.h>
/*Escreva um algoritmo que:
- leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
- determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
- Suponha que não exista dois ou mais alunos com a mesma nota.
*/
void main(){
	int i,tipo_Nota[3],num_Matricula, maior1=0, maior2=0,pessoa_Matricula_Maior1,pessoa_Matricula_Maior2;
	printf("O programa eh um contador de fichas de matricula para cada aluno que contem nota \n");
	printf("Digite os 7 numeros\n");
	do {
		printf("Numero de matricula: \n");	
		scanf("%d",&num_Matricula);
		printf("Qual a nota eh \n");
		float tipo_Nota;
		scanf("%f",&tipo_Nota);
	     if (tipo_Nota > maior1) {
   			maior2 = maior1;
   			pessoa_Matricula_Maior2 = num_Matricula;
			maior1 = tipo_Nota;
            pessoa_Matricula_Maior1 = num_Matricula;
            
        } else if (tipo_Nota > maior2 && tipo_Nota != maior1) {
            maior2 = tipo_Nota;
            pessoa_Matricula_Maior2 = num_Matricula;
        }

		
		//conjunto de notas maiores + numero de matricula obtiver 
		i++;
	}while(i<=7);
	
	/*for(i=0;i<=3;i++){
		printf("Numero de matricula: \n");	
		scanf("%d",&num_Matricula);
		printf("Qual a nota eh \n");
		float tipo_Nota;
		scanf("%f",&tipo_Nota);

        if (tipo_Nota > maior1) {
            maior2 = maior1;
            maior1 = tipo_Nota;
            pessoa_Matricula_Maior1 = num_Matricula;
        } else if (tipo_Nota > maior2 && tipo_Nota != maior1) {
            maior2 = tipo_Nota;
            pessoa_Matricula_Maior2 = num_Matricula;
        }

		
		//conjunto de notas maiores + numero de matricula obtiver 
	}
	*/
	printf("Os dois maiores numeros sao: %d -> matricula: %d e %d -> matricula: %d \n", maior1,pessoa_Matricula_Maior1, maior2,pessoa_Matricula_Maior2);

}