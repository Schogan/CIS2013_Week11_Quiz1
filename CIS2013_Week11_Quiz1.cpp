#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	
		
int cont = 1;
	
	
		int rows;
		int computers[1];
		int GCRow = 1;
		int GCDesk = 1;
		int Trows[1];
		int Tcomputers[1];
		
		
		int *Nrows;
		Nrows= new int [rows];
		
		//int *Ncomputers;
		//Ncomputers= new int [computers];
		
		int room[Trows][Tcomputers];
		
		cout << "How many rows would you like?" << endl;
		cin >> rows;
		
		//int *a;
		//a= new int[rows];
		
		for (int i=1;i<rows;i++){
			cout << "The number of computers in row " << i << "should be: ";
			cin >> computers[i];
			//cin >> computers;
		}
		
		/*for (int i=0;i<rows;i++){
			cout << computers[i];
		}*/
		
		
	while (cont != 0){
		for(int i=1; i < rows; i++){
			cout << 'x';
			cin >> Trows[i];
			for(int j=0; j < computers[i]; j++){
				//cout << room[i][j] << "XXX";
				cout << " --- ";
				cin >> Tcomputers[j];
			}
			cout << endl;
		}
		
		cout << "what grade would you like to change?" << endl;
		cout << "Row: ";
		cin >> GCRow;
		cout << "Desk: ";
		cin >> GCDesk;
		
		for(int i=0; i < rows; i++){
			
			for(int j=0; j < computers[i]; j++){
				cout << room[i][j] << "???";
			}
			cout << endl;
		}
		
		cout << "Do you want to continue? y=1 n=0" << endl;
		cin >> cont;
		
		//delete [] a;
	}
	return 0;
}