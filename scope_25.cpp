#include<iostream>
using namespace std;

string name="Om tiwari"; //Global Scope

void fun(){

    int x=10;//fun
    for(int y=0;y<5;y++){
        x=x+y;
        int z=x*x;
    }
    //cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    cout<<name<<endl;
}

int main(){

    cout<<name<<endl;
    name="Sarthak";
    fun();
    //cout<<x<<endl;  = here x is not accessible because it is local to fun.
    return 0;


}