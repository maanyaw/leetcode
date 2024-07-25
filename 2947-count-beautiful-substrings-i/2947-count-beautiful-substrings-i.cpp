class Solution {
public:
    bool isVowel(char &ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    
    int beautifulSubstrings(string s, int k) {
        int n=s.length();
        int result=0;
        
        for(int i=0;i<n;i++){
            int vowels=0;
            int cons=0;
            
            for(int j=i;j<n;j++){
                if(isVowel(s[j])){
                    vowels++;
                }
                else{
                    cons++;
                }
                
                if(vowels == cons && (vowels*cons)%k==0){
                    result ++;
                }
            }
        }
        return result;
        
    }
};