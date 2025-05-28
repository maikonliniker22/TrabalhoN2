//Maikon Liniker Araújo de souza
//Algoritmos I
//Trabalho N2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define PRODUTOS 200
#define CLIENTES 50

int main()
{   //Para permitir a exibição de acentos e caracteres especiais
    setlocale( LC_ALL, "PORTUGUESE");

    //  Gera números aleatórios diferentes, com base na hora atual.
    srand((unsigned)time(NULL));

    // Quantidade aleatória de produtos e clientes
    int numProdutos = rand() % PRODUTOS + 1;   // 1 a 200
    int numClientes = rand() % CLIENTES + 1;   // 1 a 50

    // Vetores para armazenar produtos e preços
    int idsProdutos[PRODUTOS];
    float precosProdutos[PRODUTOS];

    // Vetores para armazenar compras dos clientes
    int idsClientes[CLIENTES];
    int produtosComprados[CLIENTES];

    // Gerar produtos
    for (int i = 0; i < numProdutos; i++)
    {
        idsProdutos[i] = i + 1;
        precosProdutos[i] = 5.0 + (rand() % 9601) / 100.0; // 5.00 a 100.00
    }


    // Gerar clientes e compras
    float total_vendido = 0;
    printf("Mercado tudo entre R$5  a  R$100\n");
    printf("Lotação maxima da loja %.2d/50\n", numClientes);
     printf("=========================================\n");
    printf("Cliente       Produto         Valor R$ \n");
    printf("=========================================\n");

    for (int i = 0; i < numClientes; i++)
    {
        idsClientes[i] = i + 1;
        int indiceProduto = rand() % numProdutos;
        produtosComprados[i] = idsProdutos[indiceProduto];

        float preco = precosProdutos[indiceProduto];
        total_vendido += preco;

        printf("%.2d              %.3d            R$%.2f\n",
               idsClientes[i], produtosComprados[i], preco);
    }

    // Valor total vendido no dia
    printf("------------------------------------------");
    printf("\nTotal Vendido no Dia:         R$%.2f \n", total_vendido);
    printf("------------------------------------------");

    return 0;
}
