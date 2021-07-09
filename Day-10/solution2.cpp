/*question : https://leetcode.com/problems/valid-parentheses/*/

class Solution {
public:
    bool isValid(string exp) {
        //VALID PARENTHESES
        stack<char> s;
      char x;
      for(int i=0;i<exp.length();i++){
         if(exp[i]=='{'||exp[i]=='('||exp[i]=='['){
          s.push(exp[i]);
          continue;
         }
         if(s.empty())
          return false;
        switch(exp[i]){
          case ')': 
          x=s.top();
          s.pop();
          if(x=='{'||x=='[')
            return false;
          break;
          case '}':
          x=s.top();
          s.pop();
          if(x=='('||x=='[')
            return false;
          break;
          case ']':
          x=s.top();
          s.pop();
          if(x=='('||x=='{')
            return false;
          break;
        }
      }
      if(s.size()){
        return false;
      }else{
          return true;
      }
    }
};;