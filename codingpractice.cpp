#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(void){
   int t;
   scanf("%d", &t);

   for(int i = 0 ; i < t ; i++){
      int m, n, k;
      scanf("%d %d %d", &m, &n, &k);

      int **field = new int*[m];
      for(int j = 0 ; j < m ; j++){
         field[j] = new int[n];
      }

      for(int j = 0 ; j < m ; j++){
         for(int d = 0 ; d < n ; d++){
            field[j][d] = 0;
         }
         printf("\n");
      }

      for(int j = 0 ; j < m ; j++){
         for(int d = 0 ; d < n ; d++){
            printf("%d ", field[j][d]);
         }
         printf("\n");
      }
   }
}