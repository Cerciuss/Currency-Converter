// Project Currency Convertor
#include <iostream>

using namespace std;

class CurrencyConvertor {
private:
    // Private attributes to store the conversion rates
    double usdToEuroRate;
    double euroToUsdRate;
    double usdToDinariRate;
    double usdToTunisianRate;

public:
    // Constructor to initialize the rates when an object is created
    CurrencyConvertor(double usdToEuro, double euroToUsd, double usdToDinari, double usdToTunisian) {
        usdToEuroRate = usdToEuro;
        euroToUsdRate = euroToUsd;
        usdToDinariRate = usdToDinari;
        usdToTunisianRate = usdToTunisian;
    }

    // Function to display current rates
    void displayExchangeRates() {
        cout << "\n\t--------Current Exchange Rates--------\n";
        cout << " USD To Euro     = " << usdToEuroRate << "\n";
        cout << " Euro To USD     = " << euroToUsdRate << "\n";
        cout << " USD To Dinari   = " << usdToDinariRate << "\n";
        cout << " USD To Tunisian = " << usdToTunisianRate << "\n";
        cout << "\t--------------------------------------\n";
    }

    // Conversion functions
    double convertUsdToEuro(double usdAmount) {
        return usdAmount * usdToEuroRate;
    }

    double convertEuroToUsd(double euroAmount) {
        return euroAmount * euroToUsdRate;
    }

    double convertUsdToDinari(double usdAmount) {
        return usdAmount * usdToDinariRate;
    }

    double convertUsdToTunisian(double usdAmount) {
        return usdAmount * usdToTunisianRate;
    }
};

int main() {
    // Initializing the rates as constants
    const double initialUsdToEuroRate = 0.86;
    const double initialEuroToUsdRate = 1.16;
    const double initialUsdToDinariRate = 0.31;
    const double initialUsdToTunisianRate = 2.93;

    // Creating the convertor object with the initial rates
    CurrencyConvertor convertor(initialUsdToEuroRate, initialEuroToUsdRate, initialUsdToDinariRate, initialUsdToTunisianRate);

    // Display the rates at startup
    convertor.displayExchangeRates();

    int choice;
    double amount;

    // A simple interactive menu for the user
    cout << "\nWhat would you like to convert?\n";
    cout << "1. USD to Euro\n";
    cout << "2. Euro to USD\n";
    cout << "3. USD to Dinari\n";
    cout << "4. USD to Tunisian\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the amount to convert: ";
    cin >> amount;

    cout << "\n--- Result ---\n";
    switch (choice) {
    case 1:
        cout << amount << " USD is " << convertor.convertUsdToEuro(amount) << " Euros.\n";
        break;
    case 2:
        cout << amount << " Euros is " << convertor.convertEuroToUsd(amount) << " USD.\n";
        break;
    case 3:
        cout << amount << " USD is " << convertor.convertUsdToDinari(amount) << " Dinari.\n";
        break;
    case 4:
        cout << amount << " USD is " << convertor.convertUsdToTunisian(amount) << " Tunisian Dinars.\n";
        break;
    default:
        cout << "Invalid choice. Please run the program again.\n";
    }

    return 0;
}

