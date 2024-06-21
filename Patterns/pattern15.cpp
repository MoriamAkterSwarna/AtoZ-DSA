#include<bits/stdc++.h>

using namespace std;

void printPattern15(int n){

    
    for (int i = 1; i <= n; i++)
    {
        char letter = 'A';
        for (char j = i; j <= n; j++)
        {
            cout << letter  << " ";
            letter++;
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
        printPattern15(n); 
    }




    return 0;
}
