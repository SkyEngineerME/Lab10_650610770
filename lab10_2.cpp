#include<iostream>
using namespace std;

void printO(int x,int y){
    int i = 0;
	int j = 0;
	if(x <= 0 || y <= 0){
      cout << "Invalid input";
	}
	else{
	while(i < x){
		j = 0;
		while(j < y){
			cout << 'O';
			j++;
		}
		cout << "\n";
		i++;
	}
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
