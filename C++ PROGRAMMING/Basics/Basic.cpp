// Basics of C++
#include<bits/stdc++.h>//includes all the required libraries
using namespace std;//we can use names for objects and variables using standard library
// namespace line can be omitted by using std::
// namespace gives names to objects and variables
void userInput(){
    /*
    Data types - int , float , double , char , bool , string
    size       - 2,4    4       8        1      1 
    
    int - whole numbers
    35 100 ..
    float - floating point number
    9.99    3.141151
    precision - float(6-7 digits)
                double(15 digits)// safe to use for better calculations
    floating point number - scientific number - e
    
    10e6 - 10000006
    
    boolean 
        true - 1
        false - 0
    
    character - 'a' , 'b' , 'c'
    char a = 65 -> gives ascii value
    A - 65  
    a - 97
    
    string - "hello this is a string"
    include <string> library while using this
    
    operators -
    arithmetic operators - + , - , *  , / , % , ++ , --
    assignment operators
    comparison operators - > , < , != , <= , >=
    logical operators - && || !             
    
    */
    int n;
    cin>>n;
    cout<<n;
}
void L_strings(){
    /*
    include <string> library while using this
    
    we can concat strings using -
    a = 'good '
    b = 'morning'
    a+b => 'good morning'
    we can also concat by adding strings in middle
    
    we can also concat by using append method
    a.append(b)
    10 + 20 = 30
    "10" + "20" = "30"
    we cannot add integer and a string
    
    To get length of a string 
    string_name.length()
    or
    string_name.size()
    
    we can access characters in a string -
    myString = "Hello";
    1st character - myString[0]
    
    the indices are - 0 1 2 3 4 
    2nd character - myString[1]
    
    we can change the values of a string - 
        myString[0] = "h"
    
    we need to use "\" to include -> \ " ' in the string 
    \ it turns escape characters into string characters
    
    escape characters -
    \n - new line
    \t - tab
    
    Input strings 
    we can input a string
    string firstName;
    cin>>firstName;
    // we can get only the characters upto a space 
    To overcome this we use
    string name;
    getline(cin,name);
    
    
    
    
    
    
    
    */
    string name;
    getline(cin,name);
    cout<<name;
}
void Cpp_Math(){
    // we can perform math functions
    // we need to include
    // <math>
    // <cmath> -> use this as everything is not present in it
    // <string>
    // <iostream>
    //  when we work with these
    // to get max of 2 numbers
    //     max(a,b)
    // to get max of 3 numbers
    //     max(a,max(a,b))
    // lly
    //     min(a,b)
    // to get sqrt of a number
    //     sqrt(64)
    // to get round
    //     round(2.60928)
    // to get log value
    //     log(2)
    // //y
    //     abs(x)
    // cbrt(x)
    // ceil(x)
    // cos(x)
    // sin(x)
    // tan(x)
    // exp(x)
    // floor(x) - returns float value
}
void L_boolean(){
    // true - 1
    // false - 0
    // boolean value = true
    // boolean value = false
    // we get boolean values when we use comparison operators
    // x=9
    // y=8
    // (x>y) => 9>8 => gives true
    // (x==9) => gives true
    
}
void conditional_if(){
//     if
//     if-else
//     if else if else if else
//         else if - it used to specify a new condition when condition in if is false
    
//     we can also use terenary operator also
//             variable = (condition)?(executed when it is true):(executed when it is false)
    
//     switch - executed only once
//     switch(expression){
//         case x://
//                break;
//         case y://
//                break;
//         default://
//     }
            
}

void loops(){
//     while(condition){
//         //executes when condition is true
//         //update if any
//     }
//     do{
//         //block of code
//         // it executes atleast once even if conidition is false
//     }while(condition)
        
//     for(init;condition;update){
//         //block of code
//     }
//     for(auto i:arrayName){
//         //for each loop
//     }
    
    /*
    break -> used to jump out from the loop
    it is used in loops and switch cases
    */
    /*
    continue -> breaks the iteration in loop and continues the next iteration in the loop
    */
}

void Arrays(){
    // data_type array_name[size];
    //int array[10];
    //int a[10] = {1,2,3,4,5,6,7,8,9,10};
    // a[0]
    // index starts with 0
    
    // we can loop through a array
    // no_of_elements = sizeof(arr)/sizeof(arr[0]);
    // int a[3] = {1,2,3};
    /*
    while declaring the array with elements
    it is not necessary to give size
    int a[] = { 1,2,3 };
    is same as
    int a[3] = {1,2,3};
    we can also use it as:
    a[0]=1;
    a[1]=2;
    a[2]=3;
    */
    // cout<<sizeof(a);// 3 * size of data type(4) = 12
    // length = sizeof(a)/sizeof(a[0]);
    // length = sizeof(a)/sizeof(datatype_of_array)
    // // looping
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // // using for each loop
    // for(auto i:a){
    //     cout<<i<<" ";
    // }
    
    /*
    multidimensional arrays
    int a[2][2];//a[rows][columns]
    [[]
     []]
    
    string letters[2][4] = = {
    {'a','b','c','d'},
    {'e','f','g','h'}
    }
    */
    //int a[2][2][2];
    // we can access the arrays and loop like normal arrays
    // use multi dimensional arrays while using in grids        
}

//structure without a name
// struct {
//     string brand;
//     string model;
//     int year;
// }car1,car2
/*
    we can create variables of struct using variables
    after declaring the structure
    
*/

// structure with a name
// by this we can create a new data type that has multiple primitive data types in it
// using this we can create multiple variables instead of declaring variables after declaring the structure
// struct person{
//     int age;
//     string name;
// };
// typedef person p;
void l_struct(){
    // p persons[2];
    // persons[1].age=19;
    // persons[0].age=19;
    // persons[0].name="sowrya";
    // persons[1].name="anji";
    // cout<<persons[0].name<<"\n";
}
void reference(){
    // & -> reference - address
    // string food = "pizza";
    // string &meal = food;// creating a reference variable 
    // // we can create a reference variable using & operator
    // we can access it using any of the two variables
    // * pointer  -> store the address as its value
    int a = 2;
    int &b = a;     
}
void pointer(){
  int a = 5; // & -> represents the address of the variable
  int *b = &a;//* -> stores the address of the variable -> pointer variable - reference operator
  cout<<a<<endl;
  cout<<b<<endl; // gives the address - value of &a;
  cout<<*b<<endl;// * -> gives value at that address &a -> dereference operator
}
void function(){
    /*
    MAIN FUNCTION IS THE FUNCTION THAT GETS EXECUTED WHEN THE PROGRAM IS RUNNING WITHOUT ANY CALLING

        a function is a block of code which runs only when it is called
        creating a function
        data_type function_name(){
            //block of code
        }
        calling a function:
            function_name(); // calling a function
        
        ex:void -> returns nothing
            void myFun(){
                print("hello");
            }
        
        A FUNCTION COSISTS OF TWO PARTS 
        FUNCTION DECLARATION - return type , name , parameters
        FUNCTION DEFINITION - body of the function
        
        void myFun(){ // function declaration
            // body of the function // function definition
        }
            
    */
    /*
        
        void function_name(parameter_1,parameter_2,...,parameter_n){
            //function_body
            // the parameter should be defined using the datatype and name_of_the_variable
            
            
        }
    
    */
    
    
}
/*
void ex_function(string name){// we can also give multiple parameters based on the requirement
    cout<<"Hello Mr."<<name<<"\n";
}
int main(){
  ex_function("Sowrya");
}
*/
/*
parameters - 
default parameters - if the value of argument is not given then the default value of the argument will be executed

void myFun(string name="name_here"){// default parameter or optional parameter
    cout<<"hello"<<"mr.name"<<"\n";
    
    // we can also return values based on the return type that we mention that we use on function declaration
    
    // we can also pass the arguments by its reference also using its address
    so that if we want to return multiple values we can change the values on its address
    as return statement can return only return only one value
    
    we can pass array to a function
    
}

*/
int main(){
    // // output
    // cout<<"hello world\n";
    // // we can also use std:: without namespace
    // // "\n" -> to insert a new line
    // // cout<<"Hello world2";

    // // cout<<"this is 1st line \n";
    // // cout<<"this is 2nd line"<<endl;

    // // \n and endl -> are used to break lines
    // // \n => escape sequence
    // // \n - breaks line and goes to next line
    // // \t - gives tab space
    // // \\ - used to insert backslash
    // // \" - used to insert a double quote character

    // // => single line comment
    // /*
    //         Multiline comment
    //  */
    // // variables in cpp
    // // type variable_name = value;
    // // declaration =>   int var;
    // // Assigning => var = 2;
    // int a = 1;//used to store whole numbers 123 , -123
    // double d = 2;//used to store floating point numbers 19.99 
    // char c = 3;//used to store characters - 'a' , 'b'
    // string s = "this is a string";//used 
    // bool b = true;//used to store true or false
    // // 0 -> false and 1 -> true
    // cout<<"I am a string "<<s<<"used string data type"<<"\n";

    // // we can also perform operations
    // // int - mathematical operations
    // int a = 1;
    // int b = 2;
    // int s = 0;
    // s = a + b;
    // cout<<s;

    // // Identifiers - variables must be identified with unique names and these are called as identifiers
    // int m = 60;
    // int minutesPerHour = 60;
    // cout<<m<<" "<<minutesPerHour<<"\n";// 60 60

    // // constants - unchangeable and read-only
    // // const datatype variable_name = value;
    // const float pi = 3.14;

    

    /*
// void fun(int &a,int &b){
//     // function that returns more than two variables without using any return type using its reference
//     b=2;
//     a=3;
// }
// int main(){
//     int a = 2,b = 3;
//     fun(a,b);
//     cout<<a<<" "<<b<<" "<<endl;
// }
*/
// // passing a array to a function
// void fun(int a[]){
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int a[] = {1,2,3,4,5};
//     fun(a);
//     for(auto i:a){
//         cout<<i<<" ";
//     }
// }
/*
function overloading - it is a method in which multiple functions can have the same name but different parameters
int fun(int a , int b){
    return a+b;
}
float fun(float a , float b){
    return a+b;
}
string fun(string a , string b){
    return a+b;
}
cout<<fun(2,3)<<endl;cout<<fun(2,3)<<endl;cout<<fun("2","3")<<endl;
    /*
    o/p :
    5
    5
    23
    */


    return 0; // -> ends the function


}