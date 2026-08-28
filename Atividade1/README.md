Pseudocódigo referente a atividade 1 da disciplina Paradigmas da programação.  
Aluno: Nicolas Cristhian Lima Araújo
  
  
Inicio do programa  
	ler nome do cliente  
	ler idade do cliente  
	ler saldo disponivel do cliente  
	ler preço do produto  
	ler quantidade do produto  

Verificação de compra  

se a idade do cliente >= 18 e saldo disponivel >= (preço do porduto * quantidade do produto)  
	informe que a compra foi efetuada  

se a idade do cliente >= 18 e saldo disponivel < (preço do porduto * quantidade do produto)  
	informe que a compra está negada por saldo insuficiente  

se a idade do cliente < 18 e saldo disponivel >= (preço do porduto * quantidade do produto)  
	informe que a compra está negada por idade insuficiente  

se a idade do cliente >= 18 e saldo disponivel < (preço do porduto * quantidade do produto)  
	informe que a compra está negada por idade e saldo insuficiente  
Fim do programa


(obs: talvez antes de sexta 23:59 eu faça uma modificação no código para ele ficar mais intaretivo. Pensei em criar um mini menu para que o usuario consigar escolher o produto, para que a requisição de ser maior de idade seja apenas para certos produtos e não todos)
