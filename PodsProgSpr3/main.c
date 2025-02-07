#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zad1(){
    printf("Zadanie 1\n");
    int rows;
    int num = 1;
    printf("Podaj ilosc wierszy ktorej chcesz uzyc do utworzenia wzoru;\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", num);
            num+=1;
        }
        printf("\n");
    }
}

void zad2(){
    printf("Zadanie 2\n");
    int n;
    int i=1;
    printf("Podaj liczbe, a ja wypisze wszystkie nieparzyste liczby z zakresu 1:[twoja liczba]\n");
    scanf("%d", &n);
    while (i<=n){
        if(i%2!=0){
            printf("%d ", i);
        }
        i+=1;
    }
    printf("\n");
}

void zad3(){
    printf("Zadanie 3\n");
    int kod = 32;
    int col = 16;
    char ascii;
    for (int i = 1; i <= 14; i++) {
        for (int j = 1; j <= col; ++j) {
            ascii=(char)kod;
            printf("%c ", ascii);
            kod+=1;
        }
        printf("\n");
    }

}

void zad4(){
    int r;
    srand(time(NULL));
    printf("Zadanie 4\n");
    do {
        r = ( rand()%6)+1;
        printf("%d ", r);
    } while (r!=6);
}

int main() {
    zad1();
    zad2();
    zad3();
    zad4();
    return 0;
}
