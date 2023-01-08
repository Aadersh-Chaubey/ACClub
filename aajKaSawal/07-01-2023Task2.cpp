// https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number&fbclid=IwAR1voB93SHTRO9moN6yVz8RuongTR2V415mrDLpoqb4JXr26iQes0J3fhlw
// TC= O(N)
// SC= O(1)
int missingNumber(int A[], int N)
{
    // Your code goes here
    long long sum = 0, sum2 = (long long)N * (N + 1) / 2;
    for(int i = 0; i < N - 1; i++){
        sum += A[i];
    }
    return sum2 - sum;
}