#include <iostream>
using namespace std;

int main() {
    float costPricePerDozen, sellingPricePerDozen;
    float costPricePerBanana, sellingPricePerBanana;
    float totalCost, totalSellingPrice, profitOrLoss;

    cout << "Enter cost price per dozen bananas: ";
    cin >> costPricePerDozen;

    cout << "Enter selling price per dozen bananas: ";
    cin >> sellingPricePerDozen;

    costPricePerBanana = costPricePerDozen / 12.0;
    sellingPricePerBanana = sellingPricePerDozen / 12.0;


    totalCost = costPricePerBanana * 25;
    totalSellingPrice = sellingPricePerBanana * 25;

    profitOrLoss = totalSellingPrice - totalCost;

    if (profitOrLoss > 0) {
        cout << "You made a profit of Rs. " << profitOrLoss << " on selling 25 bananas." << endl;
    } else if (profitOrLoss < 0) {
        cout << "You incurred a loss of Rs. " << -profitOrLoss << " on selling 25 bananas." << endl;
    } else {
        cout << "No profit, no loss on selling 25 bananas." << endl;
    }

    return 0;
}
