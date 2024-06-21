#include<bits/stdc++.h>

using namespace std;

void printPattern17(int n){
    
    for(int i = 0; i<n; i++){
        
        for(int j =0; j< n-i -1; j++){
            cout << " ";
        }
    char letter = 'A' ;

        for(int j = 0; j <(2 * i) +1; j++){
            cout << letter ;
            if( j < ((2 * i) +1)/2)
                letter++;

                else
                    letter--;
                }
         for(int j =0; j< n-i-1; j++){
            cout << " ";
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
        printPattern17(n); 
    }




    return 0;
}
