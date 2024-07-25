#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main ()
{
    string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string code {"cEXAPmtbKpWngMzejaNxZLhQwSHkYIvCfrqBDFVGOioTUdyRuJsl"};
    string message, encrypted_message, decrypted_message;
    int choice {};
    
    do
    {
        endl(cout);
        cout << "1) encrypt message" << endl;
        cout << "2) decrypt message" << endl;
        cout << "3) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        
        switch(choice)
        {
            case 1:
                cout << "Write your message: ";
                getline(cin, message);
                
                encrypted_message.clear();
                
                for(char m : message)
                {
                    bool found {false};
                    
                    for(unsigned int i {}; i < alphabets.length(); i++)
                    {
                        if(m == alphabets.at(i))
                        {
                            found = true;
                            encrypted_message += code.at(i);
                            break;
                        }
                    }
                    
                    if(!found)
                    {
                        encrypted_message += m;
                    }
                }
                
                cout << "Encrypted message: " << encrypted_message << endl;
                
                break;
                
            case 2:
                
                decrypted_message.clear();
            
                for(char e : encrypted_message)
                {
                    bool found {false};
                    
                    for(unsigned int i {}; i < code.length(); i++)
                    {
                        if(e == code.at(i))
                        {
                            found = true;
                            decrypted_message += alphabets.at(i);
                            break;
                        }
                    }
                    
                    if(!found)
                    {
                        decrypted_message += e;
                    }
                }
                
                cout << "decrypted message: " << decrypted_message << endl;
                
        }
        
    } while (choice != 3);
    
}