int pivotIndex(int* nums, int numsSize){
    int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    int left_sum = 0;
    int right_sum = 0;
    int current = 0;
    for(int i = 0; i < numsSize; i++)
    {   
        current += nums[i];
        left_sum = current - nums[i];
        right_sum = sum - current;
        if (left_sum - right_sum == 0)
        {
            return i;
        }
    }
    return -1;
}