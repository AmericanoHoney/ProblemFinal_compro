#include<iostream>
#include<iomanip>
using namespace std;

void myMatrix(int **&p, int N) {
    p = new int*[N];
    for(int i = 0; i < N; i++) {
        p[i] = new int[N];
        for(int j = i; j < N+i; j++) {
            p[i][j-i] = j; // You may need to adjust this based on your requirement
        }
    }
}

void freeSpace(int **p, int N) {
    for(int i = 0; i < N; i++) {
        delete[] p[i];
    }
    delete[] p;
}

int main() {
    int **p;
    int N=5;
    // cout << "N = ";
    // cin >> N;
    myMatrix(p, N);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << setw(4) << p[i][j];
        }
        cout << "\n";
    }
    freeSpace(p, N);
    return 0;
}
