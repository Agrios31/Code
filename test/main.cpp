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
    cout<<*randomNumber<<" ";

        //I am adding some test comments
        //If randomNumber is 7, print lucky number 7
        if(*randomNumber==7){
            cout<<"Lucky number 7"<<endl;
        }
    }

    //Clean up pointers
    delete randomNumber;

    cout<<endl;

    //Print the numbers 1-10
    for(int i=1; i<=10; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    //Print the numbers 10-1
    for(int i=10; i>=1; i--){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}