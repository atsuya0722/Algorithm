#include<iostream>
using namespace std;

int main(void){
    int N;
    while(N<1 || 10000<N){
        cout << "1~10000の間の数字を入力してください" << endl;
        cin >> N;
    }
    for(int i=1; i<101;i++){
        if(N%i==0 && N/i<=100){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}