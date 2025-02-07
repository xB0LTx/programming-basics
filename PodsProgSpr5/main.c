#include <stdio.h>
#include <math.h>
#define PI 3.14159265

double min(double x, double y){
    double minimal;
    if (x > y){
        minimal = y;
    } else{
        minimal = x;
    }
    return minimal;
}

double factorial_it(double x){
    double fact=1;
    if (x>1){
        for (int i = 1; i <= x; ++i) {
            fact*=i;
        }
    }
    printf("Silnia obliczona interacyjnie z %lf wynosi: %lf\n", x, fact);
}

double factorial_rec(double x, double factori){
    if(x==0){
        return factori;
    } else{
        factori*=x;
        x--;
        if (x>0){
            factorial_rec(x, factori);
        } else{
            return factori;
        }
    }
}
int zadanie3comm() {
    int n;
    printf("Podaj liczbe dziesietna calkowita: \n");
    scanf("%d", &n);
    if(n<=0) {
        printf("Nie podano liczby lub podano liczbe mniejsza od zera\n");
        return 0;
    } else return n;
}

void zadanie3calc(int n) {
    int bin = 0, rem, miejsce = 1,dec;
    dec = n;
    while (n != 0) {
        rem = n % 2;
        bin = bin + (rem * miejsce);
        n = n / 2;
        miejsce = miejsce * 10;
    }
    printf("%d w postaci binarnej to %d\n", dec, bin);
}

void zadanie4(){
    double alfa, sinus, cosinus, tangens;
    printf("Podaj kat alfa, a program obliczy jego sinus, cosinus oraz tangens\n");
    scanf("%lf", &alfa);
    sinus = sin(alfa*(PI/180));
    cosinus = cos(alfa*(PI/180));
    tangens = tan(alfa*(PI/180));
    printf("Wartosci funkcji trygonometrycznych sinus, cosinus oraz tangens dla kata %lf to:\nsinus: %lf\ncosinus: %lf\ntangens: %lf\n", alfa, sinus, cosinus, tangens);
}

int main() {
    double num1, num2;
    printf("Podaj dwie liczby, a program zweryfikuje, ktora z nich jest mniejsza. Zostanie rowniez wyliczona dla nich silnia, sposobem iteracyjnym i rekurencyjnym.\n");
    scanf("%lf%lf", &num1, &num2);
    printf("Mniejsza z dwoch liczb to %lf\n", min(num1, num2));
    factorial_it(num1);
    double factor = 1;
    printf("Silnia obliczona rekurencyjnie z %lf wynosi: %lf\n", num2, factorial_rec(num2, factor));
    zadanie3calc(zadanie3comm());
    zadanie4();
    return 0;
}
