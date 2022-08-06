int* preorder(struct Node* root, int* returnSize) {
    
    int result[10000] = {0};
    int counter = 0;
    
    struct Node* current = root;
    
    struct Node* stack[10000] = {0};
    int stack_counter = -1;
    
    while((stack[0] != NULL || counter == 0) && root)
    {   
        if(current == NULL)
        {
            stack[stack_counter] = NULL;
            stack_counter--;
        }
        result[counter] = current->val;
        stack[stack_counter] = current;
        counter++;
        stack_counter++;
        current = current->left;
        
        
    }
    *returnSize = counter + 1;
    return result;
    
}