# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Rifka Annisa Swasthi</p>

## Dasar Teori
    Array adalah kumpulan data dengan nama yang sama dan tipe data yang sama dalam urutan tertentu. [1]
Sebuah array dicirikan oleh jenis elemen yang dikandungnya dan olehnya
bentuknya. Misalnya, matriks dapat direpresentasikan sebagai array berbentuk (M ×N) yang berisi
bilangan, misalnya bilangan floating point atau bilangan kompleks.[2]

Array memiliki dua macam yaitu array satu dimensi dan multi dimensi atau lebih dari satu dimensi, berikut macam-macam array


1. Array satu dimensi

Array satu dimensi adalah array yang terdiri dari n buah kolom atau terdiri dari satu subskrip array saja, cara mengaksesnya adalah dengan menuliskan indeks didalamnya, deklarasi array satu dimensi dengan [], tipe_ data nama_array [jumlah
_elemen];


2. Array Dua Dimensi


Array dua dimensi sering digambarkan dengan sebuah matriks, merupakan perluasan dari array satu dimensi. Array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama [3]. Deklarasi array dua dimensi tipe_data nama_var_array[batas_baris][batas_kolom];


3. Array Multidimensi 


Array 3 dimensi adalah kumpulan dari elemen-elemen yang terorganisir dalam bentuk tiga dimensi. Pada dasarnya array tiga dimensi adalah kombinasi lanjutan dari array satu dan dua dimensi array. Di dalam array multi dimensi terdapat 3 koordinat x,y,z atau masing-masing berisi tiga baris dan dua kolom. untuk mengkases array tiga dimensi ini menggunakan tiga perulangan.  Looping pertama untuk mengakses setiap blok, looping kedua untuk mengakses setiap baris pada blok tersebut, dan looping ketiga untuk mengakses setiap kolom pada baris tersebut. [3]


Agar array dapat diakses lebih mudah dengan menggunakan algoritma pengurutan berbasis penggabungan untuk meningkatkan algoritma pengurutan. Dengan mengambil alih daftar awal saat membuat tagarray dan mengeksploitasi array tag untuk menggabungkan daftar, pengurutan array bekerja lebih stabil dan efisien daripada pengurutan gabungan. Pengurutan array memiliki kompleksitas waktu kasus terbaik O(n) karena menggunakan array tag, dan jika array tag kosong, daftar sudah diurutkan dan algoritma berhenti setelah n iterasi. [5]

## Guided 

### 1. Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    //Deklarasi Array
    int arr[2][3][3];
    // Input Elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
Kode di atas digunakan untuk menginput, menampilkan dari array tersebut. dalam program input array tersebut mengunakan nested loop (loop bersarang) untuk mengisi nilai array. Loop pertama digunakan untuk mengakses blok array, loop kedua untuk mengakses baris di setiap blok, dan loop ketiga untuk mengakses elemen di setiap baris.

Setelah array diisi dengan nilai, program menggunakan loop yang sama untuk menampilkan nilai array sesuai indeksnya, program ini menghasilkan output yang mencakup tiga bagian: input nilai array, input nilai array dengan indeksnya, dan tampilan nilai secara berurutan.

### 2. Mencari Nilai Maksimal Pada Array

```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i=0; i<a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array [i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << "berada di Array ke " << lokasi << endl;
}
```
Kode di atas digunakan untuk memasukkan panjang array, kemudian memasukkan nilai-nilai array tersebut, dan menghitung nilai maksimum yang ada didalam array.

Input niai array; program meminta pengguna untuk memasukkan nilai-nilai array menggunakan loop for, kemudian setelah diisi program menggunakan loop for lagi untuk mencari nilai maksimum dan menyimpan posisi nilai maksimumnya, setelah ditemukan program menampilkan nilai maksimum beserta posisinya dalam array menggunakan cout.


## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
Data Array : 1 2 3 4 5 6 7 8 9 10
Nomor Genap : 2, 4, 6, 8, 10
Nomor Ganjil : 1, 3, 5, 7, 9

```C++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> dataArray;
    int num;

    // Input data dari pengguna
    cout << "Masukkan 10 angka: ";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        dataArray.push_back(num);
    }

    // Menampilkan data array yang dimasukkan
    cout << "Data Array: ";
    for (int i = 0; i < 10; i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < 10; i++) {
        if (dataArray[i] % 2 == 0) {
            cout << dataArray[i];
            if (i != 9) cout << ", ";
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < 10; i++) {
        if (dataArray[i] % 2 != 0) {
            cout << dataArray[i];
            if (i != 9) cout << ", ";
        }
    }
    cout << endl;

    return 0;
}

```
#### Output:
![Screenshot 2024-03-24 142159](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Aggignment/assets/162097297/f0cb6e87-dd28-4dff-8f98-4cf82667bc6a)


Kode di atas digunakan untuk menampilkan nomor genap dan nomor ganjil dengan memasukan 10 angka terlebih dahulu dan menyimpannya kedalam vektor array. Kemudian setelah diinputkan 10 datanya maka program akan menampilkan data array dengan loop untuk menampilkan dan mengecek nomor ganjil dan untuk menanpilkan nomor genap dengan menggunakan loop juga untuk mengecek dan menanmpilan nomor genap dari data array. 

dilihat dari hasil maka didapat angka ganjil 1,1,3,5,7,9 dan angka genap 2,4,6,8

#### Full code Screenshot:
![Screenshot 2024-03-24 142259](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Aggignment/assets/162097297/99a4ef1d-5ff7-401d-9ff6-e4aaa8053084)


### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!


```C++
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input ukuran array tiga dimensi
    cout << "Masukkan jumlah blok array: ";
    cin >> x;
    cout << "Masukkan jumlah baris array: ";
    cin >> y;
    cout << "Masukkan jumlah elemen array: ";
    cin >> z;

    // Deklarasi array tiga dimensi sesuai dengan ukuran yang diinputkan
    int arr[x][y][z];

    // Input elemen array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Input Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Output array
    cout << "\nData Array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}

```
#### Output:
![Screenshot 2024-03-24 143037](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Aggignment/assets/162097297/de602bc7-5690-42fd-9c57-9b9a80cd3a3d)


Kode di atas digunakan untuk menginputkan ukuran array tiga dimensi dan kemudian menginput elemen-elemnnya serta menampilkan data array tersebut. Menggunakan nested loop untuk menginput elemen-elemen array sesuai dengan ukuran yang diinput oleh pengguna. loop pertama untuk mengakses blok array, loop kedua untuk mengakses baris disetiap blok dan loop ketiga untuk mengakses elemen disetiap baris, setelah elemen array diinput, program menggunakan nested loop lagi untuk menampilkan elemen-elemen array beserta indeksnya, return 0; untuk program yang telah selesai dan mengembalikan nilai 0.

#### Full code Screenshot:
![Screenshot 2024-03-24 143153](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Aggignment/assets/162097297/a6a2db8a-a73d-4b7e-a9ba-c738e7fbd116)


### 3.Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!


```C++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Mendeklarasikan array dengan ukuran sesuai input pengguna
    int arr[n];

    // Input elemen array
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    int choice;
    do {
        // Menampilkan menu
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Hitung nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Mencari nilai maksimum
                int maks = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maks) {
                        maks = arr[i];
                    }
                }
                cout << "Nilai maksimum: " << maks << endl;
                break;
            }
            case 2: {
                // Mencari nilai minimum
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                // Menghitung nilai rata-rata
                double sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                double average = sum / n;
                cout << fixed << setprecision(2);
                cout << "Nilai rata-rata: " << average << endl;
                break;
            }
            case 4:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih 1-4.\n";
        }
    } while (choice != 4);

    return 0;
}

```
#### Output:
![Screenshot 2024-03-24 143908](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Aggignment/assets/162097297/950fcca0-5a10-4ae3-9998-02ac65bb9266)


Kode di atas digunakan untuk menampilkan nilai maksimun dan minimun dengan tampilan menu dari memasukkan jumlah elemen array n dan mendeklarasikan array dengan ukuran sesuai input pengguna, selanjutnya pengguna diminta memasukkan elemen-elemen array dan program menampilkan menu dengan pilihan mencari nilai maksimum, nilai minumum, rata-rata atau keluar dari program.

Setelah pengguna memilih menu yang diinginkan dan memasukkan angka sesuai pilihan program akan melakukan operasi sesuai pilihan pengguna dengan menggunakan switch-case dan menampilkan hasilnya. loop do while untuk program terus berjalan hingga pengguna memilih keluar dari program. program mengakhiri eksekusi dengan mengembalikan nilai 0 pada fungsi main.

#### Full code Screenshot:
![Screenshot 2024-03-24 144013](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Aggignment/assets/162097297/32072f32-d975-4e41-9121-b199e5fe0a07)



## Kesimpulan
Ringkasan Pembelajaran

Array adalah tipe data terstruktur yang terdapat dalam urutan tertentu dengan isinya adalah elemen dan urutan pengisian disebut indeks, array terdapat 2 macam yaitu Array satu dimensi dan multi dimensi, dimana array satu dimensi hanya terdapat satu baris dan array multidimensi terdapat baris dan kolom, array multidimensi adalah array yang dikombinasikan dari array satu dimensi. Agar array dapat diakses dengan mudah maka diperlukan algoritma berbasis penggabungan untuk meningkatkan algoritma pengurutan sehingga array memiliki kompleksitas waktu pengurutan terbaik O(n).


## Referensi
[1] Prof. Dr. Ema Utami, S.Si., M.Kom. dan Windha Mega Pradnya Dhuhita, S.Kom, M.Kom. 2017, Langkah Mudah Belajar Struktur Data Menggunakan C/C++, Jakarta:PT Elex Media Komputindo.

[2] Stéfan van der Walt,S. Chris Colbert, Gael Varoquaux. 2011, The NumPy array: a structure for efficient
numerical computation, USA: Cornell University.

[3] Painem, S.Kom, M.Kom
Reva Ragam, S.Kom., M.Kom
Ir. Moch. Sjukan. 2019, Jakarta: Fakultas Teknologi Informasi Universitas Budi Luhur.

[4] Sigit N.2023, Contoh Array 3 Dimensi di C++: Implementasi dan Contoh dengan konsep Multidimensi Array, PemburuKode.

[5] Huang Xi, Zhijing Liu, Jinyang Li. 2019, Array sory: an adaptive sorting algorithm on multi-thread, Taibai South Road No. 2, Xian: The institution of Engineering and Technology.