#include <iostream>

int mdc(int x, int y){
    if( y <= x && x%y == 0){
        return y;
    }

    if(x < y){
        mdc(y, x);
    }else{
        mdc(y, x%y);
    }
}

int main(){
    int valor = mdc(24, 36);
    std::cout << "valor: " << valor << "\n";
}