#include <stdio.h>
int main(){
int n;
long int factorial (int n);

printf("\n Introduce un número entero: ");
scanf("%d", &n);

printf("%d! = %d\n", n, factorial(n));
}

 /* Calcular el factorial */
long int factorial (int n){

if (n <= 1)
return(1);
else
return(n * factorial (n-1));
}
 