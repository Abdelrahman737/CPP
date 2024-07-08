#include <iostream>

using namespace std;

int main ()
{
    const int room_price {30};
    const float tax {0.06};
    
    cout << "Welcome to Abdelrahman's Carpet Cleaning Service" << endl;
    cout << "Price: " << "Chrages 30$ per room and 6% tax" << endl;
    
    cout << "Enter the number of rooms: ";
    int num_rooms {0};
    cin >>num_rooms;
    endl(cout);
    
    int cleaning_price {num_rooms * room_price};
    cout << "Cleaning price: $" << cleaning_price << endl;
    float tax_fee {tax * cleaning_price};
    cout << "Tax fee: $" << tax * cleaning_price << endl;
    cout << "Total price: $" << cleaning_price + tax_fee << endl;
    cout << "This estimation is valid for 30 days" << endl;
}