#include <string>
#include <iostream>

using namespace std;

void buble_sort(string arr[], int length) {
  int j = 0;
  string temp;
  bool not_sorted = true;

  while (not_sorted) {
    not_sorted = false;
    j++;

    for (int i = 0; i < length - j; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

        not_sorted = true;
      }
    }
  }
}

void print_array(string arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << "\t";
  }

  cout << endl;
}

int main() {
  string nama[] = { "siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi" };
  int length = sizeof(nama) / sizeof(nama[0]);

  buble_sort(nama, length);
  print_array(nama, length);

  return 0;
}