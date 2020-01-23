//Risheendra Manikya
//Cst 215
//
//  main.cpp
//  lucky2
//
//


// C++ program to find sum of multiples of a number
// up to N efficiently
#include <iostream>
using namespace std;

// Function for calculating sum of multiples of
// a upto N

void largeSmall()
{
    
    int num1, num2, num3, num4, num5, largest, smallest;
       
       cout << "Enter five integers: ";
       cin >> num1 >> num2 >> num3 >> num4 >> num5;
       
       largest = num1;
       smallest = num1;
       
       if ( num1 > largest )
           largest = num1;
       
       if ( num2 > largest )
           largest = num2;
       
       if ( num3 > largest )
           largest = num3;
       
       if ( num4 > largest )
           largest = num4;
       
       if ( num5 > largest )
           largest = num5;
       
       if ( num1 < smallest )
           smallest = num1;
       
       if ( num2 < smallest )
           smallest = num2;
       
       if ( num3 < smallest )
           smallest = num3;
       
       if ( num4 < smallest )
           smallest = num4;
       
       if ( num5 < smallest )
           smallest = num5;
       cout << "Largest is " << largest<< "\nSmallest is " << smallest << endl;
}
 
//start of 2nd part
int calculate_sum(int a, int N)
{
    // Number of multiples
    int m = N / a;
    
    // sum of first m natural numbers
    int sum = m * (m + 1) / 2;
    
    // sum of multiples
    int ans = a * sum;
    
    return ans;
}
//start of part 3
void sum()
{
    int n = 10;
    double sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;         // Update factorial
        sum += fact;  // Update series sum
        cout << fact << "\n";
    }
 
}
// Driver code
int main()
{
    largeSmall();
    int a = 7, N = 50;
    cout << "Sum of multiples of "
    << a << " up to " << N << " = "
    << calculate_sum(a, N) << endl;
    sum();
    return 0;
}


