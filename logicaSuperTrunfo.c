//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

//    return 0;
//}

// TEXTO INICIAL PRESERVADO
// fiz o exercício por conta própria offline através do Dev-C++ (fork Embarcadero v6.3)
// Início do exercício
#include <stdio.h>

int main() {
	unsigned long int popul1,popul2; 									// mudado para long int
	int turismo1,turismo2;
	//int populR,turismoR,areaR,pibR,densR,ppcR;					// novas variáveis para os resultados das comparações 
	float poder1,poder2;//,poder;												//mais variáveis novas
	float area1,pib1,area2,pib2,dens1,dens2,ppc1,ppc2; 					// novas variáveis adicionadas para densidade e pib per capita
	char cidade1[25],estado1,codigo1[5],cidade2[25],estado2,codigo2[5]; // Tamanhos variados para as arrays, mas estado é só uma letra
	
	// fim da declaração de variáveis inicial
	
	printf("Cadastro da Primeira Carta\n\n");
	
	printf("Digite o estado (A ate H): ");
	scanf(" %c", &estado1); // lendo o estado
	
	printf("Digite o codigo da carta (Letra + Numero, por exemplo: B03): ");
	scanf("%s",codigo1); // lendo o código, não precisa de & por ser uma array de caracteres
	
	printf("Digite o nome da cidade: ");
	scanf("%s",cidade1); // lendo o nome da cidade, não precisa de & por ser uma array de caracteres
	
	printf("Digite a populacao: ");
	scanf("%lu",&popul1); // lendo o número da população
	
	printf("Digite a area (em km2): ");
	scanf("%f",&area1); // lendo o valor da área
	
	dens1 = popul1/area1; // calculando densidade populacional
	
	printf("Digite o PIB (em bilhoes): ");
	scanf("%f",&pib1); // lendo o valor do pib
	
	ppc1 = 1e9*pib1/popul1; // calculando pib per capita, convertendo para bilhões
	
	printf("Digite o numero de pontos turisticos: ");
	scanf("%d",&turismo1); // lendo o número de pontos turísticos
	
	// fim do recolhimento dos dados da primeira carta
	
	printf("Cadastro da Segunda Carta\n\n");
	
	printf("Digite o estado (A ate H): ");
	scanf(" %c", &estado2);
		
	printf("Digite o codigo da carta (Letra + Numero, por exemplo: B03): ");
	scanf("%s",codigo2);
	
	printf("Digite o nome da cidade: ");
	scanf("%s",cidade2);
	
	printf("Digite a populacao: ");
	scanf("%lu",&popul2);
	
	printf("Digite a area (em km2): ");
	scanf("%f",&area2);
	
	dens2 = popul2/area2; // calculando densidade populacional
	
	printf("Digite o PIB (em bilhoes): ");
	scanf("%f",&pib2);
	
	ppc2 = 1e9*pib2/popul2; // calculando pib per capita
	
	printf("Digite o numero de pontos turisticos: ");
	scanf("%d",&turismo2);
	
	// fim do recolhimento dos dados da segunda carta

	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("Populacao: %lu habitantes \n",popul1);
	printf("Area: %.2fkm2\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de pontos turisticos: %d\n",turismo1);
	printf("Densidade populacional: %.2f hab/km2\n",dens1); // exibindo a densidade calculada
	printf("PIB Per Capita: %.2f reais\n\n",ppc1); // exibindo o pib per capita calculado
	
	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %lu habitantes \n",popul2);
	printf("Area: %.2fkm2\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de pontos turisticos: %d\n\n",turismo2);
	printf("Densidade populacional: %.2f hab/km2\n",dens2);
	printf("PIB Per Capita: %.2f reais\n\n",ppc2);

	// comparações de valores antiga (Aula 2 Mestre)
	//populR = popul1>popul2;
	//areaR = area1>area2;
	//pibR = pib1>pib2;
	//turismoR = turismo1>turismo2;
	//densR = dens2>dens1;
	//ppcR=ppc1>ppc2;
	
	//poder = (poder1>poder2);

    poder1=(float)popul1+area1+pib1+(float)turismo1+ppc1+(1.0f/dens1); // foi aqui que percebi meu erro com casting na Aula 2 
	poder2=(float)popul2+area2+pib2+(float)turismo2+ppc2+(1.0f/dens2); // e por isso decidi manter anotações mesmo com o versionamento
    
	//
	// Nova comparação (Aula 3 Aventureiro)
	//



	int atrib; // declarando nova variável aqui para facilitar legibilidade
	
	printf("Comparacao das Cartas:\n\n");
	printf("Escolha do atributo para comparar:\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. PIB per capita\n7. Super Poder\n\n");
	// eu sei que é tecnicamente longo demais mas não é difícil de ler, só de editar
	printf("Escolha: ");
	scanf("%d",&atrib);
	
	switch(atrib) {
		case 1: //população
			printf("Populacao:\n Carta 1: %lu\n Carta 2: %lu\n",popul1,popul2);
			if (popul1>popul2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (popul2>popul1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
		
		case 2: //area
			printf("Area:\n Carta 1: %.2f\n Carta 2: %.2f\n",area1,area2);
			if (area1>area2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (area2>area1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
		
		case 3: //pib
			printf("PIB:\n Carta 1: %.2f\n Carta 2: %.2f\n",pib1,pib2);
			if (pib1>pib2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (pib2>pib1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
		
		case 4: // pontos turisticos
			printf("Pontos Turisticos:\n Carta 1: %d\n Carta 2: %d\n",turismo1,turismo2);
			if (turismo1>turismo2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (turismo2>turismo1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
		
		case 5: //densidade populacional
			printf("Densidade populacional:\n Carta 1: %.2f\n Carta 2: %.2f\n",dens1,dens2);
			if (dens1<dens2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (dens2<dens1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
		
		case 6: //pib per capita
			printf("PIB Per Capita:\n Carta 1: %.2f\n Carta 2: %.2f\n",ppc1,ppc2);
			if (ppc1>ppc2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (ppc2>ppc1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
		
		case 7: //super poder
			printf("Super Poder:\n Carta 1: %.2f\n Carta 2: %.2f\n",poder1,poder2);
			if (poder1>poder2) //ifs sem {} pois é só uma linha em cada
				printf("A cidade %s venceu",cidade1);
			else if (poder2>poder1)
				printf("A cidade %s venceu",cidade2);
			else
				printf("Empate");
			break;
	}
	
	
	
	// exibição dos valores (Para Aula 2 Mestre)
	
	//printf("Comparacao das Cartas:\n\n");
	
	//printf("Populacao: Carta %d venceu (%d)\n",2-populR,populR);
	//printf("Area: Carta %d venceu (%d)\n",2-areaR,areaR);
	//printf("PIB: Carta %d venceu (%d)\n",2-pibR,pibR);
	//printf("Pontos Turisticos: Carta %d venceu (%d)\n",2-turismoR,turismoR);
	//printf("Densidade Populacional: Carta %d venceu (%d)\n",2-densR,densR);
	//printf("PIB per Capita: Carta %d venceu (%d)\n",2-ppcR,ppcR);
	//printf("Super Poder: Carta %d venceu (%d)\n",2-poder,poder);
    // Apenas mantive aqui por questão de histórico pessoal
	return 0;

}