#include <stdio.h>

int main() {

    int x = 10, y = 5;

    printf("Suma:%d\n", sumar(x, y));
    printf("Resta:%d\n", restar(x, y));
    printf("Multiplicacion:%d\n", multiplicar(x, y));


    return 0;
}

// Funcion para sumar dos números
int sumar(int a,int b) {
    return a + b;
}

// Funcion para restar dos números
int restar(int a,int b) {
    return a - b;
}

// Funcion para multiplicar dos números
int multiplicar(int a,int b) {
    return a * b;
}


