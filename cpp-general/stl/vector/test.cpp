class Test {
    public:
        Test(int);
        
        inline int getX() const { return x; }

        inline void setX(int newX) { x = newX; }

    private:
        int x;
};

Test::Test(int x) : x(x) {}
