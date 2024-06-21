#include<bits/stdc++.h>

using namespace std;

void printPattern16(int n){

    
    for (int i = 1; i <= n; i++)
    {
        char letter = i + 'A';
        for (char j = 1; j <= i; j++)
        {
            cout << letter  << " ";
            
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
        printPattern16(n); 
    }




    return 0;
}
