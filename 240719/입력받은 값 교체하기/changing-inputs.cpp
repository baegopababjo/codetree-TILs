#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int temp;
    temp = b;
    b = a;
    a = temp;
    
    cout<<a<< " "<<b;
    return 0;
}