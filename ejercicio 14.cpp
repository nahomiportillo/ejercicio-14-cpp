#include <iostream>
#include <string>
using namespace std;

int main(void){

    int num1 = 0, num2 = 1;
    cout << "Factorial" << endl;
    cout << "ingrese un numero: " << endl; 
    cin >> num1;

    for(int j=1; j <= num1; j++){
        num2 = num2*j;
    }
    cout << "el factorial es: " << num2 << endl;
}