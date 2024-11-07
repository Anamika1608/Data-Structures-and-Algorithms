// #include <bits/stdc++.h>
// using namespace std;

// void mergeSort(int arr[], int n){
    
// }

// int main(){
//     int arr[5] = {2,3,9,1,4};
//     mergeSort(arr,5);
// }


#include <bits/stdc++.h>
using namespace std;

bool comp (pair <int,int> p1, pair<int,int>p2){
    if(p2.second> p1.second) return true;
	if(p2.second< p1.second) return false;
	if(p1.first>p2.first) return true;
	return false;
}

int main(){
	vector <int> v = {1,9,4,2,3,7};
    // sort(v.begin(),v.end(),greater<int>());
	// for(auto it:v){
	// 	cout << it << " ";
	// }


    pair <int,int> a[]  = {{1,2},{4,1},{2,1}};
	// sort(a,a+3);

	// sort in ascending order to second element
	// if second element is same then sort acc to first element in dec order


	sort(a,a+3,comp);

	for (int i=0;i<3;i++){
		cout << a[i].first << " " << a[i].second << endl;
	}

	int num = 7;
	cout << __builtin_popcount(num) << endl; // return the setbits  - three 1

	long long n = 23678945678927654;
	cout << __builtin_popcountll(n) << endl;

	string s = "173"; // should be sorted to print all the combinations
	// if not sorted then sort it;
	sort(s.begin(),s.end());
	do{
		cout << s << endl;
	}while(next_permutation(s.begin(),s.end()));

   int max1 = *(max_element(v.begin(),v.end()));
   cout << max1 << endl;
}

