

#include <bits/stdc++.h>
using namespace std;

void bucketSort ( double  arr[], int n){

    vector<double>b[n];

    for( int i=0;i<n;i++){

        int bi =(n*1.0)*(arr[i]*1.0); // index in bucket

        b[bi].push_back(arr[i]);

    }

    //sort

    for( int i=0;i<n;i++){

        sort( b[i].begin(), b[i].end());


    }

    // concatenate all bucket into arr[]

    int index =0;

    for(int i=0;i<n;i++){
        for( int j=0;j<b[i].size();j++){

            arr[index++]=b[i][j];
        }
    }
}

int main() {

    //********class : 9 bucket sort
    int n;
    cin>>n;

    double  arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    bucketSort( arr, n);
    for( int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }cout<<endl;

}
