#include <stdio.h>
#include <math.h>
int main(){
  float n1, n2, res;
  int op;
  
  printf("Digite o valor de n1: ");
  scanf("%f", &n1);
  printf("Digite o valor de n2: ");
  scanf("%f", &n2);
  printf("\n[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Potência\n");
  printf("Escolha a operação: ");
  scanf("%d", &op);

  switch (op){
    case 1:
      res = n1 + n2;
      break;

    case 2:
      res = n1 - n2;
      break;

    case 3:
      res = n1 * n2;
      break;

    case 4:
      if (n2 == 0){
        printf("Divisão inválida pois o denominador é 0!\n");
        res = 0000;
      }
      else {
        res = n1 / n2;
      }
      break;

    case 5:
      res = pow(n1, n2);
      break;

    default:
      printf("Operação Inválida!\n");
  }
  printf("O resultado foi %0.2f!", res);
  
  return 0;
}
