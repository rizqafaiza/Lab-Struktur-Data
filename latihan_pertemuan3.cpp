#include <iostream>

struct Node{
    char data;
    Node* next;

    Node(char huruf){
        data = huruf;
        next = nullptr;
    }
};

Node* top = nullptr;

void tambah_stack(char huruf){
    Node* baru = new Node(huruf);
    if(top == nullptr){
        top = baru;
    } else {
        baru->next = top;
        top = baru;
    }
}

void tampilkan(){
    Node* temp = top;
    std::cout << "isi stack: " << std::endl;
    while (temp != nullptr){
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void input(int jumlah){
    char huruf;
    for (int i = 0; i < jumlah; i++){
        std::cout << "huruf ke- " << i+1 << ": ";
        std::cin >> huruf;
        tambah_stack(huruf);
    }
}

int main(){
    int jumlah;

    std::cout << "Masukkan jumlah huruf: ";
    std::cin >> jumlah;
    
    input(jumlah);
    std:: cout << std::endl;
    tampilkan();
}