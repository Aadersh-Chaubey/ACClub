//https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?fbclid=IwAR3KwEXVhCOs9gwiypjy5s5hThwmu3hfYzt9goQW_huQ8HSPmd3iVaHFO5k

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i = 0, j = 0;
        while(i < n || j < m){
            int add;
            if(i == n)add = arr2[j++];
            else if(j == m)add = arr1[i++];
            else if(arr1[i] >= arr2[j])add = arr2[j++];
            else add = arr1[i++];
            if(ans.size() == 0 || ans[ans.size() - 1] != add)ans.push_back(add);
        }
        return ans;
    }
};