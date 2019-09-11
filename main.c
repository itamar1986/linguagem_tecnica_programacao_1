#include <stdio.h>
#include <stdlib.h>

int menu();
int adcionar_espacos();
int criar_arquivos();
int signos();
int frases();
int sair();
int opcao;
FILE *horoscopo;
char frase_digitada[102];
char signo_periodo[12] [40];
int id_signos[12];

 //Criando a struct
  typedef struct {
    char frase[100];
    char id[2];
  } Frases;

int main(int argc, char *argv[]) {
	menu();
	
	//getch();
	return 0;
}

int adcionar_espacos() {
	printf("\n");
	printf("\n");
}

int menu() {
	printf("-----------SIGNOS DO ZODIACO-----------");
	adcionar_espacos();
	printf("0 - Cria arquivos com frases motivacionais\n");
	printf("1 - Saber qual e o signo\n");
	printf("2 - Frase motivacional do signo\n");
	printf("3 - Sair");
	adcionar_espacos();
	printf("***Entre com uma das opcoes acima: \n");

	scanf("%d",&opcao);
	
	switch(opcao) {
	
	case 0:
		criar_arquivo();
		break;
		
	case 1:
		signos();
		break;
		
	case 2:
		frases();
		break;
		
	case 3:
		sair();
		break;
	
	default:
		printf("Por favor, escolha uma das opcoes acima!");
		system("cls");
		menu();
		break;
	
	}
}

int criar_arquivo() {
	system("cls");
	printf("*** CRIR ARQUIVO COM FRASES MOTIVACIONAIS ***");
	adcionar_espacos();
	
	//abrindo o arquivo
	horoscopo = fopen("horoscopo.txt", "w");
	
	//testando a abertura do arquivo criado
  	if(horoscopo == NULL) {
  		printf("\n Erro na abertura do arquivo! \n");
 	 	return 1;
 	}
	
	//Criando a variável que será do tipo struct frases
  	Frases lista_frases[12];
	
	do {
		printf ("Entre com a frase motivacional para o signo de CAPRICORNIO - 22/12 a 20/01 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[0].id[0] = '1';
		lista_frases[0].id[1] = '1';
		id_signos[0] = 11;
		strcpy(signo_periodo[0], "CAPRICORNIO - 22/12 a 20/01");
		fflush(stdin);
		gets(lista_frases[0].frase);
		if (strlen(lista_frases[0].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "11");
		strcat(frase_digitada, lista_frases[0].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[0].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de AQUARIO - 21/01 a 18/02 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[1].id[0] = '1';
		lista_frases[1].id[1] = '2';
		id_signos[1] = 12;
		strcpy(signo_periodo[1], "AQUARIO - 21/01 a 18/02");
		fflush(stdin);
		gets(lista_frases[1].frase);
		if (strlen(lista_frases[1].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "12");
		strcat(frase_digitada, lista_frases[1].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[1].frase) > 100 );

	do {
		printf ("Entre com a frase motivacional para o signo de PEIXES - 19/02 a 20/03 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[2].id[0] = '1';
		lista_frases[2].id[1] = '3';
		id_signos[2] = 13;
		strcpy(signo_periodo[2], "PEIXES - 19/02 a 20/03");
		fflush(stdin);
		gets(lista_frases[2].frase);
		if (strlen(lista_frases[2].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "13");
		strcat(frase_digitada, lista_frases[2].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[2].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de ARIES - 21/03 a 20/04 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[3].id[0] = '1';
		lista_frases[3].id[1] = '4';
		id_signos[3] = 14;
		strcpy(signo_periodo[3], "ARIES - 21/03 a 20/04");	
		fflush(stdin);
		gets(lista_frases[3].frase);
		if (strlen(lista_frases[3].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "14");
		strcat(frase_digitada, lista_frases[3].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[3].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de TOURO - 21/04 a 20/05 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[4].id[0] = '1';
		lista_frases[4].id[1] = '5';
		id_signos[4] = 15;
		strcpy(signo_periodo[4], "TOURO - 21/04 a 20/05");
		fflush(stdin);
		gets(lista_frases[4].frase);
		if (strlen(lista_frases[4].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "15");
		strcat(frase_digitada, lista_frases[4].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[4].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de GEMEOS - 21/05 a 20/06 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[5].id[0] = '1';
		lista_frases[5].id[1] = '6';
		id_signos[5] = 16;
		strcpy(signo_periodo[5], "GEMEOS - 21/05 a 20/06");	
		fflush(stdin);
		gets(lista_frases[5].frase);
		if (strlen(lista_frases[5].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "16");
		strcat(frase_digitada, lista_frases[5].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[5].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de CANCER - 21/06 a 22/07 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[6].id[0] = '1';
		lista_frases[6].id[1] = '7';
		id_signos[6] = 17;
		strcpy(signo_periodo[6], "CANCER - 21/06 a 22/07");
		fflush(stdin);
		gets(lista_frases[6].frase);
		if (strlen(lista_frases[6].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "17");
		strcat(frase_digitada, lista_frases[6].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[6].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de LEAO - 23/07 a 22/08 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[7].id[0] = '1';
		lista_frases[7].id[1] = '8';
		id_signos[7] = 18;
		strcpy(signo_periodo[7], "LEAO - 23/07 a 22/08");
		fflush(stdin);
		gets(lista_frases[7].frase);
		if (strlen(lista_frases[7].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "18");
		strcat(frase_digitada, lista_frases[7].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[7].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de VIRGEM - 23/08 a 22/09 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[8].id[0] = '1';
		lista_frases[8].id[1] = '9';
		id_signos[8] = 19;
		strcpy(signo_periodo[8], "VIRGEM - 23/08 a 22/09");
		fflush(stdin);
		gets(lista_frases[8].frase);
		if (strlen(lista_frases[8].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "19");
		strcat(frase_digitada, lista_frases[8].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[8].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de LIBRA - 23/09 a 22/10 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[9].id[0] = '2';
		lista_frases[9].id[1] = '0';
		id_signos[9] = 20;
		strcpy(signo_periodo[9], "LIBRA - 23/09 a 22/10");
		fflush(stdin);
		gets(lista_frases[9].frase);
		if (strlen(lista_frases[9].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "20");
		strcat(frase_digitada, lista_frases[9].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[9].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de ESCORPIAO - 23/10 a 21/11 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[10].id[0] = '2';
		lista_frases[10].id[1] = '1';
		id_signos[10] = 21;
		strcpy(signo_periodo[10], "ESCORPIAO - 23/10 a 21/11");
		fflush(stdin);
		gets(lista_frases[10].frase);
		if (strlen(lista_frases[10].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "21");
		strcat(frase_digitada, lista_frases[10].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[10].frase) > 100 );
	
	do {
		printf ("Entre com a frase motivacional para o signo de SAGITARIO - 22/11 a 21/12 \n");
		printf ("[----------Tamanho maximo de 100 posicoes----------] \n");
		fflush(stdin);
		lista_frases[11].id[0] = '2';
		lista_frases[11].id[1] = '2';
		id_signos[11] = 22;
		strcpy(signo_periodo[11], "SAGITARIO - 22/11 a 21/12");
		fflush(stdin);
		gets(lista_frases[11].frase);
		if (strlen(lista_frases[11].frase) > 100 ) {
			printf ("\n[----------Tamanho maximo de 100 posicoes----------] \n\n");
			continue;
		}
		strcpy(frase_digitada, "22");
		strcat(frase_digitada, lista_frases[11].frase);
		strcat(frase_digitada, "\n");
		fputs(frase_digitada, horoscopo);
		fflush(stdin);
		printf ("\n");
		strcpy(frase_digitada, "");
	} while(strlen(lista_frases[11].frase) > 100 );
	
	strcpy(signo_periodo[0], "CAPRICORNIO - 22/12 a 20/01");
	// fechando arquivo
	fflush(stdin);
  	fclose(horoscopo);
  	
  	printf("Dados gravados com sucesso! Clique para retornar ao menu.");
  	fflush(stdin);
  	getc(stdin);
  	system("cls");
  	menu();
}

int signos() {
	char data_nascimento[4];
	char dia_char[2];
	char mes_char[2];
	char *dia_ptr;
	char *mes_ptr;
	int dia;
	int mes;
	
	system("cls");
	printf("          *** INFORMA O SIGNO ***");
	adcionar_espacos();
	printf("Informe o dia e o mes que voce nasceu (DDMM): ");
	//array de signos
	scanf("%s", data_nascimento);
	//split do array
	memcpy(dia_char, data_nascimento, 2 * sizeof(char)); 
	memcpy(mes_char, &data_nascimento[2], 2 * sizeof(char));
	//convertendo char para int
	sscanf(dia_char, "%d", &dia); 
	sscanf(mes_char, "%d", &mes);

	if(mes == 1) {
		if(dia >= 20){
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 12) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 11) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 2) {
		if(dia >= 18) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 13) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 12) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 3) {
		if(dia >= 20) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 14) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 13) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 4) {
		if(dia >= 20) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 15) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 14) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 5) {
		if(dia >= 20) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 16) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 15) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 6) {
		if(dia >= 20) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 17) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 16) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 7) {
		if(dia >= 22) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 18) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 17) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 8) {
		if(dia >= 22) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 19) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 18) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 9) {
		if(dia >= 22) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 20) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 19) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 10) {
		if(dia >= 22) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 21) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 20) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 11) {
		if(dia >= 21) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 22) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 21) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else if(mes == 12) {
		if(dia >= 21) {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 11) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		} else {
			int index, i;
			for( i=0; i<12; i++ ) {
				if( id_signos[i] == 22) {
					index = i;
				}
			}
			adcionar_espacos();
			printf("==> Voce e do signo de *** %s ***\n", signo_periodo[index]);
			getch();
			system("cls");
		}
	} else {
		printf("Por favor, digite um mes valido!");
		getch();
		system("cls");
		signos();
	}
	menu();
}

int frases() {
	char frases_arquivo[12][104];
	char frase_desmembrada[100];
	int i = 0;
	int opcao;
	system("cls");
	
	horoscopo = fopen("horoscopo.txt", "r"); 
	if (horoscopo == NULL) {
    	printf("ERRO! O arquivo não foi aberto!\n");
    	return 1;
	} 
	
	printf ("\n!     	*** FRASE MOTIVACIONAL DO SIGNO ***");
	printf ("\n*---------------------------------------------------------*");
    printf ("\n!                   Signos do Zodiaco                     !");
    printf ("\n!                                                         !");
    printf ("\n!  (1) Capricornio (4) Aries   (7) Cancer  (10) Libra     !");
    printf ("\n!  (2) Aquario     (5) Touro   (8) Leao    (11) Escorpiao !");
    printf ("\n!  (3) Peixes      (6) Gemeos  (9) Virgem  (12) Sagitario !");
    printf ("\n!                                                         !");
    printf ("\n!                                                         !");
    printf ("\n*---------------------------------------------------------*");
	adcionar_espacos();
    
    printf ("\nDigite o numero que representa o seu signo: ");
    scanf("%d", &opcao);
    
	while((fscanf(horoscopo, "%s", frase_digitada)) != EOF) {
		strcpy(frases_arquivo[i], frase_digitada);
  		fflush(stdin);
  		i++;
	}
  
    switch(opcao){
    	case 1:
    		memcpy(frase_desmembrada, &frases_arquivo[0][2], 100 * sizeof(char)); 
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 2:
    		memcpy(frase_desmembrada, &frases_arquivo[1][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 3:
    		memcpy(frase_desmembrada, &frases_arquivo[2][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 4:
    		memcpy(frase_desmembrada, &frases_arquivo[3][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 5:
    		memcpy(frase_desmembrada, &frases_arquivo[4][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 6:
    		memcpy(frase_desmembrada, &frases_arquivo[5][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 7:
    		memcpy(frase_desmembrada, &frases_arquivo[6][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 8:
    		memcpy(frase_desmembrada, &frases_arquivo[7][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 9:
    		memcpy(frase_desmembrada, &frases_arquivo[8][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 10:
    		memcpy(frase_desmembrada, &frases_arquivo[9][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 11:
    		memcpy(frase_desmembrada, &frases_arquivo[10][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	case 12:
    		memcpy(frase_desmembrada, &frases_arquivo[11][2], 100 * sizeof(char));
    		printf ("\n[ %s ]", frase_desmembrada);
    		break;
    	default:
    		printf ("\nSigno nao cadastrado!");
    		getch();
    		system("cls");
    		frases();
    		break;			
	}
	//fechando o arquivo
  	fclose(horoscopo);
  	getch();
  	system("cls");
  	menu();
}

int sair() {
	system("cls");
	printf("Voce foi desconectado do programa.");
	return 1;
}













