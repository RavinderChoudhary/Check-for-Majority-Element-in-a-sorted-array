#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int> arr = {1, 1, 1, 2, 2};
	int k = 1; 
	int n = arr.size();
	
	int l1 = 0, r1 = n - 1;
	int mid1,mid2;
	int res1,res2;
    while(l1 <= r1){
        mid1 = (l1 + r1)/2;
        if(arr[mid1] <= k){
            res1 = mid1;
            l1 = mid1+1;
        }
        else  r1 = mid1-1;
    }
    
    
    int l2 = 0,r2 = n-1;
    while(l2 <= r2){
        mid2 = (l2 + r2)/2;
        if(arr[mid2] >= k){
            res2 = mid2;
            r2 = mid2-1;
        }
        else  l2 = mid2+1;
    }
    cout<<res2<<" "<<res1<< " "<<(res1-res2+1)<<endl;
    
    int len = res1-res2+1;
    
    if(len > n/2)
      cout<<"YES";
    else cout<<"NO";
	return 0;
}
