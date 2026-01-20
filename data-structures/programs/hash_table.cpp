#include <iostream>
using namespace std;

int SIZE = 10;
int hashFunc(int key) { return key % SIZE; }

int probe(int H[], int key) {
    int index = hashFunc(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
        i++;
    return (index + i) % SIZE;
}

void insert(int H[], int key) {
    int index = hashFunc(key);
    if (H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}

int main() {
    int HT[10] = {0};
    insert(HT, 12);
    insert(HT, 25);
    insert(HT, 35);
    insert(HT, 26);
    
    cout << "Hash Table: ";
    for(int i=0; i<10; i++) cout << HT[i] << " ";
    return 0;
}
