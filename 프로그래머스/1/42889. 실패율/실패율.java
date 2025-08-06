import java.util.*;
import java.io.*;

class Solution {
    public int[] solution(int N, int[] stages) {
        Map<Integer, Double> failureRate = new HashMap<>();
        
        int challengers = stages.length;
        for(int i = 1; i <= N; i++) {
            int currentStages = i;
            long c = Arrays.stream(stages).filter(n -> n == currentStages).count();
            
            if(challengers == 0) failureRate.put(currentStages, 0.0);
            else failureRate.put(currentStages, (double)c / challengers);
            challengers -= c;
        }
        
        List<Integer> result = new ArrayList<>(failureRate.keySet());
        result.sort((o1, o2) -> Double.compare(failureRate.get(o2), failureRate.get(o1)));
        
        return result.stream().mapToInt(i -> i).toArray();
    }
}