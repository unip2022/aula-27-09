#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, contagem;
    float preco=0, desconto, opcao, precocomdesconto, somapreco;

    printf("\t\t\tSeja bem vindo ao nosso autoatendimento.\n"
           "Digite quantas peças de roupa você gostaria de comprar: ");
   scanf("%d", &quantidade);

   for(contagem=1; contagem<=quantidade; contagem++)
   {
       printf("Digite o preço da %dª peça de roupa: ", contagem);
       scanf("%f", &somapreco);
       preco=preco+somapreco;
   }
    printf("De qual maneira você gostaria de pegar?")
    return 0;
}
