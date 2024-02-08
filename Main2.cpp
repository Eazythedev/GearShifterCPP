//
//  main.cpp
//  GearShifter
//
//  Created by Ezaiah on 12/12/23.
//  Eazythedev

#include <iostream>
using namespace std;

int main() {
    char gear_input;
    
    while (true) {
        cout << "Select a gear. \n(1 - 6)\n(R- Reverse)\n(N - Neutral): ";
        cin >> gear_input;
        
        switch (toupper(gear_input)) {
            case '1':
                cout << "Gear: 1\n";
                break;
            case '2':
                cout << "Gear: 2\n";
                break;
            case '3':
                cout << "Gear: 3\n";
                break;
            case '4':
                cout << "Gear: 4\n";
                break;
            case '5':
                cout << "Gear: 5\n";
                break;
            case '6':
                cout << "Gear: 6\n";
                break;
            case 'N':
                cout << "Gear: N\n";
                break;
            case 'R':
                cout << "Gear: R\n";
                break;
            case 'L':
                cout << "Gear: LOW\n";
                break;
            case 'Q':
                cout << "Car off.\n";
                return 0; // Exit the program
            default:
                cout << "Gear: N\n";
        }
    }
    return 0;
}
