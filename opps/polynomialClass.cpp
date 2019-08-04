#include<iostream>
using namespace std;
/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

class Polynomial {
    public:
    int *degCoeff;  
    int capacity;
    // default Constructor
    Polynomial(){
        capacity = 10;
        degCoeff = new int[capacity];
        for(int i=0; i<capacity; i++){
            degCoeff[i] = 0;
        }
    }
    // Copy Constructor 
    Polynomial(Polynomial const &s)
    {
        this->capacity = capacity;
        //this->name = name;  shallow copy
        this->degCoeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            degCoeff[i] = s.degCoeff[i];
        }
    }
    void print(){
        int n = sizeof(degCoeff)/sizeof(degCoeff[0]);
        for(int i=0; i<n; i++){
            if(degCoeff[i] != 0){
                cout << degCoeff[i] << "x" << i << " ";
            }
        }
    }
    // Name of your array (Don't change this)
    
    // Complete the class
    
    
};
