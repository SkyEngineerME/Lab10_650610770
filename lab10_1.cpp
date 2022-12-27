#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay,Prev,Int,Tot,Pay,New;
	int year =0;;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
    
	Prev = loan;
    Int = loan*(rate/100);
	Tot = Prev+Int;
    Pay =pay;
	New = Tot-Pay;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	do{
		year += 1;
    if(Tot < Pay)Pay = Tot;
    New = Tot-Pay; 
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
 
	cout << setw(13) << left << Prev;

	cout << setw(13) << left << Int;

	cout << setw(13) << left << Tot;

	cout << setw(13) << left << Pay;

	cout << setw(13) << left << New;
    
	Prev = New;
	Int = New*(rate/100);
	Tot = Prev+Int;
	if(Tot < Pay)Pay = Tot;
	cout << "\n";
	 	
	}while(New > 0);
	
	return 0;
}
