#include<iostream>
   //~[._.]~
using namespace std;

int main()
{
int n;
int m;
std::cout << "Введите n: " << std::endl;
std::cin >> n;
std::cout << "Введите m: " << std::endl;
std::cin >> m;
int a[n][m];
int b[n][m];
int c[n][m];
for (int i = 0; i < n; ++i)
   {
   for (int j = 0; j < m; ++j)
      {
      std::cin >> a[i][j];
      }
   }
std::cout << std::endl;
for (int i = 0; i < n; ++i)
   {
   for (int j = 0; j < m; ++j)
      {
      std::cin >> b[i][j];
      }
   }
std::cout << std::endl;
std::cout << std::endl << "Матрица: " << std::endl;
for (int i = 0; i < n; ++i)
   {
   for (int j = 0; j < m; ++j)
      {
      c[i][j] = a[i][j] + b[i][j];
      std::cout << c[i][j] << " ";
      }
   std::cout << std::endl;
   }
}
