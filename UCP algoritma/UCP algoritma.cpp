// 1. Insertion Sort membandingkan satu per satu lalu baru diurutakan dari yang terkecil hingga yang terbesar sehingga terurutlah angka yang terkecil hingga terbesar
// 2. Insertion Sort membandingkan satu per satu lalu baru diurutakan dari yang terkecil hingga yang terbesar sehingga terurutlah angka yang terkecil hingga terbesar
// 3.Ini tergantung jumlah algoritma array yang ditentukan sebelum disortir sehingga kita mengetahui jumlah langkah tersebut jika tidak maka kita tidak mengetahui jumlah langkahnya
// 4. 

#include <iostream>
using namespace std;
int DAVIN[75], n;
void input() { //procedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; //output ke layar
        cin >> n; //input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break; // keluar dari loop
        else {     // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";// output ke layar

        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ":"; // Output ke layar
        cin >> DAVIN[i]; // Output dari pengguna

    }
}

void InsertionSort() {

    int i, n, temp, j;
    int DAVIN[75];

    for (i = 1; i <= n - 1; i++) {//step 1
        temp = DAVIN[i];//ste 2
        j = i - 1;//step 3
        while (j >= 0 && DAVIN[j] > temp) //step 4
        {
            DAVIN[j - 1] = DAVIN[j]; //step 4a
            j = j - 1; // step 4b
        }
        DAVIN[j - 1] = temp; // step 5


    }

}
void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << DAVIN[j]; // Menampilkan array
        if (j < n - 1) {
            cout << " -->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl; // Menampilkan jumlah dari pass
    cout << endl;
    cout << endl;

}

int main()
{
    input();

    InsertionSort();
    display();

    system("pause");
    return 0;
}
