//1.-pasang pass=1 (sampai n-1)
 // -ulangi langkah 3 untuk j mulai dari nol sampai n-1-pas
 // -jika elemen indek j lebih besar dari padaindek j+1 tukar kedua elemen
 // -kenaikan pass dari 1
 // -jika pass <= n-1,ke step 2
//2..// secara naik dari besar ke kecil.
// -mengurutkan secara fisik bukan dengan logika.
//3.dengan menggunakan bubble short karna bubble short memiliki orde pertumbuhan berbentuk kurva kuadrat untuk sorting data yang kecil jika data sudah ada 
  //yang tersusun maka dia akan otomatis pindah ke tahan berikutnya jadi kita tidak bersusah payah lagi untuk meswaapnya.


#include <iostream>
using namespace std;

int ardi[23];
int a;

void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";   //output ke layar
		cin >> a; //input dari pengguna
		if (a <= 23) //jika n kurang dari atau sama dengan 23
			break; //keluar dari loop
		else {     //jika n lebih dari 23
			cout << "\narray dapat mempunyai maksimal 23 elemen.\n"; //output ke layar
		}
	}

	cout << "===================" << endl; //output ke layar
	cout << "masukan elemen array" << endl;//output ke layar
	cout << "===================" << endl; //output ke layar

	for (int i = 0; i < a; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> ardi[i];
	}
}void InsertionSort() {
	int i, temp, j;

	for (i = 1; i <= a - 1; i++) { // step 1

		temp = ardi[i]; // step 2

		j = i - 1; // step 3

		while (j >= 0 && ardi[j] > temp)  // step 4
		{
			ardi[j + 1] = ardi[j]; // step 4a
			j--; // step 4b
		}
		ardi[j + 1] = temp; // step 5
	}

}
void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < a; j++) {
		cout << ardi[j];
		if (j < a - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << a - 1 << endl;
	cout << endl;
}
int main()
{
	input();
	InsertionSort();

	display();
	return 0;

}