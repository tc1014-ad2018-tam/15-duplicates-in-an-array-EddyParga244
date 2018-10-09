/*
 * Este programa fue realizado como la tarea#15 el 8 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es dado los valores ingresados por el usuario en un arreglo,
 * indicar cuantos de esos valores son duplicados.
 *
 * Fecha: 8 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>
#include <stdbool.h>

//Funcion que indica la cantidad de duplicados que hay en el arreglo
int duplicado(int numero[],int n){
  int cont=0;

  //Cada vez que el primer ciclo For cuente, asigna el valor booleano falso
  // a la variable b y ejecuta el segundo ciclo For.
  for(int i=0;i<n;i++){
    bool b=false;
    //El segundo ciclo For se ejecuta si la variable j es menor que n (el tamaño del arreglo)
    // y que NO sea el valor de b, por lo que compara si el elemento i en el arreglo y el elemento j
    // en el arreglo son iguales, si es verdadera la comparacion,por lo que aumenta la variable cont en 1
    // (que establece que hay un numero duplicado) y establece el valor de b en verdadero.
    for(int j=i+1;j<n&&!b;++j){
      if(numero[i]==numero[j]){
      ++cont;
      b=true;
      }
    }
    //Por lo que al volver a ejecutar el primer ciclo, este establece a b en falso.
  }
  return cont;
}

int main(void) {
  //Declaracion de variable que determina el tamaño del arreglo
  int n;
  printf("Define el tamaño del arreglo: ");
  scanf("%i", &n);

  //Declaracion del arreglo
  int numero[n];

  printf("Escribe %i numeros\n", n);

  //Ciclo que se encarga de indicar al usuario que escriba los elementos
  // que van dentro del arreglo.
  for(int i=0;i<n;i++){
      printf("Escribe el numero %d:", i);
      scanf("%d",&numero[i]);
  }

  //Se imprime la cantidad de duplicados por medio de una llamada a la funcion duplicado
  printf("La cantidad de duplicados es: %d", duplicado(numero,n));

  return 0;
}