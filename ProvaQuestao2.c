#include <stdio.h>
#include <stdlib.h>

void *myRealloc(int tamanhoNovo, int tamanhoAntigo, int *x, int *y){
    int i;
    if(tamanhoAntigo > tamanhoNovo){
        for(i=0; i<tamanhoNovo; i++){
            y[i] = x[i];
        }
    } else {
        for(i=0; i<tamanhoAntigo; i++){
            y[i] = x[i];
        }
    }
}

int main(){
  int n, nn, i;
  int *x, *y;
  n = 5;
  nn = 8;

  x = (int*) malloc(n*sizeof(int));

  for(i=0; i<n; i++){
    x[i] = 10 + rand()%100;
    printf("%d ", x[i]);
  }
  printf("\n");
  y = (int*) malloc(nn*sizeof(int));
  myRealloc(nn, n, x, y);
  for(i=0; i<nn; i++){
    printf("%d ", y[i]);
  }
  printf("\n \n");
  free(x);
  free(y);
}
