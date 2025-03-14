#include<iostream>
#include<cstdlib>
using namespace std;
int main(){

    int a;
    int total=0;
    while(true){
        cout << "my turn :";
    cin>>a;
    if(a>6){
        cout << "invalid, try again"<<endl;
        continue;
    }
    
    int random = rand()%7;
    cout<<random<<endl;
    if (a==random){
        cout<<"out"<<endl;
        break;
    }
    total+=a;}
    cout<<total<<" runs"<<endl;
    return 0;    
    }
