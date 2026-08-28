#include <stdio.h>

int main(){
    
    char nome_cliente[20];
    int idade_cliente, quantidade_produto;
    float preco_cigarro, saldo_disponivel;
    
    //dados do cliente:
    printf("\nDigite o nome do cliente: ");
    scanf("%s",nome_cliente);
    printf("\nDigite a idade do cliente: ");
    scanf("%d",&idade_cliente);
    printf("\nDigite o saldo do cliente: ");
    scanf("%f",&saldo_disponivel);

    //dados do produto:
    preco_cigarro = 18.00;
    printf("\nDigite a quantidade do produto: ");
    scanf("%d",&quantidade_produto);
    
    //verificação de compra:
    if(idade_cliente>=18 && saldo_disponivel>=(preco_cigarro*quantidade_produto)){
        printf("\n\n\t Compra efetuada\nCliente: %s\nProduto: Cigarro\t R$%.2f x %d = R$%.2f", nome_cliente, preco_cigarro, quantidade_produto, quantidade_produto*preco_cigarro);
    }else if(idade_cliente>=18 && saldo_disponivel<(preco_cigarro*quantidade_produto)){
        printf("\n\n\t Compra negada\nSaldo insulficiente");
        
    }else if(idade_cliente<18 && saldo_disponivel>=(preco_cigarro*quantidade_produto)){
        printf("\n\n\t Compra negada\nCliente menor de idade");
    
    }else if(idade_cliente<18 && saldo_disponivel<(preco_cigarro*quantidade_produto)){
        printf("\n\n\t Compra negada\nSaldo insulficiente e cliente menor de idade");    
        
    }
        
}   
