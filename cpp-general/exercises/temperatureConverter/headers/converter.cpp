typedef struct converter {
    double celToFah(double celsius) {
        return (9.0 / 5) * celsius + 32;
    }

    double celToKel(double celsius) {
        return celsius + 273.15;
    }

    double fahToCel(double fahrenheit) {
        return (fahrenheit - 32) * (5.0 / 9);
    }

    double fahToKel(double fahrenheit) {
        return celToKel(fahToCel(fahrenheit));
    }

    double kelToCel(double kelvin) {
        return kelvin - 273.15;
    }

    double kelToFah(double kelvin) {
        return celToFah(kelToCel(kelvin));
    }
}converter;    