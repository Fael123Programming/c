#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    char strNum[11];
    while(1){
        cin >> strNum;
        system("cls");
        cout << atoi(strNum) << endl;
    }

    return 0;
}