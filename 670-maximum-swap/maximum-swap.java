class Solution {
    public int maximumSwap(int num) {
        String n = Integer.toString(num);
        int maxN = num;

        for(int i=0;i<n.length();i++){
            for(int d=i+1;d<n.length();d++){
                char[] numeral = n.toCharArray(); 
                char temp = numeral[i];
                numeral[i] = numeral[d];
                numeral[d] = temp;
                int tempN = Integer.parseInt(new String(numeral));
                maxN = Math.max(maxN, tempN);
            }
        }
        return maxN;
    }
}