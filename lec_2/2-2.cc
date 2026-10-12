#include<iostream>
using namespace std;

int pascal(int x, int y){
    if(y==1 ||x==y){
        return 1;
    }else{
        return pascal(x-1,y-1)+pascal(x-1,y);
    }
}

int main(void){
    cout << pascal(6,3) << endl;
    return 0;
}