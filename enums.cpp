#include <iostream>

using namespace std;

enum GameMode {
    easy = 5,
    medium = 25,
    hard = 100
};

int main(void){
    GameMode gm = easy;
    char difficulty;
    cout << "Easy Medium or hard? (e,m,h)\n";
    cin >> difficulty;

    switch (difficulty){
        case 'e':
        gm = easy;
        break;
        case 'm':
        gm = medium;
        break;
        case 'h':
        gm = hard;
        break; 
        default:
        cout << "Invalid input\n";
    }
    
    switch (gm) {
        case easy:
        cout << "Good luck. Difficulty: Easy. This is the base difficulty.\n";
        break;
        case medium:
        cout << "Good luck. Difficulty: Medium. This will be 5 times harder than easy.\n";
        break;
        case hard:
        cout << "Good luck. Difficulty: Hard. This will be 4 times harder than medium.\n";
        break;
    }

    return 0; 
};
