// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once&fbclid=IwAR3oqrB8Et5KAlEe9a8T801Sa4CkrR3-vvcEhImBqR7z0t8q4lsIiq4aKyA
// TC= O(N)
// SC= O(1)

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int x = 0;
	    for(int i = 0; i < N; i++){
	        x ^= A[i];
	    }
	    return x;
	}
};