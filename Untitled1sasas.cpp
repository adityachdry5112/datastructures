
#include <iostream>
#include <string>

std::string hexSum(std::string hex1, std::string hex2) {
    int carry = 0;
    std::string result = "";

    int i = hex1.length() - 1;
    int j = hex2.length() - 1;

    while (i >= 0 || j >= 0) {
        int digit1 = i >= 0 ? hex1[i] - '0' : 0;
        int digit2 = j >= 0 ? hex2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 16;
        sum %= 16;

        result = std::to_string(sum) + result;

        i--;
        j--;
    }

    if (carry > 0) {
        result = std::to_string(carry) + result;
    }

    return result;
}

int main() {
    std::string hex1, hex2;
    std::cout << "Enter the first hexadecimal number: ";
    std::cin >> hex1;
    std::cout << "Enter the second hexadecimal number: ";
    std::cin >> hex2;

    std::string sum = hexSum(hex1, hex2);
    std::cout << "The sum of the two hexadecimal numbers is: " << sum << std::endl;

    return 0;
}
