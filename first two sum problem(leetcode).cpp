#include<iostream>
using namespace std;
int main(){
    int n,Target;
    cout<<"enter number of array elements:";
    cin>>n;
    int nums[n];
    cout<<"enter thhe target=";
    cin>>Target;
    cout<<"enter the array elements";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //checking for sum
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((nums[i]+nums[j])==Target){
                cout<<"target sum found on"<<i<<":"<<j<<endl;
            }
        }
    }
    return 0;
}
