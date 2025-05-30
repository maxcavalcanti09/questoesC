#include <stdio.h>

int main() {
  float preco, preco_inflacionado;

  printf("Digite o preço do produto: ");
  scanf("%f", &preco);

  if (preco < 100) {
    preco_inflacionado = preco * 1.10; 
  } else {
    preco_inflacionado = preco * 1.20; 
  }

  printf("O preço inflacionado é: %.2f\n", preco_inflacionado);

  return 0;
}
