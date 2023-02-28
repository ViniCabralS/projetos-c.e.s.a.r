#include <stdio.h>

int main() {
    int X, Y, Soma;
    Soma = 0;
    scanf("%d", &X);
    scanf("%d", &Y);

  if(X>Y){
      for (Y = Y + 1; Y < X;Y++){
        if(Y%2 !=0){
          Soma = Soma + Y;
        }
        }
    }else{
      for (X = X + 1; X < Y;X++){
        if(X%2 !=0){
          Soma = Soma + X;
        }
        }
    }
  printf("%d\n", Soma);
}
  
  
