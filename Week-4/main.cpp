//
//  main.cpp
//  Week-4
//
//  Created by Dilshod Qayumov on 04/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    cout<<"Enter any number: "<<endl;
    cin>>x;
    if (x>=0){
        cout<<"The number is positive and";
    }
    else{
        cout<<"The number is negative and";
    }
    if(x%2==0){
        cout<<" it is even"<<endl;
    }
    else{
        cout<<" it is odd"<<endl;
    }
    
    
    
    
    
    cin.get();
    return 0;
   
}
