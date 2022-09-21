class Calc {
    public:
        const static double PI;

        inline static double sum(double n1, double n2) { return n1 + n2; }

        inline static double sub(double n1, double n2) { return n1 - n2; }

        static double mult(double n1, double n2);
};

const double Calc::PI = 3.141592;

double Calc::mult(double n1, double n2) {
    return n1 * n2;
}