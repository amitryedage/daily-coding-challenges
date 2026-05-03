#include<iostream>
using namespace std;
//Brute Force apporach 
int LCM(int a,int b){
	int maxelement=max(a,b); //LCM is always greater than max element so we start with max element only 
	while(1){
		if(maxelement%a==0&&maxelement%b==0){
			return maxelement;
		}
		maxelement++;
	}
}
int main(){
	int a,b;
	cout<<"Enter two element to find LCM"<<endl;
	cin>>a>>b;
	int c=LCM(a,b);
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<c<<endl;
}