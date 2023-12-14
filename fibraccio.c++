#include <iostream>
int main() {
    int term1 = 1, term2 = 2, nextTerm = 0, sum = 0;
    while (term1 <= 4000000) {
        if (term1 % 2 == 0) {
            sum += term1;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    std::cout << "Sum of even-valued terms: " << sum << std::endl;
    return 0;
}
