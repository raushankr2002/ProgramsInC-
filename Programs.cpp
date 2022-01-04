#include<iostream>
#include<cmath>
using namespace std;cout
int main()
{
    //WAP To Check Given Number Is Prime or Not//
    /*int num,flag=0;
    cout<<"Enter Number ::";
    cin>>num;
    for(int i=2; i<sqrt(num); i++){
        if(num % i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Number is Prime...";
    }
    else{
        cout<<"Number is not prime..";
    }*/
//******************************************************************//
    //WAP To Find Factorial Of A Number//
    /*int num, fact=1;
    cout<<"Enter Number :: ";
    cin>>num;
    while (num !=0)
    {
        fact = fact*num;
        num--;
    }
    cout<<"Factorial = "<<fact;
    */
   
//**********************************************************************//
    //WAP To Find Factorial Of A Number Using Recursion//
//**********************************************************************//    
    //WAP To Reverse A Number//
    /*int num,rem;
    int rev=0;
    cout<<"Enter Number :: ";
    cin>>num;
    int temp =num;
    while(num !=0){
        rem = num % 10;
        rev = rev*10 + rem;
        num = num/10;
    }    
    cout<<"Reverse of  "<<temp<<" is = "<<rev;
    */

//************************************************************************//
    //WAP to find The Last Digit of Number//
    /*int num;
    cout<<"Enter Number :: ";
    cin>>num;
    int last;
    last =num % 10;
    cout<<"Last Digit is="<<last;
    */
//*************************************************************************//
    //WAP To Check Given Number Is Armstrong or Not//
//**************************************************************************//
    //WAP To Check Given Number is Palindrom or Not//
   /* int num,rem,rev= 0;
    cout<<"Enter Number :: ";
    cin>>num;
    int temp=num;
    while(num != 0)
    {
        rem = num %10;
        rev = rev*10 +rem;
        num = num/10;
    }
    if(temp == rev){
        cout<<"Number is Palindrom";
    }else{
        cout<<"Number is not Palindrom";
    }*/
//***************************************************************************//
    // WAP To Check Year is Leap or Not//
    //WAP To Interchange digits of Number//
    //WAP To Convert Decimal to Binary//
    //WAP To Delete Word from a String//
    //WAP To Delete Element From An Array//
    return 0;
}
