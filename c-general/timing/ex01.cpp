#include <iostream>
#include <chrono>
//#include <unistd.h>

using namespace std;

int main(){
    auto start = chrono::steady_clock::now();
    for(int counter = 0; counter < 1000000000; counter++) {}
    auto end = chrono::steady_clock::now();
    auto time = end - start;
    cout << "Time in nanoseconds: "<<chrono::duration_cast<chrono::nanoseconds>(time).count() << " ns" << endl;
    cout << "Time in microseconds: "<<chrono::duration_cast<chrono::microseconds>(time).count() << " us" << endl;
    cout << "Time in milliseconds: " << chrono::duration_cast<chrono::milliseconds>(time).count() << " ms" << endl;
    cout << "Time in seconds: "<<chrono::duration_cast<chrono::seconds>(time).count() <<" s" << endl;
    
    return 0;
}