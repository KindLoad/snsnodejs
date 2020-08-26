#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(void){
   int n, k;
   int answer = 0;
   scanf("%d %d", &n, &k);
   vector<int> coin;

   for(int i = 0 ; i < n ; i++){
      int temp;
      scanf("%d", &temp);

      coin.push_back(temp);
   }

   sort(coin.begin(),coin.end());

   for(int i = n-1 ; 0 <= i ; i--){
      printf("%d\n", k);
      if(coin[i] <= k){
         answer += k/coin[i];
         k %= coin[i];
      }
   }

   printf("%d", answer);
} 