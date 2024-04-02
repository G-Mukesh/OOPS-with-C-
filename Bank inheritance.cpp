#include <iostream>
using namespace std;


class Bank {
public:
    int display() {
        return 0;
    }
};

class BankA : public Bank {
public:
    int display() {
        return 10000;
    }
};
class BankB : public Bank {
public:
    int display() {
        return 15000;
    }
};

class BankC : public Bank {
public:
    int display() {
        return 20000;
    }
};

int main() {
    
    BankA A;
    BankB B;
    BankC C;

    
    cout << "Balance in Bank A: " << A.display() << endl;
    cout << "Balance in Bank B: " << B.display() << endl;
    cout << "Balance in Bank C: " << C.display() << endl;

    return 0;
}

