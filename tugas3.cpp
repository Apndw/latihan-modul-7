#include <vector>
#include <conio.h>
#include <iostream>

using namespace std;

void print_array(char arr[]) {
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

void insertion_sort(char arr[]) {
  int i, j, tmp, length = sizeof(arr) / sizeof(arr[0]);

  for (i = 1; i < length; i++) {
    j = i;

    while (j > 0 && arr[j - 1] > arr[j]) {
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
      j--;
    }
  }

  cout << endl;
  cout << "Urutan karakter setelah ascending sort: " << endl;
  print_array(arr);

  for (i = 0; i < length; i++) {
    j = i;

    while (j > 0 && arr[j -1] < arr[j]) {
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
      j--;
    }
  }

  cout << endl;
  cout << "Urutan karakter setelah descending sort: " << endl;
  print_array(arr);
}

int main() {
  int pilihan, jumlah;
  char arr[50];

  cout << "Masukkan jumlah data: ";
  cin >> jumlah;

  for (int i = 0; i < jumlah; i++) {
    cout << "Masukkan data ke-" << i + 1 << ": ";
    arr[i] = getche();
    cout << endl;
  }

  cout << endl;

  cout << "Urutan karakter sebelum sorting: " << endl;
  print_array(arr);

  insertion_sort(arr);

  return 0;
}