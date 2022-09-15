#include <iostream>

using namespace std;

struct Player {
    string name;
    int score;
} p1;

void printOut(Player);

Player truncScore(Player);

int main() {
    Player p2;
    p1 = {"Mike", 450};
    printOut(p1);
    p2 = truncScore(p1);
    printOut(p2);

    return 0;
}

void printOut(Player p1) {
    cout << "----------------------------------------\n";
    cout << "Name: " << p1.name << endl;
    cout << "Score: " << p1.score << endl;
    cout << "----------------------------------------\n";
}

Player truncScore(Player p) {
    Player another = p;
    another.score = 0;
    return another;
}