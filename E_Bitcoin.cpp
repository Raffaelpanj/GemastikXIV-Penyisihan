#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int h[N+1];
	int hsl[1];
	h[N] = 0;
	hsl[0] = 0;
	for(int i=0; i<N; i++){
		cin>>h[i];
	}
		int j=0;
		while(j<N){
			if(h[j]<h[j+1]){
				int k=1;
				for(int i=j+1; i<N; i++){
					k++;
					if(h[i]>h[i+1]){
						int temp = h[i]-h[j];
						hsl[0]+=temp;
						break;
					}
				}
				j+=k;
			}else{
				j++;
			}
		}
	if(hsl[0]>=1000000000){
		cout<<999999999;
	}else{
		cout<<hsl[0];	
	}
	return 0;
}
