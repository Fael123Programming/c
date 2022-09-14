#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

const int NUMBER_OF_FACTORIES = 4;

void inputData(int[]);

void scaleFactoryProduction(int[]);

void drawGraph(int[]);

void getFactoryProduction(int&);

int findMaxPos(const int[]);

string fillNumber(int, int);

int main() {
    int factoryProduction[NUMBER_OF_FACTORIES];
    cout << "Este programa apresenta um gráfico mostrando\na produção de cada fábrica na companhia.\n";
    inputData(factoryProduction);
    scaleFactoryProduction(factoryProduction);
    drawGraph(factoryProduction);
    return 0;
}

void inputData(int factoryProduction[]) {
    for (int i = 0; i < NUMBER_OF_FACTORIES; i++) {
        cout << endl
            << "Informe os dados de produção para a fábrica número "
            << (i + 1) << endl;
            getFactoryProduction(factoryProduction[i]);
    }
}

void getFactoryProduction(int& factoryProduction) {
    cout << "Informe o número de unidades produzidas por cada departamento.\n"
        << "Inclua um número negativo ao final da lista.\n";
        factoryProduction = 0;
        int data;
        cin >> data;
        while (data >= 0) {
            factoryProduction += data;
            cin >> data;
        }
        cout << "Total = " << factoryProduction << endl;
}

void scaleFactoryProduction(int factoryProduction[]) {
    for (int i = 0; i < NUMBER_OF_FACTORIES; i++) {
        factoryProduction[i] = round(factoryProduction[i] / 1000.0);
    }
}

void drawGraph(int factoryProduction[]) {
    string graphString = "           Unidades produzidas em milhares de unidades:\n";
    int maxPos = findMaxPos(factoryProduction);
    int maxInitialValue = factoryProduction[maxPos];
    int maxBeforeChange;
    for (int i = 0; i < maxInitialValue; i++) {
        maxBeforeChange = factoryProduction[maxPos];
        graphString += fillNumber(maxBeforeChange, 11);
        for (int j = 0; j < NUMBER_OF_FACTORIES; j++) {
            if (factoryProduction[j] == maxBeforeChange) {
                graphString += "***";
                factoryProduction[j]--;
            } else {
                graphString += "   ";
            }
            if (j < NUMBER_OF_FACTORIES - 1) {
                graphString += "     ";
            }
        }
        graphString += "\n";
    }
    graphString += "fabrica    ";
    for (int i = 0; i < NUMBER_OF_FACTORIES; i++) {
        graphString += " " + to_string(i + 1) + " ";
        if (i < NUMBER_OF_FACTORIES - 1) {
            graphString += "     ";
        }
    }
    graphString += "\n";
    cout << graphString;
}

int findMaxPos(const int factoryProduction[]) {
    int maxPos = 0;
    for (int i = 1; i < NUMBER_OF_FACTORIES; i++) {
        if (factoryProduction[i] > factoryProduction[maxPos]) {
            maxPos = i;
        }
    }
    return maxPos;
}

string fillNumber(int number, int size) {
    string result = to_string(number);
    while (result.length() < size) {
        result += " ";
    }
    return result;
}
