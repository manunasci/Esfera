#include <stdio.h>

int main(){

double raio, pi, volume;
pi = 3.14159;

scanf("%lf", &raio);

volume = (4/3.0)*pi*raio*raio*raio;

printf("VOLUNE = %.3lf\n", volume);

return 0;

}
