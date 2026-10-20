#include <iostream>

int search(int data[], int n, int target){
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(data[mid] == target){
            return mid;
        } else if(data[mid] > target){
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    return -1;
}

void sorting(int data[], int n){
    for(int i=0; i<n-1; i++){
        for(int j = i; j<n; j++){
            if(data[j]<data[i]){
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void isi(int data[], int n){
    std::cout<< "Masukkan data:" << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << i +1 << ". ";
        std::cin >> data[i];
    }
}

void tampilkan(int data[], int n){
    for(int i = 0; i<n; i++){
        std::cout << data[i] << " ";
    }
}

int main(){
    int n;
    std::cout << "Masukkan Panjang Array: ";
    std::cin >> n;
    int data[n];

    isi(data,n);
    sorting(data, n);
    tampilkan(data,n);
    std::cout << std::endl;

    int target;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> target;
    int hasil = search(data, n, target);

    if(hasil != -1){
        std::cout << target << " berada di indeks ke-" << hasil;
    } else {
        std::cout << "Data tidak ditemukan";
    }

    return 0;
}