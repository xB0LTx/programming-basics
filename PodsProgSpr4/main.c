#include <stdio.h>
#include <string.h>

void zadanie1(){
    printf("Zadanie 1\nWpisz zdanie, a program policzy ilosc slow i spacji. Slowa musisz wpisywac po kolei, a kazde nowo podane slowo bedzie automatycznie poprzedzone spacja\n");
    int licznik_slow = 0, licznik_znakow = 0, test;
    do{
        printf("Podaj slowo\n");
        char c[20] = "\0";
        scanf("%s", c);
        licznik_slow+=1;
        licznik_znakow= licznik_znakow+strlen(c)+1;
        printf("Czy chcesz dalej pisac?(1-tak, 0-nie)\n");
        scanf("%d", &test);
    } while(test == 1);
    licznik_znakow-=1;
    printf("Ilosc slow:\n%d\nIlosc znakow:\n%d\n", licznik_slow, licznik_znakow);
}

void zadanie2(){
    printf("Zadanie 2\nPodaj ilosc przepracowanych w tygodniu godzin, a program obliczy wynagrodzenie\n");
    float brutto = 0, netto = 0, podatek = 0, godziny = 0;
    scanf("%f", &godziny);
    if(godziny>40){
        float nadgodziny = godziny-40;
        brutto = 40*(godziny-nadgodziny)+60*nadgodziny;
    } else{
        brutto=40*godziny;
    }
    if (brutto<=1200){
        podatek = brutto*0.15;
        netto = brutto - podatek;
    } else if(brutto>1200 && brutto <=1800){
        podatek =1200*0.15+(brutto-1200)*0.2;
        netto = brutto-podatek;
    } else if(brutto>1800){
        podatek =1200*0.15+600*0.2+(brutto-1800)*0.25;
        netto = brutto-podatek;
    }
    printf("Wynagrodzenie brutto:\n%.2f\nPodatek:\n%.2f\nWynagrodzenie netto\n%.2f", brutto, podatek, netto);
}

int main() {
    zadanie1();
    zadanie2();
    return 0;
}
