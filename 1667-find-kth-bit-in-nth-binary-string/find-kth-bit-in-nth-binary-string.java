class Solution {
    private String invert(String s) {
        StringBuilder inverted = new StringBuilder();
        for (char c : s.toCharArray()) {
            inverted.append(c == '0' ? '1' : '0');
        }
        return inverted.toString();
    }

    private String reverse(String s) {
        return new StringBuilder(s).reverse().toString();
    }

    public char findKthBit(int n, int k) {
        String s = "0";
        
        for (int i = 1; i < n; i++) {
            String inverted = invert(s);
            String reversedInverted = reverse(inverted);
            s = s + "1" + reversedInverted;
        }

        return s.charAt(k - 1);
    }
}