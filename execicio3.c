#include<stdio.h>
#include<conio.h>
/*O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
Durante o semestre são dadas três notas;
A nota final é obtida pela média aritmética das notas dadas durante o curso;
É considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um mínimo de 40 aulas.
Fazer um algoritmo que:

Leia um conjunto de dados contendo o número de matrícula, as três notas e a frequência de 10 alunos;

Calcule e exiba:
A nota final de cada aluno;
A maior e menor nota da turma;
A nota média da turma;
O total de alunos reprovados;
A porcentagem de alunos reprovados por faltas.
*/
void main(){
	int i=0, _Odmatricula,dias_Aulas,cont_RP;
	float maior=0,menor=1 ,nota1,nota2,nota3,aluno_media0,aluno_media1,aluno_media2,aluno_media3,aluno_media4,aluno_media5,aluno_media6,aluno_media7,aluno_media8,aluno_media9,media_turma;
	while(i<=9){
		if(i==0){
			printf("Para este semestre informe as tres notas que obtivemos do primeiro aluno\n");	
		}
		if(i>0 && i<10){
			printf("Para este semestre informe as tres notas do proximo aluno \n");
		}
		if(i >=9 && i <=10){
			printf("Para este semestre informe as tres notas do ultimo aluno \n");
		}
		printf("Avaliacao 1: \n");
		scanf("%d",&nota1);
		printf("Avaliacao 2: \n");
		scanf("%d",&nota2);
		printf("Avaliacao 3: \n");
		scanf("%d",&nota3);
		
		if(nota1 !=0 && nota2 != 0 && nota3 !=0){
			
			printf("Pode entrar matricula\n");
			printf("Informe matricula -> \n");
			scanf("%d",&_Odmatricula);	
			if(_Odmatricula >0){
				i++;
				if(nota3 > nota2 || nota1 > nota3){
					 if(nota1 > nota2){
						maior = nota1;
						if(nota2 > nota3){
							menor = nota2;
						}else{
							menor = nota3;
						}
			 		}
				}else if(nota1 < nota3 || nota3 < nota2){
					 if(nota2 > nota3){
						maior = nota2;
						if(nota1 > nota3){
							menor = nota1;
						}else{
							menor = nota3;
						}
					}else{
						maior = nota3;
						if(nota1 > nota2){
							menor = nota1;
						}else{
						menor = nota2;
						}
					}
					
				}
			 }		
			}else{
				printf("Necessario campo de matricula estar preenchido\n");
				i = 0;	
			}
		float media;
		media = (nota1 +nota2 +nota3) / 3 ;
		
		if(media >=6){
			if(dias_Aulas >= 40){
				printf("aluno aprovado\n");
			}
			else{
				printf("Reprovado");
				cont_RP++;
			}
		}
		if (i=1){
		char aluno_media1 = media;	
		}
		if (i=2){
		char aluno_media2 = media;	
		}
		if (i=3){
		char aluno_media3 = media;	
		}
		if (i=4){
		char aluno_media4 = media;	
		}
		if (i=5){
		char aluno_media5 = media;	
		}
		if (i=6){
		char aluno_media6 = media;	
		}
		if (i=7){
		char aluno_media7 = media;	
		}
		if (i=8){
		char aluno_media8 = media;	
		}
		if (i=9){
		char aluno_media9 = media;	
		}
		if (i=10){
		char aluno_media0 = media;	
		}
	
		
		
	}
	media_turma = (aluno_media0 + aluno_media1 + aluno_media2  + aluno_media3 +aluno_media4+aluno_media5 + aluno_media6+aluno_media7+aluno_media8+aluno_media9) / 10;
	printf("A nota final de cada aluno eh : \n");
	printf("ALUNO 1: %f\n",aluno_media1);
	printf("ALUNO 3: %f\n",aluno_media3);
	printf("ALUNO 2: %f\n",aluno_media2);
	printf("ALUNO 4: %f\n",aluno_media4);
	printf("ALUNO 5: %f\n",aluno_media5);
	printf("ALUNO 6: %f\n",aluno_media6);
	printf("ALUNO 7: %f\n",aluno_media7);
	printf("ALUNO 8: %f\n",aluno_media8);
	printf("ALUNO 9: %f\n",aluno_media9);
	printf("ALUNO 10: %f\n",aluno_media0);
	printf("A maior nota eh %d e menor nota da turma eh %d\n", maior, menor);
	printf("O percenual de media da turma foi de %f\n",media_turma);
	printf("A quantidade de alunos reprovado foram de %d\n",cont_RP++);
	float porcent_RP =(cont_RP/i) * 100;
	printf("A porcenagem de alunos reprovado por falta eh de %d\n",porcent_RP++);	
		
		
		
		/*
			 if(maior < menor){
				menor = maior;
			 }
			else{maior = nota1;}	
		}else if(nota2 > nota1 && nota2 > nota3){
			if(maior < menor){
				menor = maior;
			 }
			else{maior = nota2;}
		}else{
			if(maior < menor){
				menor = maior;
			 }
			else {maior = nota3;}
			*/
		

	
}

