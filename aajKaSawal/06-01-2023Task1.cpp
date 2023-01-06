// link: https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?fbclid=IwAR29Vkn1vXl_fkaQ2VWR8OyTFScgdHhRpmi6mB927mAYxO-MVHSBzVJSKd0

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i - 1])return 0;
        }
        return 1;
    }
};