#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int val = 0;
    for (int i = 0; i<n;i++){
        int sum = 0;
        for(int j = 0; j< n; j++){
            cin>>val;
            sum += val;
        }
        cout<<sum<<endl;
    }
    return 0;
}