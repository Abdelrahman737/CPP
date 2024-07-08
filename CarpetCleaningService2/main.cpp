#include <iostream>

using namespace std;

int main ()
{
    const int broom_price {35};
    const int sroom_price {25};
    const float tax {0.06};
    
    cout << "Welcome to Abdelrahman's Carpet Cleaning Service" << endl;
    
    cout << "Enter the number of small rooms you want to clean: ";
    int num_srooms {0};
    cin >>num_srooms;
    
    cout << "Enter the number of big rooms you want to clean: ";
    int num_brooms {0};
    cin >>num_brooms;
    
    cout << "Price per small room: $25" << endl;
    cout << "Price per big room: $35" << endl;
    
    int total_broom {num_brooms * broom_price};
    int total_sroom {num_srooms * sroom_price};
    int cost {total_broom + total_sroom};
    float tax_fee {cost * tax};
    
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax_fee << endl;
    
    cout << "===========================================" << endl;
    cout << "Total estimate: $" << cost + tax_fee << endl;
    cout << "This estimate is valid for 30 days" << endl;
}