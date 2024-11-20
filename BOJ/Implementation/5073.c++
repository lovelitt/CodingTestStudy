#include <iostream>
#include <vector>
using namespace std;

int main(){
    while(true){
        int a,b,c;

        cin >> a >> b >> c;

        //quit
        if(a==0 && b==0 && c==0)
            break;

        //invalid
        if (a>b && a>c){
            if(a>=(b+c)){
                cout << "Invalid" << endl;
                continue;
            }
        }

        if (b>a && b>c){
            if(b>=(a+c)){
                cout << "Invalid" << endl;
                continue;
            }
        }

        if (c>a && c>b){
            if(c>=(a+b)){
                cout << "Invalid" << endl;
                continue;
            }
        }

        //equi
        if( (a == b) && (b == c) ){
            cout << "Equilateral" << endl;
            continue;
        }

        //isos
        if( a==b || b==c || a==c){
            cout << "Isosceles" << endl;
            continue;
        }

        //scal
        cout << "Scalene" << endl;
    }
}