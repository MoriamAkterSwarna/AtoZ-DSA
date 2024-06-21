#include<bits/stdc++.h>

using namespace std;

void printPattern19(int n){

        int initialSpace = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << "*" ;
            
        }

        for (int j = 0; j < initialSpace; j++){
            cout << " ";
        }
        for(int j = 1; j <= n-i; j++){
            cout << "*" ;
            
        }
        initialSpace += 2;

        cout << endl;  
    }

    initialSpace = (2 * n) - 2;
    for (int i = 1; i <=n; i++){
            for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<initialSpace;j++){
              cout<<" ";
          }    

           //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          initialSpace-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;    

    }
}

int main(){

    int t; 
    cin >> t; 
    for(int i = 1; i<= t; i++){
        int n; 
        cin >> n; 
        printPattern19(n); 
    }




    return 0;
}
