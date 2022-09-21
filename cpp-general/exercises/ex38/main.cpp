#include <iostream>
#include <vector>

void print(const std::vector<char>);

int main() {
    std::vector<char> text;
    char c;
    while (1) {
        std::cin >> c;
        if (c == '0') {
            break;
        }
        text.push_back(c);
    }
    print(text);
    char x, y, z;
    std::cin >> x >> y >> z;
    std::cout << x << " " << y << " " << z << std::endl;
    return 0;
}

void print(const std::vector<char> text) {
    unsigned int size = text.size();
    for (int i = 0; i < text.size(); i++) {
        std::cout << text[i];
    }
    std::cout << std::endl;
}
