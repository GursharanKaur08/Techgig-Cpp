/* Modulus 
You just need to take two numbers as input from stdin and you need to find modulus of them.

Input Format
You will be taking two numbers as an input from stdin one on each line respectively.

Constraints
1 <= A, B <= 10^5

Output Format
You need to print the output of the modulus to stdout. */

#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	c=a%b;
	cout<<c;
}

