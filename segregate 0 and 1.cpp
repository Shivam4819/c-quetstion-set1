#include <iostream>
#include <stack>
#include "../Question/segregate 0 and 1.h"

using namespace std;
stack<int> s;

void Segregate_0_and_1::acceptdata(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}    
}
void Segregate_0_and_1::displaydata(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void Segregate_0_and_1::segregate(){
       int b;
    for(i=0;i<n;i++){
       if(a[i]==0){
         s.push(a[i]);
         
       }
    }
    for(j=0;j<n;j++){   
       if(a[j]==1){
         s.push(a[j]);
       }
    }   
    
     for(i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

