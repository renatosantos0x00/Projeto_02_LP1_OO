# MAKEFILE							
#							
#							
# Definição de Macros
OPCAO =
NOME = scci
COMPILADOR = g++
CODIGO = source
BIBLIOTECAS = class
MAIN = main.cpp

# Corpo do Make

all: prog	
	clear
	./$(NOME)

prog: bib main
	@echo "Compilado e linkando-->"$(NOME)
	$(COMPILADOR) $(OPCAO) *.o -o $(NOME)

bib: $(CODIGO) $(BIBLIOTECAS)
	@echo "Compilado Bibliotecas: gerando objetos -> *.o\n"
	$(COMPILADOR) $(OPCAO) -c $(CODIGO)/*.cpp -I$(BIBLIOTECAS)
	ls -l *.o

main: $(MAIN) $(BIBLIOTECAS)
	@echo "Compilado : gerando objeto -> "$(MAIN)
	$(COMPILADOR) $(OPCAO) -c $(MAIN) -I$(BIBLIOTECAS)

limpa: cx
	@echo "Deletando arquivos objetos"
	ls -l *.o
	-rm -f *.o
cx:
	@echo "Deletando "$(NOME)
	-rm -f $(NOME)

ex:
	./$(NOME)

refaz: limpa cx prog

d: bib
	@echo "Gerendo objetos\n"
	rm *.o

ajuda:
	clear
	@echo "============================================================="
	@echo "\t\tNome de saida padrão: "$(NOME)
	@echo "=============================================================\n"

	@echo "| Para usar as regras separadas use '<make> <nome_da_regra>'.\n"
	@echo "| <make>   apenas, para compilar e executar o programa.\n"
	@echo "| <prog>   compila linka mas não o executa."
	@echo "| <main>   gera o código objeto do arquivo '"$(MAIN)"'."
	@echo "| <d> compila as bibliotecas para achar error"
	@echo "| <bib>    gera o codigo objeto dos arquivos da pasta '"$(BIBLIOTECAS)"'."
	@echo "| <limpa>  deleta todos os arquivos objetos '*.o'."
	@echo "| <cx>    deleta o arquivo compilado '"$(NOME)"'."
	@echo "| <refaz>  deleta todos os objetos e o arquivo compilado, e chama <prog>."
	@echo "| <ajuda>  chama ajuda."
	@echo "\n\n"

