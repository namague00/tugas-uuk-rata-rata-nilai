#include <iostream>

using namespace std;

float ratarata(int arr[],int ukuran){
    float jumlah = 0;
    for (int i = 0; i < ukuran; i++){
        jumlah += arr[i];
    }
    float seluruh = jumlah / ukuran;
    return seluruh;
}
int main() {
    int a = 4;
    int nilai[a];
    
    cout << "masukkan "<< a << " nilai" << endl;
    for (int i = 0; i < a; i++){
        cout << "nilai "<< (i+1)<< " :";cin >> nilai[i];
    }
    float seluruh = ratarata(nilai,a);
    
    for(int i = 0;i<a;i++){
        cout << "nilai ke "<<(i+1)<< " adalah" << nilai[i] << endl;
    }
    cout << "rata rata adalah " << seluruh << endl;
    
}