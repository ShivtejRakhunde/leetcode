class Solution {
    public boolean isValid(String s) {
        HashMap<Character,Character> mp = new HashMap<>(); 
        mp.put('(',')');
        mp.put('{','}');
        mp.put('[',']');

        Stack<Character> st = new Stack<>();
        
        for(int i=0;i<s.length();i++){
            if(mp.containsKey(s.charAt(i))){
                st.push(s.charAt(i));
            }
            else if(!st.isEmpty() && mp.get(st.peek())==s.charAt(i)){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.isEmpty();
    }
}