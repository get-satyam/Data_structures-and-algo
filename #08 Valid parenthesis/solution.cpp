class Solution {
public:
    bool isValid(string s) {
        std::deque<char> st{};
        
        for(char c : s){
            
            switch(c){
                    
                case '(':
                case '{':
                case '[':  st.push_back(c);
                            break;
                    
                case ')':   if(st.size() != 0 && st.back() == '(') 
                                st.pop_back();
                            else 
                                return false;
                            break;
                case '}':   if(st.size() != 0 && st.back() == '{') 
                                st.pop_back();
                            else 
                                return false;
                            break;
                case ']':   if(st.size() != 0 && st.back() == '[') 
                                st.pop_back();
                            else 
                                return false;
                            break;
                default:    break;
                    
            }
        }
        return (st.size() == 0) ? true : false;
    }
};