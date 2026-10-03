#include<iostream>
#include<vector>
using namespace std;

class Sum{
public:

    vector<int> twosum(vector<int> nums, int Target){

        for(int i = 0; i < nums.size(); i++){

            for(int j = i + 1; j < nums.size(); j++){

                if(nums[i] + nums[j] == Target){
                    return {i, j};
                }
                
            }
        }

        return {};
    }
};

int main(){
    Sum s;

    vector<int> index = s.twosum({2,7,11,15}, 9);

    for(int x : index){
        cout<<x<<" ";
    }
            cout<<"\n";
    
    vector<int> index1= s.twosum({3,2,4}, 6);

    for(int y: index1){
        cout<<y<<" ";
    }
       cout<<"\n";
    vector<int> index2 = s.twosum({3,3}, 6);

    for(int z : index2){
        cout<<z<<" ";
    }
       cout<<"\n";

    vector<int> index3 = s.twosum({3,24}, 6);

    for(int t : index3){
        cout<<t<<" ";
    }

    return 0;
}
