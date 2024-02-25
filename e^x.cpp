#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    // variable declaration 
    double X;
    int numTerm;
    
    // ask user for positive value of x and num of term and also validate all
    do
    {
        cout << "enter the value of X" << endl;
        cin >> X;
    }while(!(X > 0));
    
    do
    {
        cout << "enter number of term" << endl;
        cin >> numTerm;
    }while(!(numTerm > 0));
    
    // initializing the first term for x^0/ 0! to 1 and storing in result variable
    double result = 1.0;
    
    // accumulative varible 
    double factorial = 1.0;
    
    // using for loop to calculate factorial
    for(int i = 1; i <= numTerm; ++i)
    {
        double term;
        
        factorial*= i;
        
        // I learnt today that power is not calculated using ^ sign. I learnt pow() func from geeksforgeeks
        // I initaillay tried using x^i but didn't work
        
        term = pow(X,i)/ factorial;
        result += term;
    }
    
    // print
    cout << "the value of " << X << " using " << numTerm << " term : " << result << endl;
    return 0;
}


    

