#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL,*temp=NULL;

void search2(struct node *rut)
{
    if((temp->data > rut->data)&&(rut->right !=NULL))
       {
           search2(rut->right);
       }
    else if((temp->data > rut->data)&&(rut->right==NULL))
        {
            rut->right=temp;
        }
    else if((temp->data < rut->data)&&(rut->left!=NULL))
        {
            search2(rut->left);
        }
    else if((temp->data < rut->data)&&(rut->left==NULL))
    {
        rut->left=temp;
    }
}
void create()
{
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element:");
    scanf("%d",&item);
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        search2(root);
    }
}
void preorder(struct node *rut)
{
    if(rut!=NULL)
    {
        printf("%d\t",rut->data);
        preorder(rut->left);
        preorder(rut->right);
    }
}
void inorder(struct node *rut)
{
    if(rut!=NULL)
    {
        inorder(rut->left);
        printf("%d\t",rut->data);
        inorder(rut->right);
    }
}
void postorder(struct node *rut)
{
    if(rut!=NULL)
    {
        postorder(rut->left);
        postorder(rut->right);
        printf("%d\t",rut->data);
    }
}
void main()
{
    int choice;
    while(1)
    {
        printf("\nMenu:");
        printf("\n1.Create.");
        printf("\n2.Preorder.");
        printf("\n3.Inorder");
        printf("\n4.Postorder");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
                   break;
            case 2:preorder(root);
                   break;
            case 3:inorder(root);
                   break;
            case 4:postorder(root);
                   break;
        }

    }
}
