#include <iostream>
#include<string.h>
using namespace std;

class array{
	public:
		void input();
    void proses();
		void output();
	private:
		int jumlah;
		string jenis[30];
	 	string judul[30];
		string penulis[30];
		string array2d[10][10];
    int hasil;
};

void array::input(){
	cout<<"Masukkan jumlah buku : ";
	cin>>jumlah;
	for(int i = 0; i < jumlah; i++) {
		cout<<"==========================="<<endl;

		cin.ignore();
		for (int j = 0; j < 1; j++) {
			cout<<"Jenis buku : ";
			getline(cin, jenis[i]);
		}
		for (int j = 0; j < 1; j++) {
			cout<<"Judul buku : ";
			getline(cin,judul[i]);
		}
		for (int j = 0; j < 1; j++) {
			cout<<"Penulis   : ";
			getline(cin,penulis[i]);
		}
		cout<<"==========================="<<endl<<endl;
	}
}

void array::proses(){			//untuk mengkonversi array 1d ke 2d
	for(int j=0;j<jumlah;j++){
		for(int k=0;k<1;k++)          {
		array2d[j][0]=jenis[j];
		array2d[j][1]=judul[j];
		array2d[j][2]=penulis[j];
		}
	}
} 

void array::output(){
  cout<<endl;
	cout<<"------------------------------------------"<<endl;
  cout<<"|    Jenis Buku    |      Judul      |     Penulis    |"<<endl;
  cout<<"|-----------------------------------------|"<<endl;
  for (int j=0;j<jumlah;j++) 
  {
  	for(int k=0; k<1; k++){
  		cout<<"|\t\t"<<array2d[j][0]<<"\t\t|\t "<<array2d[j][1]<<"\t\t\t|\t " <<array2d[j][2];
  cout << endl;
	  }
  
  }
  cout<<endl;
	}

int main() {
	array out;
	out.input();
  out.proses();
	out.output();
	return 0;
}