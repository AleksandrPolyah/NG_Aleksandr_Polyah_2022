#include <iostream>

using namespace std;

int main(){
    float cpu;
    float videocard;
    float motherboard;
    float discount;
    float sum;
    cout << "Motherboard price: " << endl;
    cin >> motherboard;
    cout << "Videocard price: " << endl;
    cin >> videocard;
    cout << "CPU price: " << endl;
    cin >> cpu;
    cout << "Discount: " << endl;
    cin >> discount;
    sum = (motherboard + videocard + cpu) - ((discount / 100) * (motherboard + cpu + videocard));
    cout << "Your PC will cost: " << sum << endl;
}
