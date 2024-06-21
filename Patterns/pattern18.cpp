#include<bits/stdc++.h>

using namespace std;

void printPattern18(int n){

    
    for (int i = 0; i < n; i++)
    {
        char letter = n + 'A';
        for (char j = ('A' + n -1)-i; j <= letter-1; j++)
        {
            cout << j  << " ";
            
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
        printPattern18(n); 
    }




    return 0;
}
