#include<bits/stdc++.h>

using namespace std;

void printPattern5(int n){

    for(int i = 1; i<=n; i++){

        for(int j = i; j <= n; j++){
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
        printPattern5(n); 
    }




    return 0;
}
