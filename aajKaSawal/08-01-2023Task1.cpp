// https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array&fbclid=IwAR3L0US770tIcllo-ajNiB8LE5gDYBlVGvGOTxabFRV5Wo_-Xiako4AlmYU
// TC= O(N)
// SC= O(1)

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i = 0, j = 0;
	    while(i < n){
	        if(i != j && arr[i] != 0){
	            arr[j] = arr[i];
	            arr[i] = 0;
	        }
	        if(arr[j] != 0)j++;
	        i++;
	    }
	}
};