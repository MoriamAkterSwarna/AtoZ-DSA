#include<bits/stdc++.h>

using namespace std;

void printPattern3(int n){

    for(int i = 1; i<=n; i++){

        for(int j = 1; j <=i; j++){
            cout << j << " ";
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
        printPattern3(n); 
    }




    return 0;
}
