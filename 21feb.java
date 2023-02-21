class 21feb {
    public int singleNonDuplicate(int[] nums) {
         int l1 = 0, r1 = nums.length - 1;
        while (l1 < r1) {
            int mid = (l1 + r1) / 2;
            if (mid % 2 == 1) {
                mid--;
            }
            if (nums[mid] != nums[mid + 1]) {
                r1 = mid;
            } else {
                l1 = mid + 2;
            }
        }
        return nums[l1];
   }
}
