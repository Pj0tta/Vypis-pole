#include <stdio.h>
#define POCET 10

int main()
//int cisla[] = { 3, 28, 7, 69 };

//for (int i = 0; i < 4; i++) {
//	printf("index: %d, hodnota: %d\n", i, cisla[i]);
//}

{
	int cisla[] = { 3, 28, 7, 69 };

	for (int i = 0; i < sizeof(cisla) / sizeof(int); i++) {
		printf("index: %d, hodnota: %d\n", i, cisla[i]);
	}

	int nahodna[POCET], min = 2147483647, max = 0;
	long int soucet = 0;
	srand(time(0));
	//v�pis n�hodn�ch hodnot pole
	for (int i = 0; i < POCET; i++) {
		nahodna[i] = rand() % 101;
		printf("%d ", nahodna[i]);
		soucet += nahodna[i];
		if (nahodna[i] < min) min = nahodna[i];
		if (nahodna[i] > max) max = nahodna[i];

	}
	printf("\n");
	printf("soucet: %d, prumer: %f\n", soucet, (float) soucet / POCET);
	printf("min: %d, max: %d\n", min, max);

	//v�pis n�hodn�ch hodnot pole pozp�tku
	for (int i = POCET - 1; i >= 0; i--) {
		printf("%d ", nahodna[i]);
	}
	printf("\n");

}

