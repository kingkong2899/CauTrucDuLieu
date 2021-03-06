#include <iostream>
using namespace std;

void nhap(int *&a, int &n){
    cout << "Tong so phan tu trong mang: "; cin >> n;
    a = new int [n];
    for(int i=0; i<n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat(int *a, int n){
    for(int i=0; i<n; i++)  cout << a[i] << " ";
    cout << endl;
}

void sort(int *a, int n){
    for(int i=0; i<n-1; i++){
        int Min = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[Min]) Min = j;
        }
        if(Min != i){
            int tg = a[Min];    a[Min] = a[i];  a[i] = tg;
        }
    }
}

int main(){
    int *a; int n;
    nhap(a, n);
    sort(a, n);
    cout << "Mang vua nhap sau khi sap tang la: ";  xuat(a, n);
    return 0;
}