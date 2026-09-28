#include <iostream>

class Balance {
private:
    double amount;

public:
    explicit Balance(double givenAmount) : amount(givenAmount) {}

    Balance operator-() const {
        return Balance(-amount);
    }

    void display() const {
        std::cout << amount << '\n';
    }
};

int main() {
    Balance balance(5000.0);
    Balance negativeBalance = -balance;

    std::cout << "Original balance: ";
    balance.display();

    std::cout << "Negative balance: ";
    negativeBalance.display();

    return 0;
}