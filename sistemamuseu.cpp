#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>//dias da semana
#include <ctype.h>
#include <unistd.h>//coloca delay 



// Estrutura para armazenar informaçoes do cliente
struct Cliente {
    char nome[100];
    char email[100];
    char telefone[20];
    char carteirinha[20];
    int codigoConfirmacao;
};

// Função para cadastrar um cliente
void cadastrarCliente(struct Cliente *cliente, int meiaEntrada) {
    printf("\n\t\t\t\t\t\tNome: ");
    scanf("%s", cliente->nome);
    printf("\n\t\t\t\t\t\tE-mail: ");
    scanf("%s", cliente->email);
    printf("\n\t\t\t\t\t\tTelefone: ");
    scanf("%s", cliente->telefone);
    
    if (meiaEntrada) {
        printf("\n\t\t\t\t\tNumero da carteirinha de estudante: ");
        scanf("%s", cliente->carteirinha);
    }else {
        //Se não for meia-entrada, limpa o campo da carteirinha
        cliente->carteirinha[0] = '\0';
    }

     
    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\t\tConfira as informacoes inseridas: ");
    
    printf("\n\n\t\t\t\t\t\tNome: %s\n", cliente->nome);
    printf("\n\t\t\t\t\t\tE-mail: %s\n", cliente->email);
    printf("\n\t\t\t\t\t\tTelefone: %s\n", cliente->telefone);


     if (meiaEntrada) {
        printf("\n\t\t\t\t\tNumero da carteirinha de estudante: %s\n", cliente->carteirinha);
    }
    
    int confirmacao;
    printf("\n");
    printf("\n\t\t\t\tAs informacoes estao corretas? 1-Sim. 0-Nao : ");
    scanf("%d", &confirmacao);
    system("cls");

    if (confirmacao == 0) {
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t\t\t\t\tPor favor, insira as informacoes novamente.\n");
        cadastrarCliente(cliente, meiaEntrada);
    }
    
  
}

//função para dar delay
void delay(int segundos) {
    struct timespec pausa;
    pausa.tv_sec = segundos; //numero de segundos
    pausa.tv_nsec = 0; //numero de nanossegundos
    nanosleep(&pausa, NULL);
    
}



//Função para comprar comida
float comprarComidas() {
    float total = 0;
    int escolha;
    
    
    do {
        system("cls");
        printf("\n");
        printf("\n\t\t\tCaso queira se conectar ao Wi-fi de nosso museu, segue login da rede.\n\t\t\t\t\t\tLogin: museuimertivo \n\t\t\t\t\t\tSenha: museu123");

        printf("\n");
        printf("\n");
        printf("\n\t\t\t\t\t\tOpcoes de comida.\n");
        printf("\t\t\t\t\t\t1-Coxinha recheada - R$10.00\n");
        printf("\t\t\t\t\t\t2-Refrigerante - R$5.00\n");
        printf("\t\t\t\t\t\t3-Torta de frango - R$7.00\n");
        printf("\t\t\t\t\t\t4-Voltar ao menu principal.\n");
        printf("\n\t\t\t\t\t\tEscolha uma opcao de comida : ");
        scanf("%d", &escolha);

        //struct timespec delay = {5, 0}; // Atraso de 5 segundos

        switch (escolha) {
            case 1:
                total += 10.00;
                printf("\n\t\t\tVoce selecionou uma coxinha recheada! Ela contem um recheio saboroso, aproveite! ");
                //nanosleep(&delay, NULL);
                delay(5); // Atraso de 5 segundos
                break;
                
            case 2:
                total += 5.00;
                
                printf("\n\t\t\t\t\tVoce selecionou um refrigerante! Aproveite! ");
                //nanosleep(&delay, NULL);
                delay(5); // Atraso de 5 segundos
                break;
            case 3:
                total += 7.00;
                printf("\n\t\t\t\tVoce selecionou uma deliciosa torta de frango! Aproveite! ");
                //nanosleep(&delay, NULL);
                delay(5); // Atraso de 5 segundos
                break;
            case 4:
                system("cls");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (escolha != 4);

    return total;
}

// Função para comprar camisetas e acessórios
float comprarAcessorios() {
    float total = 0;
    int escolha;
    
    do {
        system("cls");
        printf("\n");
        printf("\n\t\t\tCaso queira se conectar ao Wi-fi de nosso museu, segue login da rede.\n\t\t\t\t\t\tLogin: museuimertivo \n\t\t\t\t\t\tSenha: museu123");
        printf("\n");
        printf("\n\t\t\t\t\tEscolha uma opcao de camiseta ou acessorios.\n");
        printf("\t\t\t\t\t1-Camiseta - R$20.00\n");
        printf("\t\t\t\t\t2-Bone - R$10.00\n");
        printf("\t\t\t\t\t3-Caneca - R$8.00\n");
        printf("\t\t\t\t\t4-Voltar ao menu principal.\n");
        printf("\t\t\t\t\tEscolha uma opcao de acessorios : ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                total += 20.00;
                printf("Voce adquiriu uma camiseta de nosso museu! ");
                delay(5);
                
                break;
            case 2:
                total += 10.00;
                printf("Voce adquiriu um bone de nosso museu! ");
                delay(5);
                break;
            case 3:
                total += 8.00;
                printf("Voce adquiriu uma caneca de nosso museu! ");
                delay(5);
                break;
            case 4:
                system("cls");
                break;
            default:
                printf("\nOpcao invalida.\n");
        }
    } while (escolha != 4);

    return total;
    
}

// Função para mostrar o menu de temas
int resumotema() {
    int escolha;
    char acessorede[10];
    printf("\n");
    printf("\n\t\t\tSenhor(a) visitante, ja possui acesso a rede do nosso museu? Responda por favor : ");
    scanf("%s",acessorede);

     if(strcasecmp(acessorede, "nao" )==0){
        printf("\n");
        printf("\n\t\t\t\tCaso queira se conectar ao Wi-fi de nosso museu, segue login da rede.\n\t\t\t\t\t\tLogin: museuimertivo \n\t\t\t\t\t\tSenha: museu123");

     }

 
    do {
        
        printf("\n");
        printf("\n");
        printf("\n\t\t\t\t\tTemas em exposicao :\n");
        printf("\t\t\t\t\t1-Resumo do tema: 150 anos de Santos Dumont\n");
        printf("\t\t\t\t\t2-Resumo do tema: 100 anos da Semana da Arte Moderna\n");
        printf("\t\t\t\t\t3-Resumo do tema: Olimpiadas de Paris 2024\n");
        printf("\t\t\t\t\t4-Resumo do tema: Jogos Pan-Americanos\n");
        printf("\t\t\t\t\t5-Voltar ao menu.\n");
		printf("\n\t\t\t\t\tEscolha uma opcao : ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                system("cls");
                printf("\nHa 150 anos, nascia no interior de Minas Gerais um dos maiores inventores brasileiros: o notavel Alberto Santos Dumont, considerado um dos precursores da aviacao e da criacao de aeronaves no mundo. Suas inovacoes e contribuicoes para a aviacao sao celebradas ate hoje. O homem que deu asas a humanidade nasceu no dia 20 de julho de 1873, no sitio Cabangu local que, em 1890, passou a pertencer ao municipio de Palmyra (MG), um dos bens tombados sob tutela da Forca Aerea Brasileira (FAB). O sonho de voar de Alberto surgiu aos 15 anos quando ele teve uma vis?o: um balao livre nos ceus de Sao Paulo. No caso, baloes livres sao aqueles que fazem sua ascensao sem possuir nenhum tipo de dirigibilidade, ficando ao sabor das correntes aereas. Aos 18 anos, emancipado pelo pai, Alberto foi para Paris completar os estudos e perseguir o seu sonho de voar. Ao chegar a capital francesa, o jovem se admira com os motores de combustao interna a petroleo que comecavam a aparecer impulsionando os primeiros automoveis e compra um para si, investigando todo o seu funcionamento. Logo estava promovendo e disputando as primeiras corridas de automoveis na Cidade-Luz. Em 31 de julho de 1932, a cidade de Palmyra, em Minas Gerais, passou a denominar-se Santos Dumont, em homenagem ao Pai da Aviacao.\n");
                break;
            case 2:
                system("cls");
                printf("\nO centenario da Semana da Arte Moderna. Realizada entre os dias 13 e 17 de fevereiro de 1922, no Teatro Municipal de Sao Paulo, a Semana de Arte Moderna foi um evento que reuniu diferentes manifestacoes culturais como a pintura, m?sica, poesia, escultura e literatura. O episodio marcou a busca de toda uma geracao de artistas por novas linguagens esteticas, rompendo com uma visao mais conservadora da arte. Entre os artistas participantes estavam Anita Malfati, Emiliano Di Cavalcanti, Heitor Villa-Lobos, Mario de Andrade, Oswald de Andrade, Victor Brecheret, Zina Aita, entre outros. As ideias semeadas na Semana de Arte Moderna de 1922 valorizavam a renovacao do ambiente artistico e a criacao de uma identidade nacional pr?pria, contribuindo para o desenvolvimento do modernismo no Brasil.\n");
                break;
            case 3:
                system("cls");
                printf("Olimpiadas de Paris 2024\n.\nOs Jogos Olimpicos de 2024 sera sediado em Paris pela terceira vez, sendo a primeira em 1900 e a segunda em 1924. A escolha aconteceu em 2017, na 130? Sessao do Comite Olimpico Internacional (CBO), em Lima, Peru. Os Jogos Olimpicos de 2024 terao 48 modalidades e 32 esportes. Tendo a adicao de uma nova modalidade que e o Breaking Dance, que e um estilo de dan?a de rua e tem como base o Hip Hop. Sera dividido em feminino e masculino, com batalhas solo de 16 dan?arinos, chamados B-Boys e B-Girls. Outra mudan?a foi o Slalom extremo, uma prova de canoagem em que 4 pessoas precisam descer de uma rampa ao mesmo tempo, com v?rios obstaculos.\n As OlimpIadas 2024 tambem trouxeram mudancas em relacao a escalada esportiva, que contara com medalhas para os generos boulder e lead e de velocidade. Diferentemente, da que foi apresentada em Toquio nas ultimas Olimpiadas. Durante os Jogos Olimpicos, e poss?vel que aconte?am algumas competicoes mistas, como na modalidade de marcha atletica de 35 km do atletismo e tiro com arco. A ultima mudan?a e referente a competicao de pentatlo que tera 90 minutos de percurso e uma serie de rodadas de esgrima, natacao, hipismo, tiro e corrida. Tamb?m tem 15 minutos de duracao cada um dos esportes, com intervalos de 5 minutos.\nOs Jogos Olimpicos de 2024 terao como mascotes os barretes ou gorros frigios, chamados de Phryges, que simbolizam a liberdade ao redor do mundo e s?o simbolos do pais.\n");
                break;
            case 4:
                system("cls");
            	printf("\nOs Jogos Pan-Americanos e uma versao dos Jogos Olimpicos, reunem os paises das Americas com o intuito de fortalecer o esporte na regiao. Vinte e um paises sao membros fundadores dos jogos. Sao eles: Argentina, Brasil, Colombia, Costa Rica, Chile, Cuba, El Salvador, Equador, Estados Unidos, Guatemala, Guiana Francesa, Haiti, Jamaica, Mexico, Nicaragua, Panama, Paraguai, Peru, Trinidad e Tobago, Uruguai, Venezuela. Os jogos acontecem a cada quatro anos e seguem um rodizio entre as tres regioes do continente: America Central, do Norte e do Sul.\nA edicao do ano de 2023 tera inicio no dia 20 de outubro ate o dia 5 de novembro, sendo sediada na cidade de Santiago, no Chile. A competicao reunira 58 modalidades, sendo 21 delas que dao vagas diretas as Olimpiadas de Paris 2024. O evento sera disputado em quatro regioes do Chile, sendo a principal a do Parque Esportivo Estadio Nacional. Ao redor do hist?rico estadio, sede da final da Copa do Mundo de 1962, foi construido um complexo esportivo multidisciplinar, que reunira 12 locais, recebendo 20 modalidades. O Brasil tera um total de 1020 membros na delegacao, sendo 633 atletas, 263 oficiais de confederacoes e 124 oficiais do COB. Sera a maior delegacao da historia numa competicao fora do pais ate entao. No Pan de Toronto-2015, a delegacao contava com 616 atletas. Na ultima edicao, em Lima-2019, o Brasil terminou em segundo lugar no quadro geral, com recordes de medalhas de ouro (54) e do total de p?dios (169). Alem disso, foram conquistadas 29 vagas olimpicas. Na edicao de 1963, em S?o Paulo, o Brasil tamb?m terminou em segundo lugar, atras somente dos Estados Unidos.\n");
                break;
            case 5:
                system("cls");
                break;    
            default:
                system("cls");
                printf("\n\t\t\t\tOpcao invalida\n");
        }
    } while (escolha != 5);

    return escolha;
}


//função para arquivo csv
void relatoriocsv(int perguntascertas){
	FILE *relatorio;
	relatorio = fopen("relatorio.csv","w");
	if(relatorio == NULL){
		printf("Erro ao abrir o arquivo.");
	}
	else{
		fprintf(relatorio, "Pergunta,Resposta\n");
        fprintf(relatorio, "\nPergunta 1 Santos Dumont, alternativa 2 correta : Minas Gerais\n");
        fprintf(relatorio, "\nPergunta 2, alternativa 1 correta : Teatro Municipal de Sao Paulo\n");
		fprintf(relatorio, "\nPergunta 3, alternativa 4 correta : Breaking Dance\n");
		fprintf(relatorio, "\nPergunta 4, alternativa 3 correta : 1951 em Buenos Aires.\n");
		fprintf(relatorio,"Respostas corretas : %d",perguntascertas);
		fclose(relatorio);
		printf("Relatorio em arquivo CSV gerado com sucesso.\n");
	}
}



void relatoriotxt(int perguntascertas){
	FILE *relatorio;
	relatorio = fopen("relatorio.txt","w");

	if(relatorio == NULL){
		printf("Erro ao abrir o arquivo.");
	}
	else{
		fprintf(relatorio, "Pergunta,Resposta\n");
        fprintf(relatorio, "\nPergunta 1 Santos Dumont, alternativa 2 correta : Minas Gerais\n");
        fprintf(relatorio, "\nPergunta 2, alternativa 1 correta : Teatro Municipal de Sao Paulo\n");
		fprintf(relatorio, "\nPergunta 3, alternativa 4 correta : Breaking Dance\n");
		fprintf(relatorio, "\nPergunta 4, alternativa 3 correta : 1951 em Buenos Aires.\n");
		fprintf(relatorio,"Respostas corretas : %d",perguntascertas);

		fclose(relatorio);
		printf("Relatorio em arquivo TXT gerado com sucesso.\n");
	}
}





int perguntasDinamica(){
	int perguntascertas=0;
	int resposta=0;

    

	do{
		printf("\n");
		printf("\n\tEscolha um dos temas para a dinamica de perguntas, acerte todas e ganhe um brinde do nosso museu!\n");
		printf("\n\t\t\t\t\tEscolha uma opcao a seguir:\n\t\t\t\t\t1-Dinamica Santos Dumont.\n\t\t\t\t\t2-Dinamica 100 anos Semana Arte Moderna.\n\t\t\t\t\t3-Dinamica Olimpiadas Paris 2024.\n\t\t\t\t\t4-Dinamica Jogos Pan-Americanos.\n\t\t\t\t\t5-Total de acertos das dinamicas.\n");
        printf("\n\t\t\t\t\tEscolha uma opcao : ");
		scanf("%d", & resposta);

		switch(resposta){
			case 1:
                system("cls");
                printf("\n");
				printf("\n\tDinamica de perguntas dos 150 anos de Santos Dumont, vamos ver se voce prestou atencao!\n");
				printf("\n\t\t\t\t\tEm que cidade Santos Dumont nasceu?\n\t\t\t\t\t\t1-Rio de Janeiro.\n\t\t\t\t\t\t2-Minas Gerais.\n\t\t\t\t\t\t3-Sao Paulo.\n\t\t\t\t\t\t4-Bahia.\n");
				printf("\n\t\t\t\t\t\tResponda : ");
				scanf("%d",& resposta);
				if(resposta==2){
                    system("cls");
                    printf("\n");
					printf("\n\t\t\t\t\t\tParabens voce acertou!\n");
					perguntascertas++;
					break;
				}
				else{
                    system("cls");
                    printf("\n");
					printf("\n\t\t\tQue pena voce errou, tente outros temas, voce tem uma chance de cada!\n");
					break;
				}
			case 2:
                system("cls");
                printf("\n");
				printf("\n\tDinamica de perguntas dos 100 anos da Semana da Arte Moderna, vamos ver se voce prestou atencao!\n");
				printf("\n\t\t\t\t\tEm que teatro foi realizada a semana da Arte Moderna?\n\t\t\t\t\t1-Teatro Municipal de Sao Paulo.\n\t\t\t\t\t2-Teatro Minas Gerais.\n\t\t\t\t\t3-Teatro Salvador.\n\t\t\t\t\t4-Teatro Sul.\n");
				printf("\n\t\t\t\t\tResponda : ");
				scanf("%d",& resposta);
				if(resposta==1){
                    system("cls");
                    printf("\n");
					printf("\n\t\t\t\t\t\tParabens voce acertou!\n");
					perguntascertas++;
					break;
				}
				else{
                    system("cls");
                    printf("\n");
					printf("\n\t\t\tQue pena voce errou, tente outros temas, voce tem uma chance de cada!\n");
					break;
				}
			case 3:
                system("cls");
                printf("\n");
				printf("\n\t\tDinamica de perguntas das Olimpiadas de Paris 2024, vamos ver se voce prestou atencao!\n");
				printf("\n\t\t\t\t\tQual a nova modalidade que sera estreia nas Olimpiadas de 2024?\n\t\t\t\t\t1-Esgrima.\n\t\t\t\t\t2-Golfe.\n\t\t\t\t\t3-Triatlo.\n\t\t\t\t\t4-Breaking Dance.\n");
				printf("\n\t\t\t\t\tResponda : ");
				scanf("%d",& resposta);
				if(resposta==4){
                    system("cls");
                    printf("\n");
					printf("\n\t\t\t\t\t\tParabens voce acertou!\n");
					perguntascertas++;
					break;
				}
				else{
                    system("cls");
                    printf("\n");
					printf("\n\t\t\tQue pena voce errou, tente outros temas, voce tem uma chance de cada!\n");
					break;
				}
			case 4:
                system("cls");
                printf("\n");
				printf("\n\t\tDinamica de perguntas dos Jogos Pan-Americanos de 2023, vamos ver se voce prestou atencao!\n");
				printf("\n\t\t\t\t\tQual foi a primeira edicao dos Jogos Pan-Americanos?\n\t\t\t\t\t1-1952 em Chicago.\n\t\t\t\t\t2-1960 em New York.\n\t\t\t\t\t3-1951 em Buenos Aires.\n\t\t\t\t\t4-1969 em Madrid.\n");
				printf("\n\t\t\t\t\tResponda : ");
				scanf("%d",& resposta);

				if(resposta==3){
                    system("cls");
                    printf("\n");
					printf("\n\t\t\t\t\t\tParabens voce acertou!\n");
					perguntascertas++;
					break;
				}
				else{
                    system("cls");
                    printf("\n");
					printf("\n\t\t\tQue pena voce errou, tente outros temas, voce tem uma chance de cada!\n");
					break;
				}
			case 5:
                relatoriocsv(perguntascertas);
                relatoriotxt(perguntascertas);
                system("cls");
                printf("\n");
				printf("\n\t\t\t\t\tTotal de perguntas corretas : %d ", perguntascertas);
				if(perguntascertas==4){
					printf("\n\t\tParabens! Voce ganhou um brinde acessorio + camiseta + visita gratis em nosso museu!!!\n");
				}
				
				else if(perguntascertas==3){
					printf("\n\t\t\tParabens! Voce ganhou um brinde acessorio + camiseta do nosso museu!!!\n");
				}
				else if(perguntascertas==2){
					printf("\n\t\t\tParabens! Voce ganhou um brinde acessorio do nosso museu!!!\n");
				}
				else if(perguntascertas==1){
					printf("\n\t\t\t\tParabens! Voce ganhou um desconto em nossas lojinhas!!!\n");
				}
				else if(perguntascertas==0){
					printf("\n\t\t\t\t\tQue pena! Tente outra vez.\n");
				}
                perguntascertas=0;
				break;
				
			//case 6:
				//printf("\nVoltando ao menu principal.\n");
				//break;

			default:
				printf("\nOpcao invalida.\n");



		}

	}while(resposta !=5);
	return perguntascertas;

}



void realizarPagamentoPix() {
    int opcaoPix;
    char buffer[50];  //Tamanho para armazenar dados do PIX

    
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\t\tOpcoes de pagamento PIX.\n");
    printf("\n\t\t\t\t\t\t1-Celular\n");
    printf("\n\t\t\t\t\t\t2-CPF/CNPJ\n");
    printf("\n\t\t\t\t\t\t3-E-mail\n");
    printf("\n\t\t\t\t\t\t4-Chave Aleatoria\n");
    
    
    printf("\n\t\t\t\t\t\tEscolha uma opcao : ");
    scanf("%d", &opcaoPix);

    //Limpa o buffer de entrada para evitar problemas na próxima leitura
    char bufferLimpeza;
    while ((bufferLimpeza = getchar()) != '\n' && bufferLimpeza != EOF);

   
    switch (opcaoPix) {
        case 1:
            system("cls");
            do {
                
                printf("\n");
                printf("\n\t\t\t\t\tDigite o numero de celular com 11 digitos : ");
                scanf("%s", buffer);

                //Verifica se o número do celular tem exatamente 11 dígitos
                if (strlen(buffer) != 11 || !isdigit(buffer[0])) {
                    system("cls");
                    printf("\n");
                    printf("\n\t\t\t\tInvalido. Informe 11 numeros validos para o celular.\n");
                }
            } while (strlen(buffer) != 11);
            break;

        case 2:
            do {
                printf("Digite o CPF/CNPJ (11 ou 14 dígitos): ");
                scanf("%s", buffer);

                // Verificar se o CPF/CNPJ tem 11 ou 14 dígitos
                if (strlen(buffer) != 11 && strlen(buffer) != 14) {
                    printf("Erro: Informe exatamente 11 (CPF) ou 14 (CNPJ) números válidos.\n");
                }
            } while (strlen(buffer) != 11 && strlen(buffer) != 14);
            break;

        case 3:
            do {
                printf("Digite o e-mail: ");
                scanf("%s", buffer);

                

                //verifica se tem "@" no e-mail
                if (strstr(buffer, "@") == NULL) {
                    printf("Erro: Informe um e-mail válido.\n");
                }
            } while (strstr(buffer, "@") == NULL);
            break;

        case 4:
            do {
                printf("Digite a chave aleatória (32 caracteres): ");
                scanf("%s", buffer);

                //verifica se a chave aleatória tem exatamente 32 caracteres
                if (strlen(buffer) != 32) {
                    printf("Erro: Informe exatamente 32 caracteres para a chave aleatória.\n");
                }
            } while (strlen(buffer) != 32);
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tOpcao invalida. Selecione uma opcao.\n ");
            return;
    }
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\t\tPagamento efetuado com sucesso!\n");

    exit(0);
   
    
    
}




int main() {
	
    int opcao;
    struct Cliente cliente;
    srand(time(0));//para sortear numero no pagamento

    //funcao para mostrar data e hora atual
    time_t rawtime;
    struct tm *hora;
    time(&rawtime);
    hora = localtime(&rawtime);


    int codigo;
    float totalComidas = 0;
    float totalAcessorios = 0;
    float totalValor=0;
	int totalvisitantes=0;
	//caso eu queira utilizar a função perguntasDinamica() posteriormente int perguntascertas=0;
    float ingressocompleto=0;
    float meiaentrada=0;
    int confirmacao=0;
    int confirmacaoMeiaEntrada=0;
    int pagamentoPix=0;
    int tipoingresso=0;
    char loginfunc[20];
    char senhafunc[20];
    int opcaofunc=0;
    char respostaCupom[20];
    int cupomVisitante;
    char cartao[17];
    char celularPix[12];
    char buffer;
    int escolha=0;
    int confirmacaoEntradaGratuita=0;
    char cartaoEntradagratuita[17];
    int caixafunc=0;
    int funclogado=0;

    
    
    do {
        //system("cls");
        printf("\n");    
        printf("\n\t\t\t\t\tSenhor(a) visitante, escolha uma das opcoes :\n");    
        printf("\n\n\t\t\t\t\t1-Comprar um ingresso completo.\n\t\t\t\t\t2-Comprar meia-entrada.\n\t\t\t\t\t3-Entrada gratuita.\n\t\t\t\t\t4-Comprar aperitivos e comidas.\n\t\t\t\t\t5-Comprar camisetas e acessorios de nosso museu.\n\t\t\t\t\t6-Exposicao dos temas.\n\t\t\t\t\t7-Pagamento.\n\t\t\t\t\t8-Dinamica de perguntas.\n\t\t\t\t\t9-Logar como funcionario.\n\t\t\t\t\t10-Sair.");
		printf("\n\n\t\t\t\t\tEscolha uma opcao : ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                system("cls");
                printf("\n\n\t\t\t\t\t\tComprar ingresso completo\n");
                cadastrarCliente(&cliente, 0);
                printf("\n");
                printf("\n");
                printf("\n\t\t\t\t\t\tSeja bem-vindo, %s!\n", cliente.nome);
                printf("\n\t\t\tO valor do ingresso completo e de R$10,00 e ja esta cadastrado em seus dados.\n\t\t\t\tVoce ira pagar somente na opcao 7 do menu pagamento.\n\t\tSera gerado um codigo de confirmacao para voce confirmar no pagamento, guarde bem esse codigo.\n");
                cliente.codigoConfirmacao = rand() % 1000+1;
                printf("\n\t\t\t\t\tCodigo de confirmacao para pagamento : %d", cliente.codigoConfirmacao);
                printf("\n");
                printf("\n");
                printf("\n\t\t\tCaso queira se conectar ao Wi-fi de nosso museu, segue login da rede.\n\t\t\t\t\t\tLogin: museuimertivo \n\t\t\t\t\t\tSenha: museu123");
                
				totalvisitantes++;
                totalValor+=(ingressocompleto+10);
                break;

            case 2:
                system("cls");
                printf("\n\n\t\t\t\t\t\tComprar meia-entrada\n");
                cadastrarCliente(&cliente, 1);
                printf("\n\t\t\t\t\t\tSeja bem-vindo, %s!\n", cliente.nome);
                printf("\n\t\t\tO valor do ingresso de meia-entrada e de R$5,00 e ja esta cadastrado em seus dados.\n\t\t\t\tVoce ira pagar somente na opcao 7 do menu pagamento.\n\t\tSera gerado um codigo de confirmacao para voce confirmar no pagamento, guarde bem esse codigo.\n");
                cliente.codigoConfirmacao = rand() % 1000+1;
                printf("\n\t\t\t\t\tCodigo de confirmacao para pagamento : %d", cliente.codigoConfirmacao);
                printf("\n");
                printf("\n\t\t\tCaso queira se conectar ao Wi-fi de nosso museu, segue login da rede.\n\t\t\t\t\t\tLogin: museuimertivo \n\t\t\t\t\t\tSenha: museu123");
				printf("\n");
                totalvisitantes++;
                totalValor+=(meiaentrada+5);
                break;

            case 3:
                system("cls");
                printf("\n\t\t\t\t\t\tEntrada gratuita/isencao.\n");
                cadastrarCliente(&cliente,0);
                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\tSeja bem-vindo, %s!\n", cliente.nome);
                
                printf("\n\t\t\t\t" " Nosso museu possui entrada gratuita nas tercas e quintas.\n");
                printf("\t\t\t\t\tData e horario atual : %s ", asctime(hora));

                

                switch(hora->tm_wday){
                   
                    case 2: //terça 
                    case 4: //quinta

                    printf("\n\t\t\t\t\tHoje nosso museu possui entrada gratuita, aproveite!!!");
                    break;

                default:
                    
                    printf("\n\t\t\t\t\t\tSenhor(a) visitante.\n\tComo hoje nao e terca-feira e nem quinta-feira, nosso museu possui entrada gratuita apenas com o cupom.\n");
                    printf("\n\t\t\tVamos la, voce possui um cupom para a entrada gratuita? Responda por favor : ");
                    scanf("%s", respostaCupom); 
                    system("cls"); 

                    if(strcasecmp(respostaCupom,"sim")==0){
                        printf("Informe o cupom por favor : ");
                        scanf("%d", & cupomVisitante);
                        system("cls");

                        printf("\nMuito bem, seu cupom esta validado, como sua entrada e gratuita nao precisara pagar o ingresso.\n\nCaso queira adquirir comidas e acessorios basta pagar na opcao 7 do menu.");
                        printf("\nSenhor(a) visitante, como sua entrada e gratuita sera gerado um codigo para voce informar no menu de pagamento.\nCaso tenha adquirido algo de nosso museu, nao sera cobrado o ingresso. Boa visita!\n");
                        cliente.codigoConfirmacao = rand() % 4000+1;
                        printf("\n\tCodigo de confirmacao para pagamento ou participar da dinamica de perguntas : %d", cliente.codigoConfirmacao);
                    }else{
                        printf("\nInfelizmente nao podemos prosseguir com a entrada gratuita se voce nao possui um cupom.\n");
                        
                    }
                    
                }
                printf("\n");
                printf("\n\t\t\t\tCaso queira se conectar ao Wi-fi de nosso museu, segue login da rede.\n\t\t\t\t\t\t\tLogin: museuimersivo \n\t\t\t\t\t\t\tSenha: museu123");
                printf("\n");
                cliente.codigoConfirmacao = rand() % 1000+1;
                printf("\n\t\tCodigo de confirmacao para pagamento ou participar da dinamica de perguntas : %d", cliente.codigoConfirmacao);
                
                break;

            case 4:
                
                printf("\nComprar aperitivos e comidas\n");
                totalComidas += comprarComidas();
                break;
            case 5:
                printf("\nComprar camisetas e acessorios de nosso museu\n");
                totalAcessorios += comprarAcessorios();
                break;
            case 6:
                //funcao que resume os temas
				resumotema();
                break;
            case 7:
                printf("\n");
                //printf("\n\t\t\t\t\t\t\tPagamento\n");
                printf("\n\tSenhor(a) visitante, informe o codigo de confirmacao para prosseguirmos para a tela de pagamento.\n\t\t\t\tInforme o codigo de confirmacao registrado em sua entrada :  ");
                scanf("%d", & codigo);

                if(codigo==cliente.codigoConfirmacao){
                
                system("cls");
                printf("\n");
                printf("\n");
                printf("\n\t\t\t\tSenhor(a) visitante, informe o tipo do seu bilhete.\n");
                printf("\n\tLembrando que no momento de seu cadastro, o valor do bilhete ja esta gravado em seus dados.\nDesse modo, pedimos que informe o tipo certo do bilhete pois o valor nao ira mudar mesmo selecionando um tipo diferente. ");
                printf("\n\t\t\t\t\t1-Ingresso completo.\n\t\t\t\t\t2-Meia-entrada.\n\t\t\t\t\t3-Entrada gratuita.\n\n\t\t\t\t\tInforme o tipo de bilhete : ");
                scanf("%d",&tipoingresso);

            

                if(tipoingresso==1){

               
                system("cls");
                printf("\n\t\t\t\t\tSenhor(a) visitante, qual sera a forma de pagamento?\n\t\t\t\t\t\t\t1-Cartao.\n\n\t\t\t\t\t\t\t2-Pix.\n\n\t\t\t\t\t\t\tResponda : ");
                scanf("%d",&confirmacao);
                
                
                if(confirmacao==1){
                system("cls");
                printf("\n\t\t\t\t\tTotal de comidas: R$%.2f\n", totalComidas);
                printf("\n\t\t\t\t\tTotal de acessorios: R$%.2f\n", totalAcessorios);
                printf("\n\t\t\t\t\tTotal valor de ingressos completos : R$%.2f\n", ingressocompleto);
                totalValor = ingressocompleto + totalComidas + totalAcessorios;
                printf("\n\t\t\t\t\tTotal geral a pagar: R$%.2f\n", totalValor);
                
                    do{
                        printf("\n\t\t\t\t\tDigite o numero do cartao com 16 digitos : ");
                        scanf("%16s",cartao);


                        while((buffer=getchar())!='\n' && buffer !=EOF);


                        if(strlen(cartao)!=16){
                        system("cls");
                        printf("\n\t\t\t\t\tInvalido. Por favor informe os 16 digitos do cartao. ");


                    }}while(strlen(cartao)!=16);
                    system("cls");
                    printf("\n");
                    printf("\n\t\t\t\t\t\tPagamento efetuado com sucesso. ");
                    return 0;
                }
                }


                if(confirmacao==2){
                    system("cls");
                 do {

                   
                
                    
                    printf("\n");
                    printf("\n\t\t\t\t\t\t1-Realizar Pagamento PIX ");
                    printf("\n\t\t\t\t\t\t0-Voltar ao menu principal.\n");
                    

                    
                    printf("\n\t\t\t\t\t\tEscolha uma opcao: ");
                    scanf("%d", &escolha);

                //Limpa o buffer de entrada para evitar problemas na próxima leitura
                    char bufferLimpeza;
                    while ((bufferLimpeza = getchar()) != '\n' && bufferLimpeza != EOF);

                    
                    switch (escolha) {
                        case 1:
                        realizarPagamentoPix();
                        break;

                        case 0:
                        system("cls");
                        break;

                    default:
                        system("cls");
                        printf("\n");
                        printf("\n\t\t\t\t\t\tOpcao invalida. Tente novamente.\n");
                    }
                    } while (escolha != 0);   
                
                
                    if(pagamentoPix==1){
                    do{
                        printf("\n\t\t\tInforme o numero de celular com DDD.\nExemplo:(11)4002-8922. ");
                        printf("Numero de celular : ");
                        scanf("%11s",celularPix);


                        while((buffer=getchar())!='\n' && buffer !=EOF);


                        if(strlen(celularPix)!=11){
                        printf("\n\t\tInvalido. Por favor informe os 11 digitos do celular incluindo DDD. ");


                    }}while(strlen(cartao)!=11);
                    system("cls");
                    printf("\n");
                    printf("\n\tPagamento efetuado com sucesso. ");
                    return 0;


                    }
                }
              

                if(tipoingresso==2){
                system("cls");
                printf("\n");
                printf("\n\t\t\t\t\t\tQual sera a forma de pagamento?\n\t\t\t\t\t\t1-Cartao.\n\t\t\t\t\t\t2-Pix. ");
                printf("\n\n\t\t\t\t\t\tResponda : ");
                scanf("%d",&confirmacaoMeiaEntrada);

                if(confirmacaoMeiaEntrada==1){
                system("cls");
                printf("\n");
                printf("\n\t\t\t\t\tTotal de comidas: R$%.2f\n", totalComidas);
                printf("\n\t\t\t\t\tTotal de acessorios: R$%.2f\n", totalAcessorios);
                printf("\n\t\t\t\t\tTotal valor de ingressos completos : R$%.2f\n", meiaentrada);
                totalValor = meiaentrada + totalComidas + totalAcessorios;
                printf("\n\t\t\t\t\tTotal geral a pagar: R$%.2f\n", totalValor);
               // printf("Informe o numero do cartao : ");
                //scanf("%d",&pagamentoVisitante);
                //printf("\nPagamento encerrado\n");
                    do{
                        printf("\n\t\t\t\t\tDigite o numero do cartao com 16 digitos : ");
                        scanf("%16s",cartao);


                        while((buffer=getchar())!='\n' && buffer !=EOF);


                        if(strlen(cartao)!=16){
                        system("cls");
                        printf("\n");
                        printf("\n\t\t\t\tInvalido. Por favor informe os 16 digitos do cartao. ");


                    }}while(strlen(cartao)!=16);
                    system("cls");
                    printf("\n");
                    printf("\n\t\t\t\t\t\tPagamento efetuado com sucesso.\n\t\t\t\t\t\tObrigado por visitar o nosso museu!\n ");
                    return 0;
                    }}



                if(confirmacaoMeiaEntrada==2){
                printf("\nTotal de comidas: R$%.2f\n", totalComidas);
                printf("\nTotal de acessorios: R$%.2f\n", totalAcessorios);
                printf("\nTotal valor de ingressos meia-entrada : R$%.2f\n", meiaentrada);
                totalValor = meiaentrada + totalComidas + totalAcessorios;
                printf("\nTotal geral a pagar: R$%.2f\n", totalValor);

                do {
                
                    
                    printf("1. Realizar Pagamento PIX\n");
                    printf("0. Sair\n");

                    // Solicitar escolha ao usuário
                    printf("Escolha uma opção: ");
                    scanf("%d", &escolha);

                // Limpar o buffer de entrada para evitar problemas na próxima leitura
                    char bufferLimpeza;
                    while ((bufferLimpeza = getchar()) != '\n' && bufferLimpeza != EOF);

                    // Executar a opção escolhida
                    switch (escolha) {
                        case 1:
                        realizarPagamentoPix();
                        break;

                        case 0:
                        printf("\nVoltando ao menu principal.\n");
                        break;

                    default:
                        
                        printf("\nOpção inválida. Tente novamente.\n");
                    }
                    } while (escolha != 0);   



                //printf("\nInforme a chave pix : ");
                //scanf("%d",&pagamentoVisitante);
                //printf("\nPagamento encerrado\n");
                }
                }

                if(tipoingresso==3){
                system("cls");
                printf("\nTotal de comidas: R$%.2f\n", totalComidas);
                printf("\nTotal de acessorios: R$%.2f\n", totalAcessorios);
                
                totalValor = + totalComidas + totalAcessorios;
                printf("\nTotal geral a pagar: R$%.2f\n", totalValor);

                    if(totalValor!=0){
                        printf("Qual sera a forma de pagamento? \n1-Cartao.\n2-Pix.\nPor favor responda : ");
                        scanf("%d",&confirmacaoEntradaGratuita);

                        if(confirmacaoEntradaGratuita==1){
                            do{
                                printf("\nDigite o numero do cartao com 16 digitos : ");
                                scanf("%16s",cartaoEntradagratuita);


                            while((buffer=getchar())!='\n' && buffer !=EOF);


                            if(strlen(cartaoEntradagratuita)!=16){
                                printf("\nInvalido. Por favor informe os 16 digitos do cartao. ");


                        }}while(strlen(cartaoEntradagratuita)!=16);
                        system("cls");
                        printf("\nPagamento efetuado com sucesso. ");
                        break;

                        }}

                        if(confirmacaoEntradaGratuita==2){
                            do {

                                printf("1. Realizar Pagamento PIX\n");
                                printf("0. Sair\n");

                    
                                printf("Escolha uma opção: ");
                                scanf("%d", &escolha);

                                // Limpar o buffer de entrada para evitar problemas na próxima leitura
                                char bufferLimpeza;
                                while ((bufferLimpeza = getchar()) != '\n' && bufferLimpeza != EOF);

                                // Executar a opção escolhida
                                switch (escolha) {
                                        case 1:
                                        realizarPagamentoPix();
                                        break;

                                        case 0:
                                        printf("\nVoltando ao menu principal.\n");
                                        break;

                                        default:
                        
                                            printf("\nOpção inválida. Tente novamente.\n");
                                        }
                                } while (escolha != 0);   

                        }

                    
                    }

                if(codigo!=cliente.codigoConfirmacao){
                    system("cls");
                    printf("\n");
                    printf("\n\n\tO codigo informado esta errado, sera gerado um novo codigo automatico para questoes de seguranca. \n\t\tPor favor guarde o novo codigo para avancar para a tela de pagamento.\n ");
                    cliente.codigoConfirmacao = rand() % 10000+1;
                    printf("\n\t\t\t\t\tCodigo de confirmacao : %d", cliente.codigoConfirmacao);
                    printf("\n");
                    
                }
                break;
			
			case 8:
				//chama a função de dinamica de perguntas aqui
				
				//perguntascertas=perguntasDinamica();
                perguntasDinamica();
				break;
			

            case 9:
                do{
                printf("\n\t\t\tSeja bem-vindo senhor(a) funcionario, para prosseguir efetue o seu login.\n");
                printf("\n\t\t\t\t\t\tLogin : ");
                scanf("%s",loginfunc);

             
                printf("\n\t\t\t\t\t\tSenha : ");
                scanf("%s",senhafunc);


                if(strcmp(loginfunc, "loginadm")==0 && strcmp(senhafunc,"adm123")==0){
                    funclogado=1;
                    system("cls");
                
                    do{
                        
                        printf("\n\n\t\t\t\tSenhor(a) funcionario, escolha uma das opcoes a seguir.\n");
                        printf("\n\t\t\t\t\t1-Total de visitantes.\n\t\t\t\t\t2-Controle de caixa.\n\t\t\t\t\t3-Voltar ao menu principal.\n\t\t\t\t\t4-Sair do sistema. ");
                        printf("\n\n\t\t\t\t\tEscolha uma opcao : ");
                        scanf("%d", &opcaofunc);
                    
                        switch(opcaofunc){
                                case 1:   
                                    system("cls");
                                    printf("\n");
                                    printf("\n\t\t\t\t\tTotal de visitantes : %d ", totalvisitantes);
				                    break;

                                /*case 2:
                                    system("cls");
                                    printf("\nRelatorio em arquivo CSV.\n");
				                    //relatoriocsv(perguntascertas); caso eu queira usar futuramente
				                    break;
                                        */
                                case 2:
                                    system("cls");
                                    do{
                                        printf("\nControle de caixa.\n");
                                        printf("Senhor(a) funcionario(a), deseja ver o caixa de qual opcao a seguir? \n1-Total de ingressos completos.\n2-Total de ingressos meia-entrada.\n3-Total de comidas.\n4-Total de acessorios.\n5-Total geral.\n6-Sair.\nResponda : ");
                                        scanf("%d",&caixafunc);

                                        switch(caixafunc){
                                                case 1:
                                                    system("cls");
                                                    printf("\nTotal valor de ingressos completos : R$%.2f\n", ingressocompleto);
                                                    break;

                                                case 2:
                                                    system("cls");
                                                    printf("\nTotal valor de ingressos meia-entrada : R$%.2f\n", meiaentrada);
                                                    break;

                                                case 3:
                                                    system("cls");
                                                    printf("\nTotal de comidas registradas : R$%.2f\n", totalComidas);
                                                    break;

                                                case 4:
                                                    system("cls");
                                                    printf("\nTotal de acessorios registrados: R$%.2f\n", totalAcessorios);
                                                    break;

                                                case 5:
                                                    system("cls");
                                                    printf("\nValor total de caixa: R$%.2f\n", totalValor);
                                                    break;

                                                case 6:
                                                    system("cls");
                                                    printf("\nVoltando ao menu principal"); 
                                                    break;   

                                                default:
                                                    printf("\nOpcao invalida. Selecione uma opcao do menu. ");  
                                
                           
                                    }
                                }while(caixafunc!=6);
                                break;
                    
                    case 3:
                        system("cls");
                       
                        break;

                    case 4:
                        system("cls");
                        printf("\n\t\t\t\t\t\tSaindo do sistema...");
                        return 0;
                        break;   

                    default:
                    system("cls");
                    printf("\n");
                    printf("\n\t\t\t\t\t\tOpcao invalida");
                    		
                }

                }while(opcaofunc!=3);
                break;        



            }else{
                system("cls");
                printf("\n\t\t\t\t\t\tLogin incorreto. ");
                printf("\n");
                
            }
            }while(!funclogado);
            break;

           case 10:
                printf("\n");
                printf("\n\t\t\t\t\tObrigado por visitar o nosso museu, volte sempre!\n");
                return 0;

            default:
                printf("\n\t\t\t\t\tOpcao invalida, por favor informe uma opcao do menu.\n");
                break;
        }

    } while (opcao != 10 );

    return 0;
}

