#include <iostream>
#include <string>

using std::string;

typedef struct insort {
    //This method sorts a group of names passed in an array in
    //alfabetic order.
    
    void sortStrings(string strArray[], int arraySize) {
        string temp;
        int i;
        for (int j = 1; j < arraySize; j++) {
            temp = strArray[j];
            i = j - 1;
            while (i >= 0 && strArray[i] > temp) {
                strArray[i + 1] = strArray[i];
                i--;
            }
            strArray[i + 1] = temp;
        }
    }
}insort;