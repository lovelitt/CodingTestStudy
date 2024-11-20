#include <iostream>

using namespace std;

int main(){
    int h,w,n,m;
    int h_cnt, h_mod, w_cnt, w_mod;
    cin >> h >> w >> n >> m;

    h_cnt = h/(n+1);
    h_mod = h%(n+1);

    w_cnt = w/(m+1);
    w_mod = w%(m+1);

    if(h_mod){
        h_cnt+=1;
    }

    if(w_mod){
        w_cnt+=1;
    }

    cout << h_cnt*w_cnt<< endl;
}