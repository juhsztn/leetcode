/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // declare variables
int* twoSum(int* nums, int numSize, int target, int* returnSize) {
    //declare target
    *returnSize = 2;
    //function
    int *result = (int *)malloc(*returnSize * sizeof(int));
//for loop
    for (int i = 0; i < numSize; i++) {
        for (int j = i + 1; j < numSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    //in case there is no solution
    return NULL;
}