#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int> v;
    int n;
    scanf("%d", &n);
    
    for(int i = 0 ; i < n ; i++){
        long long temp;
        scanf("%d", &temp);

        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    long long max = v[n-1];

    for(long long i = 2 ; i < max ; i++){
        bool check = true;
        long long namuji = v[0]%i;
        for(int j = 0 ; j < n; j++){
            if(v[j]%i != namuji){
                check = false;
                break;
            }
        }
        if(check == true){
            printf("%lld ", i);
        }
    }
    return 0;
}