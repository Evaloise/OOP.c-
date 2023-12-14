#include <iostream>
using namespace std;

int main() {
    int basicSalary = 40000;
    int TotalIncome, sales;
    double commissionrate;

    cout << "Enter the amount of goods sold: ";
    cin >> sales;

    if (sales > 10000 && sales <= 19999) {
        commissionrate = 0.1;
    } else if (sales <= 29999) {
        commissionrate = 0.15;
    } else if (sales <= 34999) {
        commissionrate = 0.17;
    } else if (sales <= 39999) {
        commissionrate = 0.21;
    } else if (sales > 39999) {
        commissionrate = 0.27;
    } else {
        commissionrate = 0.0; 
    }

    TotalIncome = basicSalary + (sales * commissionrate);

    cout << "Total Income: " << TotalIncome << endl;
    return 0;
}
