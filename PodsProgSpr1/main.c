#include <stdio.h>

void zad1(){
    printf("Zadanie 1\n");
    int n = 76;
    printf("Ustalona liczba(76), w formacie int, wyswietlona w formacie float z jednym i trzema miejscami po przecinku oraz w formacie napisowym:\n%.1f\n%.3f\n%c\n", (float )n, (float)n, (char)n);
}

void zad2(){
    int a;
    printf("Zadanie 2\nPodaj kod ASCII aby otrzymac znak\n");
    scanf("%d", &a);
    if(a<0||a>255){
        do {
            printf("Kody ASCII przyjmuja jedynie wartosci 0-255. Podaj odpowiednia wartosc\n");
            scanf("%d", &a);
        } while(a<0||a>255);
    }
    char ascii = (char)a;
    printf("Twoj znak to: %c\n", ascii);
}

void zad3(){
    float m, h;
    printf("Zadanie 3: obliczanie BMI\nPodaj swoja wage[kg] oraz wzrost[cm] wedlug wzoru: masa, wzrost\n");
    scanf("%f, %f", &m, &h);
    if(m <= 0 || h<=0){
        do {
            printf("Nie mozna wazyc 0 badz mniej kilo, ani miec 0 lub mniej centymetrow wzrostu. Podaj poprawna wage[kg] oraz wzrost[cm]\n");
            scanf("%f, %f", &m, &h);
        }while(m <= 0 || h<=0);
    }
    h = h/100;
    h*=h;
    float bmi = m/h;
    printf("Twoje BMI wynosi: %.2f\n", bmi);
}

void zad4(){
    printf("Zadanie 4\nPodaj swoj wiek w latach, aby otrzymac jego wartosc w sekundach\n");
    int lata;
    scanf("%d", &lata);
    if(lata<=0){
        do {
            printf("Podaj NORMALNA ilosc lat(wieksza od zera)\n");
            scanf("%d", &lata);
        } while(lata<=0);
    }
    float lata_pom = lata*3.156;
    int notacja = 7;
    if(lata_pom>=10){
        do {
            lata_pom/=10;
            notacja+=1;
        }while(lata_pom>=10);
    }
    printf("Twoj wiek w sekundach, wyrazony w notacji wykladniczej, to:\n%f*10^%d\n", lata_pom, notacja);
}

int main() {
    zad1();
    zad2();
    zad3();
    zad4();
    return 0;
}
