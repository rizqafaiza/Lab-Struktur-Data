#include <iostream>

struct Node{
    int data;
    Node* next;

    Node(int isi){
        data=isi;
    }
};

Node* head;
Node* tail;

void tambah_belakang(int isi){
    Node* baru=new Node(isi);
    baru->next=nullptr;

    if(head==nullptr){
        head=baru;
        tail=baru;
    } else {
        tail->next=baru;
        tail=baru;
    }
}

void tambah_depan(int isi){
    Node* baru=new Node(isi);

    if(head==nullptr){
        head=baru;
        tail=baru;
    } else {
        baru->next=head;
        head=baru;
    }
}

void tampilkan(){
    Node* temp=head;
    while (temp!=nullptr){
        std::cout << temp->data << " ";
        temp=temp->next;
    }
}

int main(){
    system ("cls");

    tambah_belakang(100);
    tambah_belakang(92);
    tambah_belakang(45);
    tambah_belakang(87);
    tambah_belakang(71);
    tambah_belakang(99);
    tambah_belakang(95);
    tambah_belakang(60);
    tambah_belakang(55);
    tambah_belakang(88);

    tambah_depan(70);
    tambah_belakang(50);

    //tambah 0
    Node* node1 = new Node(0);
    Node* temp = head;
    while (temp->data!=45){
        temp=temp->next;
    }
    node1->next=temp->next;
    temp->next=node1;

    //hapus
    temp=head;
    while(temp->next->data != 99){
        temp = temp->next;
    }
    Node* hapus=temp->next;
    temp->next=hapus->next;
    delete hapus;

    temp=head;
    while(temp->next->data != 60){
        temp=temp->next;
    }
    hapus=temp->next;
    temp->next=hapus->next;
    delete hapus;
    
    tampilkan();
}