#include<stdio.h>
#include<conio.h>

/*Um cinema possui capacidade de 6 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava, sua idade e sua opinião em relação
 ao filme, sendo
Nota 		Significado
1 		Ótimo
2 		Bom
3 		Regular
4 		Ruim
5 		Péssimo
Elabore um algoritmo que, lendo estes dados, calcule e imprima:
- A quantidade de respostas ótimo;
- A diferença percentual entre respostas bom e regular;
- A média de idade das pessoas que responderam ruim;
- A percentagem de respostas péssimo e a maior idade que utilizou esta opção;
- A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. */

void main (){
	int i,idade,voto,diferenca_bomotimo,ehmaior_idade,ehmaior_idadeO,ehmaior_idadeR,cont_valores,cont_bom,cont_regular,cont_otimo,cont_Motimo,cont_Mbom,cont_Mregular,cont_ruim,cont_Mruim,cont_pessimo,cont_Mpessimo,
	diferenca_4A,meida_allruim,media_bM;
	printf("Avalie questonario sobre sua opniao sobre o filme assitido selecione uma das opcoes abaixo:\n");
	printf("1 - Otimo\n");
	printf("2- Bom\n");
	printf("2- Regular\n");
	printf("4- Ruim\n");
	printf("5 - Pessimo\n");


	for(i=0;i<=6;++i){
		printf("Informe idade : \n");
		scanf("%d",&idade);
		printf("Qual opcao de voto marca\n");
		scanf("%d",&voto);
		switch (voto){
			case 1:
				printf("Voce escolheu otimo\n");
				cont_otimo++;
				cont_valores++;
				if (idade >18){
					cont_Motimo++;
					if(ehmaior_idadeO > idade){
						ehmaior_idadeO = idade;
					}
				}
				break;
			case 2 :
				printf("Voce escolheu bom\n");
				cont_bom++;
				cont_valores++;
				if (idade >18){
					cont_Mbom++;
				
				break;
			case 3 :
				printf("Voce escolheu regular\n");
				cont_valores++;
				cont_regular;
				if (idade >18){
					cont_Mregular++;
			}
				break;
			case 4 :
				printf("Voce escolheu ruim\n");
				cont_ruim++;
				cont_valores++;
				if(idade >18){
					cont_Mruim++;
					if (ehmaior_idadeR > idade){
						ehmaior_idadeR = idade;
					}
					else{

					}
				}
				break;
			case 5 :
				printf("Voce escolheu pessimo\n");
				cont_pessimo++;
				cont_valores++;
				if(idade >18){
					cont_Mpessimo++;
					if (ehmaior_idade > idade) {
						ehmaior_idade = idade;
					}
					else{

					}
				};
			break;
				default:
				break;
			}
		}
	

	}
	printf("A quantidade obtida de votos avaliados como otimo eh %d\n", cont_otimo);
	if(cont_bom > cont_regular){
		diferenca_bomotimo= (cont_valores - cont_bom) - (cont_valores - cont_regular);	
	}
	if(cont_regular > cont_bom){
		diferenca_bomotimo= (cont_valores - cont_regular)- (cont_valores - cont_bom) ;
	}
	printf("Sua diferenca de respostas bom e regular foi de %d\n",diferenca_bomotimo);
	meida_allruim= cont_valores / cont_ruim;
	printf("A media de todos votos contados ruim eh %f\n",meida_allruim);
	 //A percentagem de respostas péssimo e a maior idade que utilizou esta opção;
	media_bM=(cont_pessimo / cont_valores)  * 100;
	printf("A percentagem de respostas péssimo eh %f\n",media_bM);
	printf(" A maior idade que utilizou esta opção %d\n",ehmaior_idade);
	if(ehmaior_idadeR > ehmaior_idadeO){
		diferenca_4A = ehmaior_idadeR-ehmaior_idadeO;	
	}
	if(ehmaior_idadeO > ehmaior_idadeR){
		diferenca_4A = ehmaior_idadeO - ehmaior_idadeR;
	}
	printf("A diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim eh %d\n",diferenca_4A );
}