/* Problema "matriz_geral"
 Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
 Em seguida, fazer as seguintes ações:
  a) calcular e imprimir a soma de todos os elementos positivos da matriz.
  b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
  c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
  d) imprimir os elementos da diagonal principal da matriz.
  e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
     a matriz alterada.
*/

#include <iomanip>
#include <iostream>

using namespace std;

const short MIN_SIZE = 1;
const short MAX_SIZE = 10;

int readSize()
{
  int d;
  cout << "Qual a ordem da matriz (máximo de " << MAX_SIZE << ")? ";

  cin >> d;

  return d < MIN_SIZE || d > MAX_SIZE ? MAX_SIZE : d;
}

int main()
{
  int row, column;
  int n = readSize();

  double matrix[n][n];
  double positiveSummation = 0.0;

  cout << fixed << setprecision(1);

  // digitando a matriz
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Elemento [" << i << ", " << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  // calculando e imprimindo o somatório de todos os elementos da matriz
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] > 0)
        positiveSummation += matrix[i][j];
    }
  }

  cout << "\n\nSOMA DOS POSITIVOS: " << positiveSummation << endl;

  // escolhendo e imprimindo uma linha
  cout << "\n\nEscolha uma linha (base 0): ";
  cin >> row;

  row = row < 0 || row >= n ? 0 : row;

  cout << "LINHA ESCOLHIDA (" << row << "): ";
  for (int j = 0; j < n; j++)
  {
    cout << matrix[row][j] << " ";
  }

  // escolhendo e imprimindo uma coluna
  cout << "\n\nEscolha uma coluna (base 0): ";
  cin >> column;

  column = column < 0 || column >= n ? 0 : column;

  cout << "COLUNA ESCOLHIDA (" << column << "): ";
  for (int i = 0; i < n; i++)
  {
    cout << matrix[i][column] << " ";
  }

  // imprimindo a diagonal principal
  cout << "\n\nDIAGONAL PRINCIPAL: ";
  for (int i = 0; i < n; i++)
  {
    cout << matrix[i][i] << " ";
  }

  // alterando os elementos negativos para o quadrado
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] < 0)
        matrix[i][j] *= matrix[i][j];
    }
  }

  // imprimindo a matriz alterada
  cout << "\n\nMATRIZ ALTERADA: \n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
