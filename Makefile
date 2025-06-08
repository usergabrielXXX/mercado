CC = g++
CFLGAS = -Wreturn-type -Wnull-dereference -Wuninitialized -O -Wunused-function -Wpedantic -Wunused-variable -fsanitize=address -g -O3 -Wall -Wextra -std=c++20

tt:
	$(CC) $(CFLGAS) main.cpp -o mercado
clean:
	rm -f tt