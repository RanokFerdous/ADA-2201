//gRAFICAL APPROACH
/*
PSEUDOCODE:

1.CREATE 2 array indegree and outdegreee to store indegree and outdegree
2.reun a nested loop , the outer loop from 0 to n , inner loop from 0 to n
3.



*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for( int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }

    }

    int k[n]={0},  r[n]={0};

    for( int i=0;i<n;i++){
        for( int j=0;j<n;j++){

            if( arr[i][j]==1 && i!=j){

                k[i]++;
                r[j]++;
            }
        }
    }


    bool f= false;

    for( int i=0;i<n;i++){

        if( k[i]==0 && r[i]==n-1){
            f=true;
            cout<<(i+1)<<" "<<"is celebrity";
            break;
        }
    }

    if( !f){
        cout<<"is not celebrity"<<endl;
    }

}


/*

input:
4
0 0 1 0
0 0 1 0
0 0 0 0
0 0 1 0

  ouptptu: 

3 is celebrity

*/
