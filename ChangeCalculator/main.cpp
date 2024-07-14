#include <iostream>

using namespace std;

int main ()
{
    cout << "How many cents do you have? ";
    int cent_amount {0};
    cin >> cent_amount;
    
    int dollars {0}, quarters {0}, dimes {0}, nickles {0}, pennies {0};
    int remainder {0};
    
    if(cent_amount >= 100)
    {
        dollars = cent_amount / 100;
        remainder = cent_amount - (100 * dollars);
        
        if(remainder >= 25)
        {
            quarters = remainder / 25;
            remainder = remainder - (25 * quarters);
        }
        
        if(remainder >= 10)
        {
            dimes = remainder / 10;
            remainder = remainder - (10 * dimes);
        }
        
        if(remainder >= 5)
        {
            nickles = remainder / 5;
            remainder = remainder - (5 * nickles);
        }
        
        if(remainder >= 1)
        {
            pennies = remainder / 1;
            remainder = remainder - (1 * pennies);
        }
    }
    else
    {
        if(cent_amount >= 25)
        {
            quarters = cent_amount / 25;
            remainder = cent_amount - (25 * quarters);
        }
        
        if(remainder >= 10)
        {
            dimes = remainder / 10;
            remainder = remainder - (10 * dimes);
        }
        
        if(remainder >= 5)
        {
            nickles = remainder / 5;
            remainder = remainder - (5 * nickles);
        }
        
        if(remainder >= 1)
        {
            pennies = remainder / 1;
            remainder = remainder - (1 * pennies);
        }
    }
    
        cout << "The result after calculation:\n" << endl;
        cout << "Dollars: " << dollars << endl;
        cout << "Quarters: " << quarters << endl;
        cout << "Dimes: " << dimes << endl;
        cout << "Nickles: " << nickles << endl;
        cout << "Pennies: " << pennies << endl;
}