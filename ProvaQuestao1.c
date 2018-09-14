#include  <stdio.h>
#include  <stdlib.h>
float*  transposta(float  *x,  int  nlinhas,  int  ncolunas){
        int i, j;
        float *m;
        m  =  (float*)  malloc(nlinhas*ncolunas*sizeof(float));
        for(i=0;  i<nlinhas;  i++){
            for(j=0;  j<ncolunas;  j++){
               m[j*ncolunas+i]=x[i*ncolunas+j];
            }
        }
        return m;
}
int  main(void){
    float  *x,  *y;
    int  nlin,  ncol,  i,  j;
    nlin  =  3;
    ncol  =  4;
    x  =  (float*)  malloc(nlin*ncol*sizeof(float));
    for(i=0;  i<nlin;  i++){
        for(j=0;  j<ncol;  j++){
            x[i*ncol+j]=rand()%30;
        }
    }
    for(i=0;  i<nlin;  i++){
        for(j=0;  j<ncol;  j++){
            printf("%2.0f  ",x[i*ncol+j]);
        }
        printf("\n");
    }
    printf("\n");
    y  =  transposta(x,nlin,ncol);
    printf("%p\n",y);
    for(i=0;  i<ncol;  i++){
        for(j=0;  j<nlin;  j++){
            printf("%2.0f  ",y[i*nlin+j]);
        }
        printf("\n");
    }
}
