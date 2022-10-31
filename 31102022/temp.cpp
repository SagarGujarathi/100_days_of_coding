 queue<Node*> array;
        array.push(root);
        while(!array.empty())
        {
            Node *first = array.front();
            array.pop();
            cout<<first->data<<" ";
            if(first->right != NULL)
            {
                array.push(first->right);
            }
            if(first->left != NULL)
            {
                array.push(first->left);
            }
        }
        return {};