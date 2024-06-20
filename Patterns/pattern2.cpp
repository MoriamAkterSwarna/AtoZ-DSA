#include<bits/stdc++.h>

using namespace std;

void printPattern2(int n){

    for(int i = 1; i<=n; i++){

        for(int j = i; j > 0; j--){
            cout << "*" << " ";
        }
        cout << endl;  
    }
}

int main(){

    int t; 
    cin >> t; 
    for(int i = 1; i<= t; i++){
        int n; 
        cin >> n; 
        printPattern2(n); 
    }




    return 0;
}
