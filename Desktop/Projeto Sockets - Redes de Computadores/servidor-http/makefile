#Makefile está sendo utilizado para automatizar a compilação 


# Nome do compilador
CC = gcc

# Nome do executável final
TARGET = build/servidor.exe

# Arquivo-fonte
SRC = src/main.c

# Diretórios de inclusão (se houver)
INCLUDES =

# Bibliotecas a serem linkadas
LIBS = -lws2_32

# Flags de compilação (opcional)
CFLAGS =

# Regra padrão
all:
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(INCLUDES) $(LIBS)

# Limpa o executável (opcional)
clean:
	del /Q build\*.exe

