#include <iostream>
using namespace std;

template<typename T>

T* diziYazTers(T Dizi[],int elemanSayisi){

    T* ptr = Dizi + elemanSayisi; 
    for(int i = elemanSayisi; i > 0; --i){
       cout<< *(ptr+i) <<" "<<endl;
    }

}


int main(){

    int dizi1[3] = {1,2,3};


    diziYazTers<int>(dizi1,3) ;


    return 0;
}