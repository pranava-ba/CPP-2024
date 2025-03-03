/*
1.5.2. Multiplication of two float values
Arif came from a very low-income family. However, his father Irfan sent him abroad for the purpose of studying. Arif also concentrated well on his learning keeping in mind his father’s poverty. 
Arif was excellent in mathematics. 

One day Arif had a computer class and his computer teacher asked him to create a programming logic for the mathematics problem of multiplying two numbers of type float. 

Can you help Arif with the logic?

Constraints:
1.00 ≤ var1 ≤ 1000.00
1.00 ≤ var2 ≤ 1000.00

Input Format:
The only line of input has two floating point numbers separated by space

Output Format:
In the only line of output print the result of the multiplication with 4 values after the decimal point.
*/
#include<iostream> 
#include<iomanip> 
using namespace std; 
int main(){ 
→float a; 
float b; 
float c; 
→cin>>a>>b; 
→c=a*b; 
std::cout<<std::fixed<<std::setprecision(4)<<c<<endl; 
}
