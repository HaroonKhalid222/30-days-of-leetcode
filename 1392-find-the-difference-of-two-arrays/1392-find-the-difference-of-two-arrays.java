class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        HashSet<Integer> set1 = new HashSet<>();
        HashSet<Integer> set2 = new HashSet<>();
        HashSet<Integer> result1 = new HashSet<>();
        HashSet<Integer> result2 = new HashSet<>();
        
        for (int num : nums1) {
            set1.add(num);
        }
        
        for (int num : nums2) {
            set2.add(num);
        }
        
        for (int num : nums1) {
            if (!set2.contains(num)) {
                result1.add(num);
            }
        }
        
        for (int num : nums2) {
            if (!set1.contains(num)) {
                result2.add(num);
            }
        }
        
        List<List<Integer>> result = new ArrayList<>();
        result.add(new ArrayList<>(result1));
        result.add(new ArrayList<>(result2));
        
        return result;
        }

}