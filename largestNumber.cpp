// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

int main(){
    //Initializing of the variables
    float num1,num2,num3,ans;

    //Getting user input
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;

    //Finding the Largest number
    if(num1<num3 && num2<num3){
        ans= num3;
    }
    else if(num1<num2 && num3<num2){
        ans= num2;
    }
    else if (num1>num2 && num1>num3){
        ans=num1;
    }

    //Printing the Largest number
    cout<<"The Largest Number : "<<ans<<endl;
    return 0;
}
