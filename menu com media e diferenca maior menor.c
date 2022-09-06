#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma op��o v�lida e aperte a tecla enter\n\n");
        printf("1. Descri��o da �rea: Gest�o de TI\n");
        printf("2. Descri��o da �rea: An�lise e Desenvolvimento de Sistemas\n");
        printf("3. Descri��o da �rea: Seguran�a da Informa��o\n");
        printf("4. Calcular m�dia do aluno\n");
        printf("5. Mostrar diferen�a do maior n�mero para o menor\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                gestaoTI();
                break;

            case 2:
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                segurancaInformacao();
                break;

            case 4:
                mediaAnual();
                break;

            case 5:
                diferencaMaiorMenor();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
void gestaoTI()
{
    printf("Gest�o de TI � a atividade que coordena todos os processos relacionados � tecnologia da informa��o dentro de uma empresa. Logo, o gestor de TI � o profissional respons�vel por garantir a m�xima efici�ncia no uso dos recursos humanos e tecnol�gicos, otimizando a performance da organiza��o.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas � o profissional respons�vel por desenvolver, projetar, analisar, implementar e realizar a manuten��o de sistemas de informa��o de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Seguran�a da informa��o � a pr�tica que mant�m os dados sens�veis em sigilo, a defesa do que n�o � p�blico\n");
}

void mediaAnual()
{
     // declara��o de variaveis
  	float nota1;
  	float nota2;
  	float nota3;
  	float nota4;
  	float notaExame;
  	float mediaAnual;
  	float mediaFinal;

  	// entrada
  	printf("Digite a nota 1 : ");
	scanf("%f", &nota1);
  	printf("Digite a nota 2 : ");
	scanf("%f", &nota2);
	printf("Digite a nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite a nota 4 : ");
	scanf("%f", &nota4);

  	// processamento
  	mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4 ;

	// criticar para saber se o aluno esta aprovado ou retido
	// saida
	if (mediaAnual >= 7)
    {
        printf( "APROVADO !!!");
    }
  	else
  	{
  	    printf("Digite a nota do Exame : ");
        scanf("%f", &notaExame);
        mediaFinal = (notaExame + mediaAnual) / 2;
        if(mediaFinal >= 5)
        {
            printf("Aluno aprovado");
        }
        else
        {
            printf("Aluno devera cursar DP");
        }
  	}
  	return 0;
}

void diferencaMaiorMenor()
{
       // declara��o de variaveis
  	int n1;
  	int n2;
  	int result;

  	// entrada
  	printf("Digite o valor do primeiro n�mero : ");
	scanf("%d", &n1);
  	printf("Digite o valor do segundo n�mero : ");
	scanf("%d", &n2);

  	// processamento
  	if (n1 > n2)
  	{
  		result = n1 - n2;
    }
  	else
  	{
	    result = n2 - n1;
  	}

  	// saida
  	printf("O resultado da diferen�a do maior n�mero para o menor � : %d", result);
  	return 0;
}

void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
}
