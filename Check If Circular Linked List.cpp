bool isCircular(Node *head)
{
   // Your code here
   Node *temp=head;
   
   while(true)
   {
       if(temp->next==NULL)
       {
           return false;
           break;
       }
       else if(temp->next==head)
       {
           return true;
           break;
       }
       else
       {
           temp=temp->next;
       }
   }
   
}
