#include <stdio.h>
#include <math.h>

void zad1() {
    printf("Zadanie 1.\nWprowadz 4 liczby rzeczywiste\n");
    float a;
    int i = 0, dod = 0, uje = 0;
    do {
        printf("Podaj liczbe rzeczywista:\n");
        scanf("%f", &a);
        if (a >= 0){
            dod++;
        }else uje++;
        i++;
    }while (i<4);
    if (dod>uje){
        printf("Wprowadzono wiecej liczb dodatnich\n");
    } else if(dod == uje){
        printf("Wprowadzono tyle samo liczb dodatnich i ujemnych\n");
    }else (printf("Wprowadzono wiecej liczb ujemnych\n"));
}

void zad2(){
    int n;
    printf("Zadanie 2.\nWprowadz liczbe n aby uzyskac wartosc bezwzgledna\n");
    scanf("%d", &n);
    if (n<0){
        n=n*-1;
    }
    printf("Wartosc bezwzgledna z n: %d\n", n);
}

void zad3(){
    float x, y;
    printf("Zadanie 3.\nPodaj y aby otrzymac x\n");
    scanf("%f", &y);
    if (y<0){
        x=-y;
    } else{
        x=y;
    }
    printf("%f\n",x);
}

void zad4(){
    printf("Zadanie 4. Kalkulator\n");
    float x, y, dzialanie;
    char z;
    printf("Podaj dwie liczby rzeczywiste oraz operacje, ktora chcesz na nich wykonac(znak) wedlug wzoru: liczba, liczba, znak\n");
    scanf("%f, %f, %c", &x, &y, &z);
    switch (z) {
        case '+':
            dzialanie=x+y;
            printf("Twoje dzialanie %f %c %f = %f\n", x, z, y, dzialanie);
            break;
        case '-':
            dzialanie=x-y;
            printf("Twoje dzialanie %f %c %f = %f\n", x, z, y, dzialanie);
            break;
        case '*':
            dzialanie=x*y;
            printf("Twoje dzialanie %f %c %f = %f\n", x, z, y, dzialanie);
            break;
        case '/':
            if(y==0){
                printf("Nie moge wykonac dzielenia\n");
                break;
            } else{
                dzialanie=x/y;
                printf("Twoje dzialanie %f %c %f = %f\n", x, z, y, dzialanie);
                break;
            }
        default:
            printf("Niepoprawne dane");
            break;
    }
}

void zad5(){
    char fig;
    printf("Zadanie 5\nPodaj jakiej figury geometrycznej pole chcesz obliczyc(k - kwadrat, p - prostokat, t - trojkat)\n");
    scanf("%c", &fig);
    float a, b, c;
    while(fig!='k' && fig!='p' && fig!='t'){
        printf("Podaj poprawny symbol\n");
        scanf("%c", &fig);
    }
    if (fig == 'k'){
        printf("Podaj dlugosc boku kwadratu\n");
        scanf("%f",&a);
        float kwadrat = pow(a, 2);
        printf("Pole kwadratu wynosi: %f\n", kwadrat);
    }
    if (fig == 'p'){
        printf("Podaj dlugosc bokow prostokata\n");
        scanf("%f, %f", &a, &b);
        float prostokat = a*b;
        printf("Pole prostokatu wynosi: %f\n", prostokat);
    }
    if (fig == 't'){
        float najw, mniej;
        printf("Podaj dlugosc bokow trojkata\n");
        scanf("%f, %f, %f", &a, &b, &c);
        if (a > b && a > c){
            najw = a;
            mniej = b+c;
        } else if (b > a && b > c){
            najw = b;
            mniej = a+c;
        } else {
            najw = c;
            mniej = a+b;
        }
        if (najw < mniej){
            float obwod = a+b+c;
            float pole = pow(0.5*obwod*(0.5*obwod-a)*(0.5*obwod-b)*(0.5*obwod-c), 0.5);
            printf("Pole trojkata zlozonego z podanych bokow wynosi: %f\n", pole);
        } else{
            printf("Z podanych bokow nie da sie zlozyc trojkata");
        }

    }
}

int main() {
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    return 0;
}
