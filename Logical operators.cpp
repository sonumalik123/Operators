#include<iostream>// preprocessor directive
using namespace std;

int main()// start program from main
{
 string operators;// string value
 operators= "logical operators";//assign value to operators
cout<<operators<<endl;//printing the operators value
int x=5,y=6;// assign integar value to x and y
cout<<(x>3&&y<6)<<endl;//use AND operators
cout<<(x>3||y<6)<<endl;//use OR operator
cout<<!(x>3&&y<6);//use NOT operator
    return 0;
}