#include<bits/stdc++.h>
using namespace std;
// permutation of string containing all distinct elements(Approach 1)
/*void permute(string s, int l, int r){
    if(l==r)cout << s << ' ';
    else{
        for(int i=l; i<=r; i++){
            swap(s[l], s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}*/
//permutation of string containing all distinct elements(Approach 2)
/*void permute(string s){
    sort(s.begin(), s.end());
    do{
        cout << s << ' ';
    }while(next_permutation(s.begin(), s.end()));
}
//permutation of string containing duplicate elements
void permute(string s, int l, int r){
    unordered_set<char> m;
    if(l==r)cout << s << ' ';
    else{
        for(int i=l; i<=r; i++){
            if(m.find(s[i])!=m.end())
            continue;
            m.insert(s[i]);
            swap(s[l], s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}*/
// mergesort using recursion
/*void merge(int arr[], int mid, int low, int high){
    int i=low,j=mid+1,k=0;
    int temp[high-low+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
            k++;
            i++;
    }
    while(j<=high){
        temp[k] = arr[j];
            k++;
            j++;
    }
    for(i=low; i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void mergesort(int arr[],int low, int high){
    if(low>=high)return;
    int mid = low + (high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,mid,low,high);
}*/
// finding all the subsets of a set
/*vector<vector<int>> allsubsets;
void generate(vector<int> &subset, int i, vector<int>&nums){
    if(i==nums.size()){
        allsubsets.push_back(subset);
        return;
    }
    //ith element is not present
    generate(subset, i+1, nums);
    //ith element is present
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();
}
  vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> empty;
        generate(empty,0,nums);
        return allsubsets;
    }*/
int main(){
    
}