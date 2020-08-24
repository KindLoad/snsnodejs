#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int ,int> a, pair<int ,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else return a.second < b.second;
}

int main(void){
    cin.tie(nullptr);
    int n;
    scanf("%d", &n);

    vector<pair<int,int>> v;

    for(int i = 0 ; i < n ; i++){
        int tmp1, tmp2;
        scanf("%d %d", &tmp1, &tmp2);

        v.push_back({tmp1, tmp2});
    }
    sort(v.begin(), v.end(),compare);

    int cnt = 1 , end = v[0].second;

    for(int i = 1 ; i < n ; i++){
        if(end <= v[i].first){
            cnt++;
            end = v[i].second;
        }
    }

    printf("%d\n", cnt);

    return 0;
}