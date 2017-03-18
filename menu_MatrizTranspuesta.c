#include<stdio.h>
#include<stdlib.h>
float matriz[100][100];
float matrizTranspuesta[100][100];
int renglones,columnas,transpuestaOk,matrizOk,renglonesT,columnasT;
void capturar();
void imprimir();
void transpuesta();
void salir();

int main(){
  int opcion;
  do{
    printf("=========================================================\n");
    printf("1. Capturar Matriz.\n");
    printf("2. Imprimir Matriz.\n");
    printf("3. Calcular Transpuesta.\n");
    printf("4. Salir\n");
    printf("\n\nProporcione el numero de la opcion deseada: ");
    scanf("%d",&opcion);
    system("cls");
    switch (opcion) {
      case 1: capturar();
      break;
      case 2: imprimir();
      break;
      case 3: transpuesta();
      break;
      case 4:
      break;
      default: printf("Opcion no valida. Intente otra vez\n\n");
      break;
    }
  }
  while(opcion!=4);
}

void capturar(){
  int i,j;
  printf("Proporcione el numero de renglones: ");
  scanf("%d",&renglones);
  printf("Proporcione el numero de columnas: ");
  scanf("%d",&columnas);
  for(i=0;i<renglones;i++)
    for(j=0;j<columnas;j++){
      printf("\nProporcione el valor de la matriz en la posicion [%d][%d]: ",i+1,j+1);
      scanf("%f",&matriz[i][j]);
    }
    matrizOk=1;
}

void imprimir(){
  int i,j;
  int impresion;
  if(matrizOk){
    if(transpuestaOk){
      printf("Matriz Original:\n");
      for(i=0;i<renglones;i++)
        for(j=0;j<columnas;j++){
          printf(" %.2f  ",matriz[i][j]);
          if(j==columnas-1)
            printf("\n\n");
        }
        printf("\n\nMatriz Transpuesta:\n");
        for(i=0;i<renglonesT;i++){
          for(j=0;j<columnasT;j++){
            printf("%3.2f\t",matrizTranspuesta[i][j]);
          }
          printf("\n\n");
        }
    }
    else{
      for(i=0;i<renglones;i++)
        for(j=0;j<columnas;j++){
          printf(" %.2f  ",matriz[i][j]);
          if(j==columnas-1)
            printf("\n\n");
        }
    }
  }
  else
    printf("\nAntes imprimir, capture una matriz primero.\n");
}

void transpuesta(){
int i,j;
renglonesT=columnas;
columnasT=renglones;
if(matrizOk){
  for(i=0;i<renglonesT;i++)
    for(j=0;j<columnasT;j++){
      matrizTranspuesta[i][j]=matriz[j][i];
    }
  transpuestaOk=1;
  printf("\nTranspuesta calculada con exito\n");
}
else printf("\nAntes de calcular Transpuesta, capture una matriz primero.\n");
}
