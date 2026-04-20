#include <iostream>
using namespace std;

int main() {
    const int NUM_STORES = 5;
    const int NUM_ITEMS = 3;
    double sales[NUM_STORES][NUM_ITEMS] = {0};  // Initialize all sales to 0

    int store_number, item_number;
    double sales_figure;
    char choice;

    cout << "Enter sales data cards for stores.\n";
    cout << "(Each card = store#, item#, sales figure)\n";
    cout << "Type 'n' when you are done.\n\n";

    do {
        cout << "Enter store number (1-5): ";
        cin >> store_number;

        while (store_number < 1 || store_number > 5) {
            cout << "Invalid store number. Enter between 1 and 5: ";
            cin >> store_number;
        }

        cout << "Enter item number (1-3): ";
        cin >> item_number;

        while (item_number < 1 || item_number > 3) {
            cout << "Invalid item number. Enter between 1 and 3: ";
            cin >> item_number;
        }

        cout << "Enter sales figure (<100000): ";
        cin >> sales_figure;

        while (sales_figure < 0 || sales_figure >= 100000) {
            cout << "Invalid figure. Enter less than 100000: ";
            cin >> sales_figure;
        }

        // Save it to the correct place
        sales[store_number - 1][item_number - 1] += sales_figure;

        cout << "Add another card? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    // Calculate totals
    double storeTotal[NUM_STORES] = {0};
    double itemTotal[NUM_ITEMS] = {0};
    double grandTotal = 0;

    for (int i = 0; i < NUM_STORES; i++) {
        for (int j = 0; j < NUM_ITEMS; j++) {
            storeTotal[i] += sales[i][j];
            itemTotal[j] += sales[i][j];
            grandTotal += sales[i][j];
        }
    }

    // Print result table
    cout << "\nSales Table:\n";
    cout << "Store\tItem1\tItem2\tItem3\tStore Total\n";

    for (int i = 0; i < NUM_STORES; i++) {
        cout << i + 1 << "\t";
        for (int j = 0; j < NUM_ITEMS; j++) {
            cout << sales[i][j] << "\t";
        }
        cout << storeTotal[i] << endl;
    }

    cout << "TOTAL\t";
    for (int j = 0; j < NUM_ITEMS; j++) {
        cout << itemTotal[j] << "\t";
    }
    cout << grandTotal << endl;

    return 0;
}
