/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{

  int v[5] = { 10, 20, 30, 40, 50 };
  int i;
  float s = 0;

  for (i = 0; i < 5; i++)
	{
	  s += v[i];
	}

  printf ("resultado: %f\n", s / 5);
}
