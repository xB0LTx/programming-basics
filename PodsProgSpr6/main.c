#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zadanie1(){
    int numbers[5], n, i;
    printf("Zadanie 1\nPodaj 5 liczb calkowitych, a program wyswietli je w odwrotnej kolejnosci\n");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &n);
        numbers[i]=n;
    }
    for (i = 4; i > 0 ; --i) {
        printf("%d, ", numbers[i]);
    }
    printf("%d\n", numbers[0]);
}

void zadanie2() {
    int matrix[3][3];
    int num, col = 3, row = 3;
    printf("Zadanie 2\nPodaj liczby do utworzenia macierzy. Liczby beda dodawane rzedami(najpierw wypelniony zostaje pierwszy rzad trzema liczbami itd.)\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &num);
            matrix[i][j] = num;
        }
    }
    printf("Twoja macierz\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void zadanie3(){
    int a, b;
    printf("Zadanie 3\nPodaj pierwsza liczbe\n");
    scanf("%d", &a);
    printf("Podaj druga liczbe\n");
    scanf("%d", &b);
    int *wsk_a = &a;
    int *wsk_b = &b;
    int wsk_c = *wsk_a + *wsk_b;
    printf("Wynik dodawania dwoch liczb to: %d\n", wsk_c);
}

void zadanie4(){
    int tab[10] = {25, 7, 16, 3, 44, 9, 17, 11, 28, 21};
    int i, j, temp;
    printf("Zadanie 4\nNieposortowana tablica: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(tab+i));
    }
    printf("\n");
    // Sortowanie bąbelkowe
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10-i-1; j++)
        {
            if (*(tab+j) > *(tab+j+1))
            {
                temp = *(tab+j);
                *(tab+j) = *(tab+j+1);
                *(tab+j+1) = temp;
            }
        }
    }
    printf("Posortowana tablica: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

//Funkcja wypełniająca tablice zmiennoprzecinkową liczbami losowymi z zakresu 0 - 1
void fill_float_array(float *array, int array_size){
    srand(time(NULL));
    for(int i = 0; i < array_size; i++){
        array[i] = (float)rand()/(float)(RAND_MAX);
    }
}

//Funkcja wypełniająca tablice całkowitą liczbami losowymi z zakresu 0 - 100
void fill_int_array(int *array, int array_size){
    srand(time(NULL));
    for(int i = 0; i < array_size; i++){
        array[i] = rand() % (101 - 0);
    }
}

//Funkcja sumująca wszystkie liczby z tablicy
float sum_float_array(float *array, int array_size){
    float sum = 0;
    for(int i = 0; i < array_size; i++){
        sum += *(array+i);
    }
    return sum;
}

int sum_int_array(int *array, int array_size){
    int sum = 0;
    for(int i = 0; i < array_size; i++){
        sum += *(array+i);
    }
    return sum;
}

//Funkcja wyświetlająca wszystkie elementy tablicy
void print_float_array(float *array, int array_size){
    for(int i = 0; i < array_size; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

void print_int_array(int *array, int array_size){
    for(int i = 0; i < array_size; i++){
        printf("%d ", *(array+i));
    }
    printf("\n");
}

//Funkcja wyświetlająca 5 i 10 element tablicy
void print_float_array_elements(float *array){
    printf("%.2f\n", *(array+4));
    printf("%.2f\n", *(array+9));
}

void print_int_array_elements(int *array){
    printf("%d\n", *(array+4));
    printf("%d\n", *(array+9));
}


//Funkcja znajdująca największą i najmniejszą wartość z dwóch pobranych elementów
void min_max_float_elements(float *array){
    float min, max;
    if(*(array+4) > *(array+9)){
        max = *(array+4);
        min = *(array+9);
    }
    else{
        max = *(array+9);
        min = *(array+4);
    }
    printf("Max: %.2f\n", max);
    printf("Min: %.2f\n", min);
}
void min_max_int_elements(int *array){
    int min, max;
    if(*(array+4) > *(array+9)){
        max = *(array+4);
        min = *(array+9);
    }
    else{
        max = *(array+9);
        min = *(array+4);
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

int main(){
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    int array_size = 10;
    float float_array[array_size];
    int int_array[array_size];
    fill_float_array(float_array, array_size);
    fill_int_array(int_array, array_size);
    printf("Zadanie 5\nWylosowane liczby calkowite: ");
    print_int_array(int_array, array_size);
    printf("Wylosowane liczby zmiennoprzecinkowe: ");
    print_float_array(float_array, array_size);
    printf("Suma wylosowanych liczb calkowitych: %d\n", sum_int_array(int_array, array_size));
    printf("Suma wylosowanych liczb zmiennoprzecinkowych: %.2f\n", sum_float_array(float_array, array_size));
    printf("5 i 10 element tablicy liczb calkowitych: \n");
    print_int_array_elements(int_array);
    printf("5 i 10 element tablicy zmiennoprzecinkowej: \n");
    print_float_array_elements(float_array);
    printf("Najwieksza i najmniejsza wartosc z pobranych dwoch liczb calkowitych: \n");
    min_max_int_elements(int_array);
    printf("Najwieksza i najmniejsza wartosc z pobranych dwoch liczb zmiennoprzecinkowych: \n");
    min_max_float_elements(float_array);
    return 0;
}