
class Solution {
    public String minWindow(String s, String t) {
        int[] count = new int[128];
        for (char c : t.toCharArray())
            count[c]++;

        int left = 0, start = 0, min = Integer.MAX_VALUE;
        int need = t.length();

        for (int right = 0; right < s.length(); right++) {
            if (count[s.charAt(right)]-- > 0)
                need--;

            while (need == 0) {
                if (right - left + 1 < min) {
                    min = right - left + 1;
                    start = left;
                }

                if (++count[s.charAt(left++)] > 0)
                    need++;
            }
        }

        return min == Integer.MAX_VALUE ? "" :
               s.substring(start, start + min);
    }
}
