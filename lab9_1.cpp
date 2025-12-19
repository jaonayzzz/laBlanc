#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,PapYe;
	double Interest,Tal,NB=1;
	int Ye=1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> PapYe;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(NB>0){
	cout << fixed << setprecision(2);
	NB=0;
	Interest=(rate)/100;
	Tal=(loan*Interest)+loan;
	NB=Tal-PapYe;
	cout << setw(13) << left << Ye; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << loan*Interest;
	cout << setw(13) << left << Tal;
	if(Tal<PapYe){
		PapYe=Tal;
		cout << setw(13) << left << PapYe;
		NB=0;
    	cout << setw(13) << left << NB;
    	cout << "\n";
    	loan=NB;
    	Ye++;
    	break;
	}
	cout << setw(13) << left << PapYe;
	cout << setw(13) << left << NB;
	cout << "\n";
	loan=NB;
	Ye++;	
	}
	return 0;
}
