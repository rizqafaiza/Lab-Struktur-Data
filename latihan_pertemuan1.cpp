#include <iostream>

int main(){
    int nilai[3][3][4];
    int isi=2;

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<4; k++){
                nilai[i][j][k] = isi;
                isi+=2;
                std::cout << nilai[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}
