#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	cin>>t;

	for(int j = 1 ; j <= t ; j++){
	    int N=0, K = 0;
	    cin>>N>>K;

	    int arr[N];

	    for(int i = 0 ; i < N; i++){
	        cin>>arr[i];
	    }

	    int priceSum = 0, ceilingPriceSum = 0;

	    for(int i = 0 ; i < N ; i++){
	        if(arr[i]>K){
	            ceilingPriceSum = ceilingPriceSum + K;
	        } else {
	            ceilingPriceSum = ceilingPriceSum + arr[i];
	        }
	        priceSum = priceSum + arr[i];
	    }

	    cout<< priceSum - ceilingPriceSum<<endl;
	}
	return 0;
}