#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    if(n>=3000){
        cout<<"book";
    }else if(n>0){
        cout<<"mask";
    }else{
        cout<<"no";
    }
    return 0;
}