#include<iostream>
using namespace std;
int main(){


    // array declaration = datatype array_name[array size] ;
    //if initializing  , don't give arraysize .
    int array[] = { 1,2,3,4 } ; // array initializing

    // Size of array - sizeof(array)
    cout<<sizeof(array)<<endl;

    //length of array - sizeof(array)/sizeof(array[0])
    cout<<"Length of array: "<<sizeof(array)/sizeof(array[0])<<endl;

    
    //Now if we create array without initializing its values then it will have some garbage values
    int array2[4];
    cout<<array2[0]<<endl;//Give garbage value -  1998119280
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;

    //so always initialize value to array , either by declaring once or asking from the user.

    //Now accessing/traversing elements of array
    cout<<"Now1"<<endl;
    int length=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<length;i++){//i = index
        cout<<array[i]<<endl; //here i=index
    
    }
    cout<<"Now2"<<endl;
    //cout<<array;

    //For each loop
    cout<<"By 'for each' loop"<<endl;
    for(int elem:array){
        cout<<elem<<endl;

    }

    //while loop
    cout<<"By 'while' loop"<<endl;
    int index=0;
    while(index<length){
        cout<<array[index]<<endl;
        index++; // we can also write array[index++] instead of index++

    }

    cout<<"Now input by user in array\n";
    //Now if we want to take (input value)/(initialize value) from user for the array.
    char vowels[5];

    for(int index=0;index<5;index++){
        cin>>vowels[index];
    }
    for(int index=0;index<5;index++){
        cout<<vowels[index]<<" ";
    
    }
    cout<<endl;
    cout<<endl;
    cout<<"Now 3"<<endl;
    //in case of for each loop for taking input,we need to use reference variable to store value in array
    char vowels2[5];
    for(char &elem:vowels2){
        cin>>elem;
    
    }// if we don't use '&' then it takes input in 'elem' variable and store  in it , but not in vowels2, it stores in 'elem' variable that lies in different memory location than vowels2 so we need to use &
    //its preferable to use for loop instead of for each loop for taking input from the user.
    // if we write &elem --> vowels2 then elem is accessing to memory location of vowels2
    for(int index=0;index<5;index++){
        cout<<vowels2[index]<<" ";
        //cout<<endl;
    }
    // //also we can print directly
    // for(char elem:vowels2){
    //     cout<<elem<<" ";
    // }












}