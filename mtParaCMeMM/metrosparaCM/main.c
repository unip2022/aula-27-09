#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metro, cm, mm;

    printf("Este programa transforma metros em centimetros e milimetros.\n"
       "Digite um valor para metros: ");
   scanf("%f", &metro);
   cm=(metro*100);
   mm=(metro*1000);
   system("cls || clear");
   printf("%.2f metro(s) é equivalente a %.2f em centimetros e %.2f em milimetros.\n\n\n", metro, cm, mm);

    return 0;
}
