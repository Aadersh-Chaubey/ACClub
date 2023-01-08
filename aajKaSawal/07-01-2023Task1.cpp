// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win&fbclid=IwAR1JkYaczm9Ytm_hG7nzP2QNfx-Id8rNIpXTZXB-0AhtYljVEeFh_x2NMjQ
// TC= O(logN)
// SC= O(1)
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int s = 0, e = N - 1;
       while(s <= e){
           int m = (s + e) / 2;
           if(arr[m] == K)return 1;
           else if(arr[m] < K)s = m + 1;
           else e = m - 1;
       }
       return -1;
    }
};