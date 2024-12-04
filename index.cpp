#include <iostream>
using namespace std;
int main(){
    int E,H,U,M,S,percentage;
    cout<<"Enter the number:";
    cin>>E>>H>>U>>M>>S;
    percentage = ((E+H+U+M+S)*100)/500;
    if(percentage >= 45){
        cout<<"Pass";
    }else{
          cout<<"Fail";
    }

    return 0;
}