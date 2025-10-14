#include <stdio.h>

int main() {
  int matriz[4][4], x, *p, count=0;
  printf("VALOR DE X: ");
  scanf("%d", &x);
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
  p = &matriz[0][0];
  for(int i=0; i<16; i++){
    if(*p == x){
      count++;
    }
    p++;
  }
  printf("%d repete %d", x, count);
}