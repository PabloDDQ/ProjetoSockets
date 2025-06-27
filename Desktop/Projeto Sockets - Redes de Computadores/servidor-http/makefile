CC = gcc
CFLAGS = -Wall
LDFLAGS = -lws2_32
BUILD_DIR = build
SRC_DIR = src

all: servidor cliente

servidor: $(SRC_DIR)/servidor.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/servidor.exe $< $(LDFLAGS)

cliente: $(SRC_DIR)/cliente.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/cliente.exe $< $(LDFLAGS)

clean:
	del /Q $(BUILD_DIR)\*.exe

.PHONY: all clean
