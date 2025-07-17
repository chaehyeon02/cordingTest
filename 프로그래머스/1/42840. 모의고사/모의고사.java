import java.util.*;

class Solution {
    public int[] solution(int[] answers) {
        int[] scores = {0, 0, 0};
        int[] student1 = {1, 2, 3, 4, 5};
        int[] student2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] student3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        
        for(int i = 0; i < answers.length; i++) {
            if(answers[i] == student1[i % student1.length]) scores[0]++;
            if(answers[i] == student2[i % student2.length]) scores[1]++;
            if(answers[i] == student3[i % student3.length]) scores[2]++;
        }
        
        int scoreMax = 0;
        for(int i = 0; i < 3; i++) {
            if(scoreMax < scores[i]) scoreMax = scores[i];
        }
        
        List<Integer> answer = new ArrayList<>();
        for(int i = 0; i < 3; i++) {
            if(scoreMax == scores[i]) answer.add(i + 1);
        }
        
        return answer.stream().mapToInt(i->i).toArray();
    }
}