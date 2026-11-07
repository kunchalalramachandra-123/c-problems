
class Solution {
    public String[] findWords(String[] words) {
        String row1 = "qwertyuiop";
        String row2 = "asdfghjkl";
        String row3 = "zxcvbnm";

        ArrayList<String> ans = new ArrayList<>();

        for (String word : words) {
            String s = word.toLowerCase();
            String row;

            if (row1.indexOf(s.charAt(0)) != -1)
                row = row1;
            else if (row2.indexOf(s.charAt(0)) != -1)
                row = row2;
            else
                row = row3;

            boolean valid = true;

            for (int i = 0; i < s.length(); i++) {
                if (row.indexOf(s.charAt(i)) == -1) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.add(word);
        }

        return ans.toArray(new String[0]);
    }
}
