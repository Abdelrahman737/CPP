#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

void menu(vector <int> &vec);
void print_vector(const vector <int> &vec);
void add_element(vector <int> &vec);
void calculate_avg(const vector <int> &vec);
void find_small_num(const vector <int> &vec);
void find_large_num(const vector <int> &vec);

int main()
{
    vector <int> vec;
    menu(vec);
    return 0;
}

void menu(vector <int> &vec)
{
    char choice {};

    cout << "Welcome..." << endl;

    do
    {
        endl(cout);
        cout << "P: print the elements of the vector" << endl;
        cout << "A: add an element to the vector" << endl;
        cout << "M: calculate the mean (average) of the vector" << endl;
        cout << "S: display the smallest number" << endl;
        cout << "L: dispaly the largest number" << endl;
        cout << "C: clear the vector" << endl;
        cout << "E: exit the program" << endl;

        cout << "Enter you choice: ";
        cin >> choice;

        endl(cout);

        switch(toupper(choice))
        {
            case 'P':
                print_vector(vec);
            break;

            case 'A':
                add_element(vec);
            break;

            case 'M':
                calculate_avg(vec);
            break;

            case 'S':
                find_small_num(vec);
            break;

            case 'L':
                find_large_num(vec);
            break;

            case 'C':
                vec.clear();
            break;

            default:
                if(toupper(choice) != 'E')
                {
                    cout << "Wrong input, please try again" << endl;
                }
        }
    } while (toupper(choice) != 'E');   
}

void print_vector(const vector <int> &vec)
{
    cout << "[ ";

    for(auto i : vec)
    {
        cout << i << " ";
    }

    cout << "]" << endl;
}

void add_element(vector <int> &vec)
{
    int num {};

    cout << "Enter a new element: ";
    cin >> num;

    vec.push_back(num);
}

void calculate_avg(const vector <int> &vec)
{
    float avg {};

    for(auto i : vec)
    {
        avg += i;
    }

    avg /= vec.size();

    cout << "The average is: " << avg << endl;
}

void find_small_num(const vector <int> &vec)
{
    if(vec.size() > 0)
    {
        int small_num {vec.at(0)};

        for(auto i : vec)
        {
            if(i < small_num)
            {
                small_num = i;
            }
        }

        cout << "The smallest number is: " << small_num << endl;
    }
    else
    {
        cout << "The vector is empty" << endl;
    }
}

void find_large_num(const vector <int> &vec)
{
    if(vec.size() > 0)
    {
        int large_num {vec.at(0)};

        for(auto i : vec)
        {
            if(i > large_num)
            {
                large_num = i;
            }
        }

        cout << "The largest number is: " << large_num << endl;
    }
    else
    {
        cout << "The vector is empty" << endl;
    }
}