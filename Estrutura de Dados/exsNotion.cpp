#include <iostream>
#include <string.h>

using namespace std;

int stringFoundFirst(string s, char c){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            return i;
        }
    }

    return -1;
}

bool isLetter(char letter){
    string letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; i < letras.size(); i++){
        if(letter == letras[i]) return true;
    }

    return false;
}

bool checkName(string s){
    for(int i = 0; i < s.size(); i++){
        bool isLetters = isLetter(s[i]);
        bool isLastLetter = isLetter(s[i-1]);
        bool isNextLetter = isLetter(s[i+1]);

        if(!isLetters && s[i] != ' '){
            return false;
        }

        if(s[i] == ' ' && (!isLastLetter || !isNextLetter)){
            return false;
        }
    }

    return true;
}

int *createArray(int size, bool asc){
    int *array = new int[size];

    if(asc){
        for(int i = 1; i <= size; i++){
            array[i] = i;
        }
    }
    else{
        for(int i = size; i > 0; i--){
            array[size - i] = i;
        }
    }

    return array;
}

int* arrayConcat(int *v1, int size1, int* v2, int size2){
    int *v3 = new int[size1 + size2];
    int i;

    for(i = 0; i < size1; i++){
        v3[i] = v1[i];
    }

    for(int j = 0; j < size2; j++){
        v3[i] = v2[j];
        i++;
    }

    return v3;
}

int* arrayMerge(int *v1, int size1, int *v2, int size2){
    int *v3 = new int[size1 + size2];
    int index1 = 0;
    int index2 = 0;
    int i = 0;

    for(i; i < size1 + size2; i++){
        if(index1 >= size1 || index2 >= size2){
            break;
        }

        if(v1[index1] < v2[index2]){
            v3[i] = v1[index1];
            index1++;
        }
        else{
            v3[i] = v2[index2];
            index2++;
        }
    }

    while(index1 < size1){
        v3[i] = v1[index1];
        i++;
        index1++;
    }

    while(index2 < size2){
        v3[i] = v2[index2];
        i++;
        index2++;
    }

    return v3;
}

void printArray(int *array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main(){
    int pos = stringFoundFirst("o rato roeu a roupa do rei de roma", 'r');
    cout << pos << "\n";

    cout << isLetter('a') << "\n";

    cout << checkName(" Chuck Kick  Norris ") << "\n";

    int *array = createArray(5, false);
    printArray(array, 5);
    delete[] array;

    int v1[3] = { 2, 9, 6 };
    int v2[4] = { 3, 7, 7, 9 };
    int* v3 = arrayConcat(v1, 3, v2, 4);
    printArray(v3, 7);
    delete[] v3;

    int vetor1[5] = {1,2,4,6,8};
    int vetor2[4] = {3,5,9,20};
    int* vetor3 = arrayMerge(vetor1, 5, vetor2, 4);
    printArray(vetor3, 9);
    delete[] vetor3;

}