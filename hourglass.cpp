//#include<iostream>
//
//using namespace std;
//
//int main(){
//	
//	int a[6][6], max=-80;
//	
//	for(int i=0; i<6; i++) {
//		for(int j=0; j<6; j++) {
//			cin>>a[i][j];
//		}
//	}
//	
//	for(int i=0; i<=3; i++) {
//		for(int j=0; j<=3; j++) {
//			int t = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
//				
//			if(max < t)
//				max = t;
//		}
//	}
//	cout<<max;
//	return 0;
//}



#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> a) {
	int max = -80;
   	for(int i=0; i<=3; i++) {
		for(int j=0; j<=3; j++) {
			int t = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
				
			if(max < t)
				max = t;
		}
	}
    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);
    fout << result << "\n";

    fout.close();

    return 0;
}

