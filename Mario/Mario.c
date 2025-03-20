#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    // Solicitar al usuario un numero, y guardarlo en una variable
    int n = get_size();

    // Usar la variable solicitada para construir la piramide
    print_grid(n);
}

// Funcion para ingresar y guardar el tamaño de la piramide
int get_size(void)
{
    int n;
    do
    {
        // Pedimos al usuario que ingrese un numero del 1 al 20, que será el tamaño de la piramide
        printf("Ingrese el tamaño de la piramide (1-20): ");
        scanf("%d", &n);
        // Validamos que el usuario haya ingresado un numero permitido
        if (n < 1 || n > 20)
        {
            printf("(Numero fuera del rango permitido)\n ");
        }
    }
    while (n < 1 || n > 20);
    return n;
}

// Funcion para la impresion de la piramide
void print_grid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Espacios en blanco para hacer la piramide inclinada hacia la derecha
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}