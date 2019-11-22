#include <stdio.h>

#include "bst.h"

int main(int argc, char const *argv[])
{
    struct node *root = NULL;
    int n;
    
    for (int i = 0; i < n; i++)
    {
        root = insert(root, 5);
    }
    
    inOrder(root);
    

    return 0;
}
