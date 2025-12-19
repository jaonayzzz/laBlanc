#include<iostream>
using namespace std;
void printO(int i,int j){
	int m,n;
	char o='O';
	if(i<=0||j<=0){cout << "Invalid input";}
	for(m=0;m<i;m++){
		for(n=0;n<j;n++){
			cout << o;
		}
		cout << "\n";
	}
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

