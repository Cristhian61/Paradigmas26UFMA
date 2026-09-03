# PDV -> Caixa Eletrônico  
*Atividade 2 da disciplina Paradigmas da Programação.*  
*Aluno: Nicolas Cristhian Lima Araújo*  

***Menu de opções:***  
- Consultar saldo;
- Depositar;
- Sacar;
- Encerrar -> Booleana (True/False).

***Pseudocódigo:***  

**Inicio do programa**  

*Variáveis:*  
Saldo - Float;  
Temporária - Float;  
Encarrar - Booleana;  
Operador - inteira;  


Enquanto encerrar = False, fazer:  
Ler Operador:  

*operações:*  

Consultar saldo:  
    Escreva saldo disponível;

Depositar:  
    Ler valor temporário   
    saldo recebe saldo + valor temporario

Sacar:  
    Ler valor Temporário  
    se valor temporário  <= saldo disponível  
        saldo  recebe saldo - valor temporario  
    se não:  
        escreva não possui o valor disponível   

Encerrar:  
encerrar recebe True  

**Fim do algoritmo**
