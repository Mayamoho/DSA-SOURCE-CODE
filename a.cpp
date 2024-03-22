#include <bits/stdc++.h>
using namespace std;
/*void func(int cur[], int l , int n){
    if(l==n){
        for(int i=0; i<n; i++){
            cout << cur[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<5; i++){
        if(l%2!=i%2)continue;
        cur[l] = i;
        func(cur,l+1,n);
    }
}*/
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
    sort(s.begin(), s.n());
    do{
        cout << s << ' ';
    }while(next_permutation(s.begin(), s.n()));
}
//permutation of string containing duplicate elements
void permute(string s, int l, int r){
    unordered_set<char> m;
    if(l==r)cout << s << ' ';
    else{
        for(int i=l; i<=r; i++){
            if(m.find(s[i])!=m.n())
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
/*int a[1000006];
bool binarysearch(int n, int q){
    int low = 0, high = n-1, mid;
    while(low<=high){
        mid = low + (high - low)/2;
        if(q == a[mid])
            return true;
        else if(q<a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
        return false;
}*/
//checking prime using count of divisors
    /*int n;
    cin >> n;
    int cnt=0;
    for(int i=1; i * i <=n; i++){
        if(n%i==0){
        cnt++;
        if(i!=n/i)
        cnt++;
        }
    }
    if(cnt==2)
    cout << "Prime\n";
    else if(n==1)
    cout << "Neither prime nor composite\n";
    else
    cout << "composite\n";*/
    //counting sort O(n+m)
   /*string s;
    cin >> s;
    int a[27] = {0};
    for(int i=0; i<s.size(); i++){
        a[s[i]-'a']++;
    }
    for(int i=0; i<27; i++){
        if(a[i]){
            while(a[i]--)
                cout << (char)('a' + i);
        }
    }*/
    // binary search O(logn)
    /*int n;
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    int q;
    cin >> q;
    while(q--){
        int val;
        cin >> val;
        if(binarysearch(n,val))
            cout << "1\n";
        else
            cout << "0\n";
    }*/
    // using vector and pair
    /*int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.n());
    for(int i=0; i<n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }*/
// C++ program to print all combination 
// of size r in an array of size n 
/*void combinationUtil(int arr[], int data[], 
					int start, int n, 
					int index, int r) 
{ 
	if (index == r) 
	{ 
		for (int j = 0; j < r; j++) 
			cout << data[j] << " "; 
		cout << endl; 
		return; 
	}  
	for (int i = start; i <= n && 
		n - i + 1 >= r - index; i++) 
	{ 
		data[index] = arr[i]; 
		combinationUtil(arr, data, i+1, 
						n, index+1, r); 
	} 
} 
void printCombination(int arr[], int n, int r) 
{ 
	int data[r];
	combinationUtil(arr, data, 0, n-1, 0, r); 
} */
int main() 
{ 
	/*int arr[] = {1, 2, 3, 4, 5}; 
	int r = 3; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printCombination(arr, n, r); */
} 
