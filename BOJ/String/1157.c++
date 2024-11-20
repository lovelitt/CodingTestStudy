#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main (){
    string str;
    int max_cnt=0;
    int max_idx=-1;
    int dup_cnt=0;
    int cnt[26]={0};

    cin >> str;

    for(size_t i=0; i< str.size(); i++){
        str[i]=toupper(str[i]);
        cnt[int(str[i])-65]+=1;
    }


    for(size_t i=0; i<(sizeof(cnt)/sizeof(int));i++){
        if(cnt[i]>max_cnt){
            max_cnt=cnt[i];
            max_idx=i;
        }
    }
    
    for(size_t i=0; i<(sizeof(cnt)/sizeof(int));i++){
        if(cnt[i]==max_cnt){
            dup_cnt++;
        }
    }

    if(dup_cnt>1){
        cout << '?' << endl;
    }else
    {
        cout << char(max_idx+65) << endl;
    }


    return 0;
}