#include <stdio.h>
#include <string.h>
#include <math.h>

struct zbiorka{
    char imie[30];
    char grupa[10];
    char kwota[6];
};

struct kolo{
    int numer;
    char nazwa[40];
    float a;
    float b;
    float r1;
};

int main() {
    int wielkosc_listy;
    printf("Zadanie 1\nPodaj ile osob chcesz dodac do listy\n");
    scanf("%d", &wielkosc_listy);
    struct zbiorka lista[wielkosc_listy];
    printf("Teraz podaj imie, nazwisko i kwote wplacona na zbiorke kazdej osoby\n");
    for (int i = 0; i < wielkosc_listy; ++i) {
        printf("Podaj imie\n");
        scanf("%s", lista[i].imie);
        printf("Podaj grupe\n");
        scanf("%s", lista[i].grupa);
        printf("Podaj wplacona kwote\n");
        scanf("%s", lista[i].kwota);
    }
    printf("Lista osob, ktore wplacily na zbiorke:\n");
    for (int i = 0; i < wielkosc_listy; ++i) {
        printf("Imie: %s, Grupa: %s; kwota %s;\n", lista[i].imie, lista[i].grupa, lista[i].kwota);
    }
    printf("Zadanie 2\nPodaj wspolrzedne a oraz b, jesli twoj punkt znajduje sie w jednym z okregow, zostanie wypisana jego nazwa i pole\n");
    struct kolo tablica_kol[3]={1, "kolo1", 3, 5, 10,
            2, "kolo2", 8, 13, 20,
            3, "kolo3", -15, -13, 5};
    float wspol_a, wspol_b, Pi=3.141592, odl;
    scanf("%f,%f", &wspol_a, &wspol_b);
    for (int i = 0; i < 3; ++i) {
        odl=sqrtf(powf(wspol_a-tablica_kol[i].a, 2)+powf(wspol_b-tablica_kol[i].b,2));
        if (odl<=tablica_kol[i].r1){
            float pole_kola = Pi*tablica_kol[i].r1*tablica_kol[i].r1;
            printf("Podany punkt znajduje sie w kole \"%s\", ktore ma pole rowne %f\n", tablica_kol[i].nazwa, pole_kola);
        }
    }
    return 0;
}