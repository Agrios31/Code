#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;

//Generate a random number between 1 and 10
int generate_random_number(){
    return rand() % 10 + 1;
}

int main(){
    //Generate a random number between 1 and 10
    srand(time(0));
    rand();  //Burns first call to random so that numbers are truly random
    //Pointer to a random number
    int *randomNumber=new int;

    //Generate Mulitple random numbers between 1 and 10
    for(int i=0; i<10; i++){
    *randomNumber=generate_random_number();
    cout<<*randomNumber;
    }

    //Clean up pointers
    delete randomNumber;
    

    cout<<endl;

    //Print the numbers 1-10
    for(int i=1; i<=10; i++){
        cout<<i<<"";
    }

    //Print the numbers 10-1
    

    return 0;
}