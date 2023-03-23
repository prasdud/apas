//prasdud

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int nums[]={2,7,11,15};
	int target=18;
	int len=sizeof(nums)/sizeof(nums[0]);
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(nums[j]==target-nums[i]){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
    return 0;
}

