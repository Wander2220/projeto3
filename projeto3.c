#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int id;
    char nome[80], endereco[40], sexo[10], email[50];
    double altura;
    int vacina;
} Informacoes;
Informacoes* inicializar(){
	return NULL; 
}

Informacoes* incluirInfo(Informacoes* lista){
Informacoes* novo = (Informacoes*) malloc(sizeof(Informacoes));


Informacoes* incluirInfo(Informacoes* Usuarios){
	Informacoes* novo = (Informacoes*) malloc(sizeof(Usuarios));
	printf("digite seu nome\n");
	gets(novo->nome);
	fflush(stdin);
	novo->proximo=Usuarios;
	return novo;

    srand(time(NULL));
novo->id = 1 + rand() % 1000;

int conferir=0;
    do {
      printf("digite seu email\n");
      fgets(novo->email, stdin);
      fflush(stdin);
      if (strstr(novo->email, "@") == NULL) {
        printf("email invalido, por favor tentar de novo\n");
      } 
      else {
        conferir = 1;
      }
      
      } while (!conferir);
       
       do{
     printf("digite seu sexo (masculino, feminino ou indiferente)");
     gets (novo->sexo);
     fflush(stdin);
     }while((strcmp(novo->sexo, "feminino")!=0) && (strcmp(novo->sexo, "masculino")!=0) && (strcmp(novo->sexo, "indiferente")!=0));


     printf("digite seu endereco %d\n", i);
        fgets(Informacoes[i].endereco, sizeof(Informacoes[i].endereco), stdin);
        Informacoes[i].endereco[strcspn(Informacoes[i].endereco, "\n")] = '\0';

        do{
        printf("digite sua altura:");
        scanf("%lf",&novo->altura);
        fflush (stdin);

        if(novo->altura<1 || novo->altura>2){
            printf("opcao invalida por favor tentar novamente\n");
        }
       }while(novo->altura<1 || novo->altura>2);

        do {
            printf("usuario vacinado? 0 para sim, 1 para nao");
            scanf("%d", &novo->vacina);
            fflush(stdin);
            if (novo->vacina == 0) {
            } else if (novo->vacina == 1) {
            } else {
            printf("opcao invalida, por favor tente novamente.\n");
            }

        } while (novo->vacina != 0 && novo->vacina != 1);
        	novo->ponteiro=lista;
	        return novo;
}

Informacoes* deletarInfo(Informacoes *Usuarios){

	Informacoes* anterior;  
 	Informacoes* auxiliar; 
	
  char email[Informacoes];

    printf("digite o email do usuario que deseja excluir: ");
    fgets(email,Informacoes, stdin);

    for(auxiliar=lista;auxiliar!=NULL;auxiliar=auxiliar->ponteiro) {
        if (strcmp(auxiliar->email,email) == 0) {
        printf("id: %d\n", auxiliar->id);
        printf("nome: %s\n", auxiliar->nome);
        printf("endereco: %s\n", auxiliar->endereco);
        printf("sexo: %s\n", auxiliar->sexo);
        printf("email: %s\n", auxiliar->email);
        printf("altura: %.2f\n", auxiliar->altura);
        printf("vacina: %d\n", auxiliar->vacina);    

    printf("usuario excluido com sucesso!\n");
    return lista;
        }
    }
}

void editarInfos(){
    char email[sizeof(Informacoes[0].email)];
    int valorVacina;
    float valorAltura;
    getchar();

    printf("digite o email que deseja editar\n");
    fgets(email, sizeof(email), stdin);

    while(strchr(email,'@') == NULL){
        printf("opcao invalida, por favor tentar novamente\n");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0';
    }
    srand(time(NULL));
novo->id = 1 + rand() % 1000;

int conferir=0;
    do {
      printf("digite seu email\n");
      fgets(novo->email, stdin);
      fflush(stdin);
      if (strstr(novo->email, "@") == NULL) {
        printf("email invalido, por favor tentar de novo\n");
      } 
      else {
        conferir = 1;
      }
      
      } while (!conferir);
       
       do{
     printf("digite seu sexo (masculino, feminino ou indiferente)");
     gets (novo->sexo);
     fflush(stdin);
     }while((strcmp(novo->sexo, "feminino")!=0) && (strcmp(novo->sexo, "masculino")!=0) && (strcmp(novo->sexo, "indiferente")!=0));


     printf("digite seu endereco %d\n", i);
        fgets(Informacoes[i].endereco, sizeof(Informacoes[i].endereco), stdin);
        Informacoes[i].endereco[strcspn(Informacoes[i].endereco, "\n")] = '\0';

        do{
        printf("digite sua altura:");
        scanf("%lf",&novo->altura);
        fflush (stdin);

        if(novo->altura<1 || novo->altura>2){
            printf("opcao invalida por favor tentar novamente\n");
        }
       }while(novo->altura<1 || novo->altura>2);

        do {
            printf("usuario vacinado? 0 para sim, 1 para nao");
            scanf("%d", &novo->vacina);
            fflush(stdin);
            if (novo->vacina == 0) {
            } else if (novo->vacina == 1) {
            } else {
            printf("opcao invalida, por favor tente novamente.\n");
            }

        } while (novo->vacina != 0 && novo->vacina != 1);
        	novo->ponteiro=lista;

            printf("usuario editado com sucesso!!!!");

	        return novo;
}
void listarInfos(Informacoes* lista){
Informacoes* auxiliar;
	for(auxiliar=lista;auxiliar!=NULL;auxiliar=auxiliar->ponteiro){
		printf("id: %d\n", auxiliar->id);
        printf("nome: %s\n", auxiliar->nome);
        printf("endereco: %s\n", auxiliar->endereco);
        printf("sexo: %s\n", auxiliar->sexo);
        printf("email: %s\n", auxiliar->email);
        printf("altura: %.2f\n", auxiliar->altura);
        printf("vacina: %d\n", auxiliar->vacina);    
	}
}

int main(){
    int opcao;
    Informacoes* lista;

    lista= inicializar();
    
    do {
        printf("MENU\n1 - incluir\n2 - deletar.\n3 - editar.\n4 - listar\n");
        scanf(" %d", &opcao);
        fflush(stdin);

     switch (opcao) {

        case 1:
        lista= incluirInfo(lista);
        break;

        case 2:
        lista=deletarInfo(lista);
        break;

        case 3: 
        lista = editaInfos(lista);
        break;

        case 4:
        listarInfos(lista);
        break;

        default:printf("opcao invalida!!");
        break;
     }
    } while ((opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4));
} 
}