class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        map<char, int> m;
		    string ans = "";
		    queue<char> q;
		    
		    for(int i=0; i<s.length(); i++) {
		        char ch = s[i];
		        
		        q.push(ch);
		        m[ch]++;
		        
		        while(!q.empty()) {
		            if(m[q.front()] > 1){
		                q.pop();
		            }
		            else
		            {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}
    };

// Stream First Non-repeating: https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
