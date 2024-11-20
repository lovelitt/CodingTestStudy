#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int round_num=0;
    int start_num=1;
    int end_num=start_num+round_num*6;

    while(n > end_num){
        round_num++;
        end_num+=round_num*6;
    }

    cout << round_num + 1 << endl;
}