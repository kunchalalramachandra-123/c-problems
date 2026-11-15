
class Solution {
    public int myAtoi(String s) {
        int i = 0, n = s.length();
        long num = 0;
        int sign = 1;
        while (i < n && s.charAt(i) == ' ') {
            i++;
        }
        if (i < n && (s.charAt(i) == '+' || s.charAt(i) == '-')) {
            if (s.charAt(i) == '-') {
                sign = -1;
            }
            i++;
        }
        while (i < n && s.charAt(i) >= '0' && s.charAt(i) <= '9') {
            num = num * 10 + (s.charAt(i) - '0');
            if (sign == 1 && num > Integer.MAX_VALUE) {
                return Integer.MAX_VALUE;
            }

            if (sign == -1 && num > 2147483648L) {
                return Integer.MIN_VALUE;
            }

            i++;
        }

        return (int)(num * sign);
    }
}
