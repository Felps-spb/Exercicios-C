
#include <stdio.h>

int
main ()
{

  int n1, centena, dezena, unidade, numeroinvertido;

  printf ("\t Numero invertido de 3 digitos \n");

  printf ("Digite um numero: \n");
  scanf ("%d", &n1);

  centena = n1 / 100;

  dezena = (n1 % 100) / 10;

  unidade = n1 % 10;

  numeroinvertido = unidade * 100 + dezena * 10 + centena;

  printf ("Seu numero invertido fica:\n");
  printf ("%d", numeroinvertido);




  return 0;
}

