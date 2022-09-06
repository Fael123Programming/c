#include <iostream>
#include <string>
#include "insertion_sort/InsertionSort.cpp"

using namespace std;

#define MAXSIZE 35

int main(){
    string names[] = {"Rafael", "Fabiana", "Pedro", "Ana", "Diego", "Bruna", "Marcelo", "Flavia", "Amaurilio", "Gabriela", "Jose", "Mariana", "Fernando",
    "Rayssa", "Matheus", "Cristiano", "Lucilene", "Lorena", "Helen", "Afonso", "Paulo", "Guilherme", "Joao Paulo", "Cristine", "Jovenario", "Sergio", "Eliene",
    "Jesmmer", "Alexandre", "Jessica", "Igor", "Amanda", "Waldemar", "Ketterson", "Keylla"};
    cout << "-------------------------------------------------------------------------------------------------------------\n";
    cout << "There goes a list of all employees:\n";
    for (int i = 0; i < MAXSIZE; i++) {
        cout << names[i] << endl;
    }
    cout << "-------------------------------------------------------------------------------------------------------------\n";
    InsertionSort sorter;
    sorter.sortStrings(names, MAXSIZE);
    cout << "There goes the list above but lexicographically sorted:\n";
    for (int i = 0; i < MAXSIZE; i++) {
        cout << names[i] << endl;
    }
    cout << "-------------------------------------------------------------------------------------------------------------\n";
    return 0;
}