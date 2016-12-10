#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

typedef struct {int first, second;}pairi;
typedef struct {float first, second;}pairf;
typedef struct {char first, second;}pairc;
typedef struct {int first;char second;}pairic;
typedef struct {float first;char second;}pairfc;

#define salida(type, x) printf(#x"=%"#type, x)
#define FOR(i, x) for(i=0;i<x;i++)

int main(){
	int h1, m1, h2, m2;
	int htotal1, htotal2;
	htotal1 = htotal2 = 0;
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)){
		if(!h1 && !m1 && !h2 && !m2) break;
		htotal1 = h1*60+m1;
		htotal2 = h2*60+m2;
		if(htotal2 < htotal1) htotal2 += 60*24;
		printf("%d\n", htotal2-htotal1);
	}
	return 0;
}
