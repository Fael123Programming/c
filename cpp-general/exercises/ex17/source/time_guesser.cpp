#include "../headers/time_guesser.h"
#include <cstddef>
#include <cstdlib>

string TimeGuesser::getPrediction(int month, int day) {
    srand(month * day);
    switch (rand() % 3) {
        case 0:
            return "sunny";
            break;
        case 1:
            return "cloudy";
            break;
        case 2:
            return "rainy";
    }
    return NULL;
}