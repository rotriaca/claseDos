#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 5

int main()
{
    int max=0;
    int min;
    int i;
    int flag=0;
    float suma;
    float promedio;
    int aux;

    for(i=0; i < MAXNUM; i++)
    {
        do
        {
            printf("Ingrese un numero mayor a 0 \n");
            scanf("%d", &aux);
        }while(aux <= 0);

        if(flag == 0)
        {
            max = aux;
            min = aux;
            flag= 1;
        }
        else if(aux < min)
        {
            min=aux;
        }
        else  if(aux > max)
        {
            max= aux;
        }
        suma = suma + aux;
    }
    promedio = (suma / MAXNUM);
    printf("El promedio de los numeros es: \n %.2f \n", promedio);
    printf("El numero mayor es %d y el menor es %d \n", max, min);
    return 0;
}
