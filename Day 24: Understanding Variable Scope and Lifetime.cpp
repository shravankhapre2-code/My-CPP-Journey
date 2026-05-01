#include <iostream>
using namespace std;

// 1. Global Variable (Visible to everyone)
int goldCoins = 100; 

void visitShop() {
    // 2. Local Variable (Visible only inside visitShop)
    int localBill = 20; 
    goldCoins = goldCoins - localBill;
    cout << "Shop: Used " << localBill << " coins. Remaining: " << goldCoins << endl;
}

int main() {
    cout << "--- Day 24: Global vs Local Scope ---" << endl;
    cout << "Starting Coins: " << goldCoins << endl;

    visitShop();

    // cout << localBill; // This would cause an ERROR because localBill is local to visitShop
    
    cout << "Final Coins in Main: " << goldCoins << endl;

    return 0;
}
