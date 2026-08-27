*variaveis:*

nomeCliente  
idadeCliente  
saldoDisponivel  
precoProduto  
quantidadeProduto  

*Algoritmo:*

receber nomeCliente  
receber idadeCliente  
receber saldoDisponivel  
receber precoProduto  
receber quantidadeProduto  


se (idadeCliente >= 18 e saldoDisponivel >= (precoProduto * quantidadeProduto)):  
	escreva(Compra efetuada)

se não (idadeCliente >= 18 e saldoDisponivel < (precoProduto * quantidadeProduto)):  
	escreva(Compra não efetuada: Cliente sem saldo sulficiente)

se não (idadeCliente < 18 e saldoDisponivel >= (precoProduto * quantidadeProduto)):  
	escreva("Compra não efetuada: Cliente menor de idade")

se não (idadeCliente < 18 e saldoDisponivel < (precoProduto * quantidadeProduto)):  
	escreva("Compra não efetuada: Cliente menor de idade e sem saldo sulficiente")

