#include<bits/stdc++.h>

using namespace std;

void printPattern14(int n){

    
    for (int i = 1; i <= n; i++)
    {
        int letter = 'A';
        for (char j = 1; j <= i; j++)
        {
            cout << char(letter)  << " ";
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
        printPattern14(n); 
    }




    return 0;
}
