#include <string>

using namespace std;

typedef struct map {
    string key;
    int value;
}map;

void printMaps(map *maps, int size) {
    cout << "{";
    for (int i = 0; i < size; i++) {
        cout << maps[i].key << ":" << maps[i].value;
        if (i < size - 1) cout << ", "; 
    }
    cout << "}";
}