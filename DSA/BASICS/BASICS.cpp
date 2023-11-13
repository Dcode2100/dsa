// BASICS FOR POINTER AND TERNARY OPERATOR
#include<iostream>

using namespace std;

int main()
{
    int age = 100;

    int &a = age; // int &a is reference which is pointing to age
                    // We simply gave a more name to same variable age.

    int *b  = &age; // b is pointer which is holding the address of age.
    cout<< b<<endl; // Here we printed the value stored in address which is pointed by *b.
                     // &age means address of age variable.                               
    cout<<a<<endl<<b<<endl<<endl;


// Ternary Operator - (condition)? 'yes' : 'no'

// example for condition were we can use ternary operator.

   int number = -4;

  if (number > 0)
    cout << "Positive Number";
  else
    cout << "Negative Number!"<<endl;

// Above code can be replaced by 
   cout<< "result for code of ternary operator"<<endl<<endl;
   string result = (number>0)? "positive Number" : "Negative number";
   cout << result;
   return 0;
}