#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    char choice {};
    vector <int> vec;
    do
    {
        int num {};
        double avg {};
        int temp {};
        bool add {true};
        
        cout << "P: print list items." << endl;
        cout << "A: add an element to the list." << endl;
        cout << "M: calculate the mean \"average\"." << endl;
        cout << "S: display the smallest number." << endl;
        cout << "L: display the largest number." << endl;
        cout << "C: clear the list" << endl;
        cout << "Q: quit." << endl;
        cout << "---------------------------------------------" << endl;
        
        cout << "Enter you choice: ";
        cin >> choice;
        
        switch(choice)
        {
            case 'p':
            case 'P':
                cout << "[ ";
                for (auto v: vec)
                {
                    cout << v << " ";
                }
                cout << "]\n" << endl;
                break;
                
            case 'a':
            case 'A':
                
                if(!vec.empty())
                {
                    cout << "Enter a new number: ";
                    cin >> num;
                    
                    for(int i {}; i < vec.size(); i++)
                    {
                        if(vec.at(i) == num)
                        {
                            cout << "This number is already in the set! Add another number" << endl << endl;
                            add = false;
                            break;
                        }
                    }
                    
                    if(add)
                    {
                        vec.push_back(num);
                        cout << num << " was added to the list" << endl << endl;
                    }
                }
                else
                {
                    cout << "Enter a new number: ";
                    cin >> num;
                    vec.push_back(num);
                    cout << num << " was added to the list" << endl << endl;
                }
                
                break;
                
            case 'm':
            case 'M':
                
                for (auto v : vec)
                {
                    avg += v;
                }
                
                avg = avg / vec.size();
                cout << "The mean \"average\" is: " << avg << endl << endl;
                break;
            
            case 's':
            case 'S':
                if(!vec.empty())
                {
                    for(int i {}; i < vec.size(); i++)
                    {
                        if(vec.at(temp) > vec.at(i))
                        {
                            temp = i;
                        }
                    }
                    
                    cout << vec.at(temp) << endl << endl;
                }
                else
                {
                    cout << "Sorry, cannot get the smallest number \"the set is empty\" " << endl << endl;
                }
                break;
            
            case 'l':
            case 'L':
                if(!vec.empty())
                {
                    for(int i {}; i < vec.size(); i++)
                    {
                        if(vec.at(temp) < vec.at(i))
                        {
                            temp = i;
                        }
                    }
                    
                    cout << vec.at(temp) << endl << endl;
                }
                else
                {
                    cout << "Sorry, cannot get the largest number \"the set is empty\" " << endl << endl;
                }
                break;
            case 'c':
            case 'C':
                
                vec.clear();
                
                cout << "Set has cleared sucessfully" << endl << endl;
                
                break;
            
            default:
                
                cout << "Wrong input, please try again" << endl << endl;
        }
        
    } while(choice != 'Q' && choice != 'q');
}