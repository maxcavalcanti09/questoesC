#include <stdio.h>
int main() {
  float fahrenheit, celsius;
  printf(" informe um valor em Fahrenheit: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;;
  printf("A temperatura em Celsius é: %.2f\n", celsius);

  return 0;
}
