#include <iostream>
using namespace std;

int main(){
    cout << "--------------------------------------------" << endl;
    cout << "                 iBOB STORE                 " << endl;
    cout << "We will find the best iPhone for your budget" << endl;
    cout << "--------------------------------------------" << endl;

    int budget;
    cout << "How much money do you have?: " << endl;
    cout << "1.  Rp6500k-Rp9500k" << endl;
    cout << "2.  Rp7500k-Rp8600k" << endl;
    cout << "3.  Rp10000k-Rp15000k" << endl;
    cout << "4.  Rp11000k-Rp14000k" << endl;
    cout << "5.  Rp12000k-Rp19000k" << endl;
    cout << "6.  Rp13000k-Rp16000k" << endl;
    cout << "7.  Rp13000k-Rp20000k" << endl;
    cout << "8.  Rp15500k-Rp20000k" << endl;
    cout << "9.  Rp16000k-Rp22500k" << endl;
    cout << "10. Rp18000k-Rp24500k" << endl;
    cout << "Input your budget level (1-10): ";
    cin >> budget;
    cout << "--------------------------------------------" << endl;

    switch(budget){
        case 1:
            cout << "We have iPhone SE for you" << endl;
            break;
        case 2:
            cout << "We have iPhone X for you" << endl;
            break;
        case 3:
            cout << "We have iPhone 11 for you" << endl;
            break;
        case 4:
            cout << "We have iPhone 12 Mini and iPhone XR for you" << endl;
            break;
        case 5:
            cout << "We have iPhone XS for you" << endl;
            break;
        case 6:
            cout << "We have iPhone 12 for you" << endl;
            break;
        case 7:
            cout << "We have iPhone XS Max for you" << endl;
            break;
        case 8:
            cout << "We have iPhone 11 for you" << endl;
            break;
        case 9:
            cout << "We have iPhone 12 Pro for you" << endl;
            break;
        case 10:
            cout << "We have iPhone 12 Pro Max for you" << endl;
            break;
        default:
            cout << "Your input is invalid" << endl;
    }

cout << "--------------------------------------------" << endl;
cout << "              Thanks for coming             " << endl;
    return 0;
}