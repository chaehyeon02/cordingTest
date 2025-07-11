import java.util.*;

class Solution {
    public int[] solution(int[] arr, int divisor) {
        int[] answer = {-1};
        ArrayList<Integer> list = new ArrayList<>();
        for(int a : arr) {
            if(a % divisor == 0) list.add(a);
        }
        
        if(list.size() == 0) return answer;
        Collections.sort(list);
        answer = new int[list.size()];
        for(int i = 0; i < list.size(); i++) answer[i] = list.get(i);
        return answer;
    }
}