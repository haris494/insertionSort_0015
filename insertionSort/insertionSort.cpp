#include <iostream>
using namespace std;

int arr[20];	// Membuat Array dengan panjang data 20
int n;			// Membuat Variable inputan n

void input() {	//procodedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array :"; // Membuat Inputan Jumlah element Array
		cin >> n;									// memanggil variable inputan n 

		if (n <= 20) {								// Membuat Kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;								// Membuat jarak per baris program
	cout << "======================" << endl;	// Membuat tampilam susunan date element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)					// Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (1 + 1) << "; ";	//Memasukkan atau menginputkan nilai data n
		cin >> arr[1];							// Menyimpan nilai data n kedalam array arr
	}
} 

void insertionsort() {							// Prodecure Insertionsort 

	int temp;									// Membuat variable data temprorar atau penyimpanan sementara
	int j;										// Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {				// Looping dengan 1 dimulai

		temp = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j] > temp)

		{
			arr[j = 1];
			j--;
		}

		arr[j + 1] = temp; 

		cout << "\nStep " << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
	}
} 

void display() {		// Procedure Display
	cout << endl;
	cout << "\==================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display(); 
} 
	



	