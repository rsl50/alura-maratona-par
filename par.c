#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define LINE_SIZE	100
#define IS_VALID(val) ((val >= 0 && val <= 5) ? true : false)

int main () {
	FILE *fp;
	fp = freopen("input1.txt", "r", stdin);
	
	char buf[LINE_SIZE];
	memset(buf, 0, LINE_SIZE);
	
	if (fp == NULL) {
		printf("Erro ao abrir arquivo");
		return (-1);
	} else {
		int t = 1;
		
		while (fgets(buf, LINE_SIZE, fp) != NULL) {
			int partidas = strtol(buf, NULL, 10);
			
			if (partidas == 0) break;
			
			if (partidas <= 1000) {
				char nomeJogador1[10];
				char nomeJogador2[10];
							
				fgets(buf, LINE_SIZE, fp);
				buf[strlen(buf) - 1] = 0;
				strncpy(nomeJogador1, buf, 10);
										
				fgets(buf, LINE_SIZE, fp);
				buf[strlen(buf) - 1] = 0;
				strncpy(nomeJogador2, buf, 10);
				
				int i;
				printf("Teste %d", t++);
				for (i = 1; i <= partidas; i++)
				{
					fgets(buf, sizeof(buf), fp);
					int somaJogada = buf[0] + buf[2];
					
					if (somaJogada % 2 == 0) {
						printf("\n%s", nomeJogador1);
					} else {
						printf("\n%s", nomeJogador2);
					}
				}
				printf("\n\n");
			}
			
			
		}
	}
	
	fclose(fp);

    return (0);
}
