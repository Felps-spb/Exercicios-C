#include <stdio.h>

int main() {
  int i, j, n = 5;
  float S = 0.0, fat = 1.0;

  // Cálculo da série
  for (i = 0; i < n; i++) {
    fat = 1.0;
    for (j = 1; j <= (2 * i + 1); j++) {
      fat *= j;
    }
    S += (float)(i) / fat;
  }

  // Exibição do resultado
  printf("O valor da serie com %d termos eh: %.6f\n", n, S);

  return 0;
}