class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string ans = "";
	    for(auto ch: S){
	        if(!(ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'))ans.push_back(ch);
	    }
	    return ans;
	}
};