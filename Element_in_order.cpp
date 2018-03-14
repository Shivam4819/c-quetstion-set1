#include <iostream>
#include <stack>
#include "../Question/element in order.h"
using namespace std;
stack<int> s;

void Element_in_order::accept(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}    
}
void Element_in_order::display(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void Element_in_order::seperate(){
       int b;
    for(i=0;i<n;i++){
       if(a[i]>0){
         s.push(a[i]);
         
       }
    }
    for(j=0;j<n;j++){   
       if(a[j]<0){
         s.push(a[j]);
       }
    }   
    
     for(i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
