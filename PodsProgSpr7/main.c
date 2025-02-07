#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void skracaj(char* napis, int rozmiar) {
    if (strlen(napis) > rozmiar) {
        napis[rozmiar] = 0;
    }
    puts(napis);
}

int znajduje_sie_w(char znak, char* lancuch) {
    for (int i = 0; i < strlen(lancuch); i++) {
        if (lancuch[i] == znak) {
            return 1;
        }
    }
    return 0;
}

void sklej(char *a, char *b){
    while (*a)
        a++;
    while (*b)
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

int zlicz_wystapienia(char* tekst, int* litery, int *cyfry)
{
    int i, j;

    for(i = 0; i < 26; i++)
        litery[i] = 0;

    for(j = 0; j < 10; j++)
        cyfry[j] = 0;

    for(i = 0; i < strlen(tekst); i++)
    {
        if(tekst[i] >= 'a' && tekst[i] <= 'z')
            litery[tekst[i] - 'a']++;
        else if(tekst[i] >= '0' && tekst[i] <= '9')
            cyfry[tekst[i] - '0']++;
    }

    return 0;
}

int zlicz_wystapienie_znaku(int* litery, int *cyfry, char znak)
{
    if(znak >= 'a' && znak <= 'z')
        return litery[znak - 'a'];
    else if(znak >= '0' && znak <= '9')
        return cyfry[znak - '0'];

    return -1;
}

int main() {
    char napis[100], rozm[3];
    int rozmiar;
    puts("Zadanie 1\nPodaj napis");
    gets(napis);
    puts("Podaj rozmiar, do jakiego chcesz go skrocic");
    fgets(rozm, 3, stdin);
    rozmiar = strtol(rozm, NULL, 0);
    skracaj(napis, rozmiar);
    char lancuch[100];
    char znak;
    printf("Zadanie 2\nPodaj lancuch:\n");
    scanf("%s", lancuch);
    for (int i = 0; i < strlen(lancuch); i++) {
        printf("Podaj znak:\n");
        scanf(" %c", &znak);
        if (znajduje_sie_w(znak, lancuch)) {
            printf("Znak %c znajduje sie w lancuchu.\n", znak);
        } else {
            printf("Znak %c nie znajduje sie w lancuchu.\n", znak);
        }
    }
    printf("Zadanie 3\n");
    char a[6] = "abc";
    char b[6] = "def";
    sklej(a, b);
    printf("Funkcja sklej: %s\n", a);
    strcat(a, b);
    printf("Funkcja strcat: %s\n", a);
    printf("Zadanie 4\n");
    char napis2[20] = "ala ma 10 kotkow";
    int cyfry[50];
    int litery[50];
    char znak2 = 'k';
    zlicz_wystapienia(napis2, litery, cyfry);
    printf("Znak %c wystapil w lancuchu \"%s\" %d razy\n",znak2, napis2, zlicz_wystapienie_znaku(litery, cyfry, znak2));
    return 0;
}
