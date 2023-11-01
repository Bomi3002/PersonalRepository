// rock paper scissors game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define rock 1
#define paper 2
#define scissors 3

int main() {
    int myThrow;
    int aiThrow;
    int again;
    bool draw = false;

    do {
        cout << "Please choose your throw! Type 1 for rock, 2 for paper and 3 for scissors." << endl;
        cin >> myThrow;
        cout << endl;

        if (myThrow == rock) {
            cout << "You choose rock! " << endl;
        } else if (myThrow == paper) {
            cout << "You choose paper! " << endl;
        } else if (myThrow == scissors) {
            cout << "You choose scissors! " << endl;
        }

        aiThrow = (rand() % 3) + 1;

        if (aiThrow == rock) {
            cout << "AI choose rock!" << endl;
        } else if (aiThrow == paper) {
            cout << "AI choose paper!" << endl;
        } else if (aiThrow == scissors) {
            cout << "AI choose scissors!" << endl;
        }
        cout << endl;
        draw = false;

        if (myThrow == aiThrow) {
            draw = true;
            cout << "It's a draw! Let's play again.^^" << endl;
        } else if (myThrow == rock && aiThrow == scissors) {
            cout << "You win!" << endl;
        } else if (myThrow == rock && aiThrow == paper) {
            cout << "You lose..." << endl;
            cout << "Do you want to play again? 1 if yes." << endl;
            cin >> again;
            if (again == rock)
            {
                draw = true;
            }

        } else if (myThrow == paper && aiThrow == rock) {
            cout << "You win!!" << endl;
        } else if (myThrow == paper && aiThrow == scissors) {
            cout << "You lose..." << endl;
            cout << "Do you want to play again? 1 if yes." << endl;
            cin >> again;
            if (again == rock)
            {
                draw = true;
            }
        } else if (myThrow == scissors && aiThrow == rock) {
            cout << "You lose..." << endl;
            cout << "Do you want to play again? 1 if yes." << endl;
            cin >> again;
            if (again == rock)
            {
                draw = true;
            }
        } else if (myThrow == scissors && aiThrow == paper) {
            cout << "You win!!" << endl;

        }
    } while (draw);



return 0;

}

/*
C:\h\cmake-build-debug\h.exe
Please choose your throw! Type 1 for rock, 2 for paper and 3 for scissors.
1

You choose rock!
AI choose scissors!

You win!

Process finished with exit code 0
 */