#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int nums[] = {1, 3, 2, 4, 5};
    for (int i = 0; i < SIZE - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            cout << "The elements " << nums[i] << " and " << nums[i + 1] << " aren't sorted\n";
            exit(1);
        }
    }
    return 0;
}
