#include "vetor.h"
#include <iostream>

int main(){
	Vetor v1;      // []
    
	v1.push_back(10);  // [10]
	v1.push_back(20);  // [10,20]
	v1.push_back(30);  // [10,20,30]
	v1.push_back(40);  // [10,20,30,40]
	v1.push_back(50);  // [10,20,30,40,50]
    v1.push_front(23); // [23, 10, 20, 30, 40, 50]
	
	v1.erase(3);         // [23,10,20,40,50]
	v1.insert(3, 25);    // [23,10,20,25,40,50]
	v1.replace(4, 30);   // [23,10,20,25,30,50]
    v1.pop_back();       // [23,10,20,25,30]
    v1.pop_front();      // [10,20,25,30]
    v1.erase(2);         // [10,20,30]
    v1.back();
    //v1.clear();          // []
    v1.print();          
}