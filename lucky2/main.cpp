//Risheendra Manikya
//Cst 215
//
//  main.cpp
//  lucky2
//
//



#include <iostream>
#include <string>
#include <fstream>
using namespace std;


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
// start of part4

void palindrome()
{
    char string1[20];
       int i, length;
       int flag = 0;
       
       cout << "Enter a string: "; cin >> string1;
       
       length = strlen(string1);
       
       for(i=0;i < length ;i++){
           if(string1[i] != string1[length-i-1]){
               flag = 1;
               break;
           }
       }
       
       if (flag) {
           cout << string1 << " is not a palindrome" << endl;
       }
       else {
           cout << string1 << " is a palindrome" << endl;
       }
}
//start of part 5

void prime()
{
    int n, i;
    bool isPrime = true;
    cout <<"enter a positive integer: ";
    cin >> n;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "This is a prime number";
    else
        cout << "This is not a prime number";
}
//start of part 6
void num()
{
      int sum = 0;
        int i;
        int n = 5;
        int num[5]={1, 2, 3, 4, 10};
        int average;
    for (i = 0; i < n; i++)
        {
          
            sum += num[i];
        }
        average = sum / n;
        cout << "Average = " << average;
}

//start of part 7
void positve()
{
     string line;
       ifstream myfile("characters.txt");
       int userinput = 0;
       cout << "Please type number of strings " << endl;
       cin >> userinput;
       string * characters = new string[userinput];
       if(!myfile)
       {
           cout << "no file";
           exit(2);
       }
       
           int i = 0;
           while (i < userinput)
           {
               myfile >> characters[i];
               i++;
           }
       
}
int main()
{
    largeSmall();
    int a = 7, N = 50;
    cout << "Sum of multiples of "
    << a << " up to " << N << " = "
    << calculate_sum(a, N) << endl;
    sum();
    palindrome();
    prime();
    num();
    positve();
    return 0;
}


