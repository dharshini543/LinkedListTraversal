#include <stdio.h>
#include <stdlib.h>

enum returnvalue
{
    Failure = 0,
    Success
};

struct node
{
    int data;
    struct node *next;
};

struct node* createNode(struct node *head)
{
    struct node *newnode, *temp;
    int choice,count = 0;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return Failure;
        }
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if(head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != 0)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        ++count;
        printf("Want to continue... press 1 else 0\n");
        scanf("%d",&choice);
    }
    return head;
}

int displayListByForwardTraverse(struct node *head)
{
    struct node *temp = head;
    if(temp == 0)
    {
        printf("List is empty\n");
        return Failure;
    }
    else
    {
        while(temp != 0)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        return Success;
    }
}

int  CountNodesDuringTraversal(struct node* head)
{
    int count;
    struct node *temp = head;
    if(temp == 0)
    {
        printf("List is empty\n");
        return Failure;
    }
    else
    {
        while(temp != 0)
        {
            temp = temp->next;
            ++count;
        }
        return count;
    }
}


int main()
{
    struct node *head = 0;
    int option,True = 1,count = 0;
    while(True)
    {
        printf("Enter\n1.Create Node\n2.Display List by Forward traversal\n3.Count nodes during traversal:");
        scanf("%d",&option);
        switch(option)
        {
            int pos,value;
        case 1:
            head = createNode(head);
            break;
        case 2:
            displayListByForwardTraverse(head);
            printf("List displayed\n");
            break;
        case 3:count = CountNodesDuringTraversal(head);
            printf("count = %d\n",count);
            break;
        }
    }
}
