#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define LINE_SIZE	100
#define IS_VALID(val) ((val >= 0 && val <= 5) ? true : false)

int main () {
	
	int partidas = 0;
	int i = 1;
	int t = 1;
	
	scanf("%d", &partidas);
	while (partidas != 0) {	
		char nomeJogador1[10];
		char nomeJogador2[10];	
			
		scanf("%s", nomeJogador1);
		scanf("%s", nomeJogador2);
		
		printf("Teste %d\n", t++);
		for (i = 1; i <= partidas; i++) {
			int a, b;
			scanf("%d %d", &a, &b);
			
			if ((a + b) % 2 == 0) {
				printf("\n%s", nomeJogador1);
			} else {
				printf("\n%s", nomeJogador2);
			}
		}
		printf("\n");
		scanf("%d", &partidas);
	}
	
    return (0);
}

