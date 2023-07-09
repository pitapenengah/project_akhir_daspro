#include <iostream>
using namespace std;

void swap (int &a, int &b);
int data[5]= {250000,200000,300000,150000,400000};
int jml =5;
void sorting_selection();
void swap (int &a, int &b);

struct alatberat{
	string nama;
    int tahunPembuatan;
    int kapasitas;
    double hargaSewa;
    bool tersedia;

};

int main(){
alatberat alatBerat[5];
       alatBerat[0]  =  {"Bulldozer", 2018, 500, 250000, true};
       alatBerat[1]  =  {"Excavator", 2019, 300, 200000, true};
       alatBerat[2]  =  {"Forklift", 2017, 400, 300000, false};
       alatBerat[3]  =  {"Loader", 2020, 200, 150000, true};
       alatBerat[4]  =  {"Crane", 2016, 1000, 400000, true};
    
    cout << "Daftar Alat Berat:\n";
    for (int i=0; i<5; i++) {
    	cout<<"========================================= "<<endl;
		cout << "Nama: " << alatBerat[i].nama << endl;
        cout << "Tahun Pembuatan: " << alatBerat[i].tahunPembuatan << endl;
        cout << "Kapasitas: " << alatBerat[i].kapasitas <<" kg"<< endl;
        cout << "Harga Sewa: Rp." << alatBerat[i].hargaSewa <<endl;
        cout << "Status: " << (alatBerat[i].tersedia ? "Tersedia" : "Sedang Disewa") << endl;
		cout << endl;
    }
    cout<<"Harga sewa :"<<endl;
    for(int i=0;i<jml;i++){
    cout<<alatBerat[i].nama<<" Rp."<<data[i]<<endl;
}
cout<<endl;
    cout<<"Harga sewa dari yang termurah : "<<endl;
    sorting_selection();
     for(int i=0;i<jml;i++){
    cout<<alatBerat[i].nama<<" Rp."<<data[i]<<endl;
    
}
    int jumlahalat;
    cout << "\nMasukkan jumlah alat berat yang ingin dipesan: ";
    cin >> jumlahalat;

    double totalHarga = 0;
    cout << "Masukkan nama alat berat yang ingin dipesan (pisahkan dengan spasi): "<<endl;
    for (int i = 0; i < jumlahalat; i++) {
        string namaalat;
        cin >> namaalat;
        for (int j = 0; j < 5; j++) {
            if (alatBerat[j].nama == namaalat && alatBerat[j].tersedia) {
                totalHarga += alatBerat[j].hargaSewa;
                break;
            }
        }
    }
    cout << "Total harga sewa untuk " << jumlahalat << " alat berat: Rp." << totalHarga << endl;

    return 0;
}

void sorting_selection(){
 int i,j; 
 for(i=0;i<jml-1;i++){
 	for(j=i+1;j<jml;j++){
	 if(data[j] < data[i]){
	 	swap(data[j],data[i]);
	 	}
	}
 }
}

void swap(int&a, int&b){
	int temp=a;
	a=b;
	b=temp;
	
}
