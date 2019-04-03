#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct matriz {
  int nlinha;
  int ncoluna;
  int** mat;
}Matriz;

Matriz* inicializaMatriz (int nlinhas, int ncolunas){
  Matriz *mat = ( Matriz*) malloc (sizeof(Matriz));
  mat -> nlinha = nlinhas;
  mat -> ncoluna = ncolunas;
  mat -> mat = (int**)malloc(nlinhas*sizeof(int*));
  for(int i = 0 ; i < nlinhas; i++){
    mat -> mat[i] = (int*) malloc(ncolunas*sizeof(int));
  }
  return mat;
}

void modificaElemento (Matriz* mat, int linha, int coluna, int elem){

  if((*mat).mat == NULL){
    printf("Matriz nao exite.");
    exit(1);
  }

  if ((*mat).nlinha < linha || (*mat).ncoluna < coluna){
    printf("Linha ou coluna invalida\n");
  } else if (linha < 0 || coluna < 0){
      printf("Linha ou coluna invalida\n");
  }else{
      (*mat).mat[linha][coluna] = elem;
  }


}

int recuperaElemento(Matriz* mat, int linha, int coluna){

  if((*mat).mat == NULL){
    printf("Matriz nao exite.");
    exit(1);
  }
  if ((*mat).nlinha < linha || (*mat).ncoluna < coluna){
    printf("Linha ou coluna invalida\n");
  } else if (linha < 0 || coluna < 0){
      printf("Linha ou coluna invalida\n");
  }

printf("%i\n", (*mat).mat[linha][coluna]);
return (*mat).mat[linha][coluna];
}

int recuperaNColunas (Matriz* mat){
  return 0;
}
int recuperaNLinhas (Matriz* mat){
  return 0;
}

Matriz* transposta (Matriz* mat){
  return 0;
}
Matriz* multiplicacao (Matriz* mat1, Matriz* mat2){
 return NULL;
}
void imprimeMatriz(Matriz* mat){
  int i, j;
  if((*mat).mat == NULL){
    printf("Matriz nao exite.");
    exit(1);
  }

  for(i = 0; i < (*mat).nlinha; i++){
    for(j = 0; j < (*mat).ncoluna; j++){
      printf("%i ", (*mat).mat[i][j]);
    }
    printf("\n");
  }
}
void destroiMatriz(Matriz* mat){

}

void giraMatriz(Matriz* mat){

}
