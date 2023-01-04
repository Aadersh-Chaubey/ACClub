vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> ans(2);
    ans[0] = ans[1] = INT_MAX;
    for(int i = 0; i < n; i++){
        if(ans[0] > a[i])ans[0] = a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] != ans[0] && ans[1] > a[i])ans[1] = a[i];
    }
    if(ans[1] == INT_MAX){
        ans = {-1};
    }
    return ans;
}