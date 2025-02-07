#include <stdio.h>
#include <stdlib.h>

int* tablica_wykonaj(int elem, int val) {
    int* tab = (int*)malloc(elem * sizeof(int));
    if (tab == NULL) {
        printf("Nie udalo sie przydzielic pamieci\n");
        return NULL;
    }
    int i;
    for (i = 0; i < elem; i++) {
        tab[i] = val;
    }
    return tab;
}

void wyswietl_tab(const int tab[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    //Zadanie 1
    int n, i;
    int *nums;
    int sum = 0;
    printf("Zadanie 1\nPodaj liczbe elementow: \n");
    scanf("%d", &n);
    nums = (int*) malloc(n * sizeof(int));
    if (nums == NULL){
        printf("Nie udalo sie przydzielic pamieci\n");
        return 1;
    }
    printf("Podaj liczby: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    printf("Suma liczb: %d\n", sum);
    free(nums);
    //Zadanie 2
    int* wt;
    int rozmiar;
    int wartosc;
    printf("Zadanie 2\nPodaj liczbe elementow tablicy: \n");
    scanf("%d", &rozmiar);
    while (rozmiar > 0) {
        printf("Podaj wartosc: ");
        scanf("%d", &wartosc);
        wt = tablica_wykonaj(rozmiar, wartosc);
        if (wt) {
            wyswietl_tab(wt, rozmiar);
            free(wt);
        }
        printf("Podaj liczbe elementow (<1 -koniec): ");
        scanf("%d", &rozmiar);
    }
    printf("Dziekuje za uwage.\n");
    //Zadanie 3
    /* 3.1 odp: C
		dlatego, że funkcja fun, w pętli while, sumuje wszystkie liczby z zakresu od 10 do 1 i przypisuje tę
		wartość do zmiennej 'x', która potem zostaje wypisana przez program.
	   3.2 odp: C
		dlatego, że "extern int i" jest jedynie deklaracją, a nie definicją zmiennej.
		Program szuka wartości "i" poza funkcją main, a przez to, że nie jest jej w stanie znaleźć, to wyświetla się błąd
		kompilacji.
	*/
    return 0;
}

