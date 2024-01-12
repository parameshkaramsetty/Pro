// Basics of C++
#include<bits/stdc++.h>//includes all the required libraries
using namespace std;//we can use names for objects and variables using standard library
int main(){
    // output
    cout<<"hello world\n";
    // we can also use std:: without namespace
    // "\n" -> to insert a new line
    // cout<<"Hello world2";

    // cout<<"this is 1st line \n";
    // cout<<"this is 2nd line"<<endl;

    // \n and endl -> are used to break lines
    // \n => escape sequence
    // \n - breaks line and goes to next line
    // \t - gives tab space
    // \\ - used to insert backslash
    // \" - used to insert a double quote character

    // => single line comment
    /*
            Multiline comment
     */
    // variables in cpp
    // type variable_name = value;
    // declaration =>   int var;
    // Assigning => var = 2;
    int a = 1;//used to store whole numbers 123 , -123
    double d = 2;//used to store floating point numbers 19.99 
    char c = 3;//used to store characters - 'a' , 'b'
    string s = "this is a string";//used 
    bool b = true;//used to store true or false
    // 0 -> false and 1 -> true
    cout<<"I am a string "<<s<<"used string data type"<<"\n";

    // we can also perform operations
    // int - mathematical operations
    int a = 1;
    int b = 2;
    int s = 0;
    s = a + b;
    cout<<s;

    // Identifiers - variables must be identified with unique names and these are called as identifiers
    int m = 60;
    int minutesPerHour = 60;
    cout<<m<<" "<<minutesPerHour<<"\n";// 60 60

    // constants - unchangeable and read-only
    const float pi = 3.14;

    



    return 0; // -> ends the function
}