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
