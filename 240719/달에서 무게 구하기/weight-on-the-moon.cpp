#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double chu_weight = 13;
    double moon_gravity = 0.165000;

     cout << chu_weight;
    cout << fixed << setprecision(6);
    cout << " * " << moon_gravity << " = ";
    cout << chu_weight * moon_gravity << endl;
    return 0;
}