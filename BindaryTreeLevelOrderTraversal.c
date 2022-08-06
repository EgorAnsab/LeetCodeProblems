int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    
    int** result = malloc(2000 * sizeof(int*));
    *returnColumnSizes = malloc(2000 * sizeof(int));
    
    if(!root)
    {
        *returnSize = 0;
        return result;
    }
    
    int front = 0;
    int rear = 0;
    struct TreeNode* queue[2000] = {0};

    queue[rear++] = root;    
    
    int level_width = 0;
    int next_level_width = 1;
    int level = 0;
    
    while(next_level_width > 0)
    {
        level_width = next_level_width;
        *returnColumnSizes[level] = level_width;
        next_level_width = 0;
        
        int* pre_result = malloc(sizeof(int) * level_width);
        
        for(int i = 0; i < level_width; i++)
        {
            struct TreeNode* current = queue[front++];
            pre_result[i] = current->val;
            if(current->left)
            {
                queue[rear++] = current->left;
                next_level_width++;
            }
            if(current->right)
            {
                queue[rear++] = current->right;
                next_level_width++;
            }
        }
        result[level++] = pre_result;
    }
    *returnSize = level;
    return result;
}