/*
  Angel Odiel Treviño Villanueva
  A01336559
  Examen Pratrico: Problema 3 Fecha: 4/Mayo Materia: Analisis y Diseño de Algoritmos
*/

#include <iostream>

#define N 100

using namespace std;

int Solucion(int iMat[N][N], int n, int m){
  int Sum = iMat[0][0]; //empezar en 0, 0
  int i = 0, j = 0;
  while(i < n || j < n){ //hasta llegar hasta la esquina
      int SumX = 0;
      int SumY = 0;
      for(int x = i, y = j; x < n || y < m; x++, y++){ //hacemos la suma de sus ejes
        if(x < n){
          SumX = SumX + iMat[x][j];
        }
        if(y < m){
          SumY = SumY + iMat[i][y];
        }
      }

      if(SumX >= SumY){ //Checamos que eje es mejor para irse
        i++;
        Sum = Sum + iMat[i][j];
      }else{
        j++;
        Sum = Sum + iMat[i][j];
      }
  }
  return Sum; //regresar ka suma
}


int main(){

  int n, m;//nxm
  int iMat[N][N];//matriz

  cin >> n >> m;

  //llenar la matriz
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> iMat[i][j];
    }
  }

  cout << Solucion(iMat, n, m) << endl;

  return 0;
}

/* pruebas

1 caso:
3 5
1 2 1 1 3
2 10 2 2 3
1 1 0 1 3

Respuesta 23

2 caso:
3 4
163 141 752 620
672 91 899 120
50 974 456 297

Respuesta:
2708
*/
