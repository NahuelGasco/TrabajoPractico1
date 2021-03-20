#include <stdio.h>
#include <stdlib.h>
/// Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
int main()
{
    int nota1, nota2, nota3, suma;
    float promedio1;

    printf("Ingrese nota: \n");
    scanf("%d", &nota1);
    printf("Ingrese nota: \n");
    scanf("%d", &nota2);
    printf("Ingrese nota: \n");
    scanf("%d", &nota3);

    suma=nota1+nota2+nota3;
    promedio1=(float)suma/3;

    if (promedio1>=7){
            printf("Aprobado %.1f \n", promedio1);
        }
    else{
        printf("Reprobado %.1f \n", promedio1);
    }

    return 0;
}
