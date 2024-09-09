class Solution {
public:
    int headValue(ListNode* &head)
    {
        int val = -1;  
        if (head)     
        {
            val = head->val;  
            head = head->next;  
        }
        return val;  
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        
        int rs=0,cs=0;
        int re=m-1,ce=n-1;
        vector<vector<int>>matrix(m, vector<int>(n, -1));
        while (head && rs<=re && cs<=ce)
        {
            
            for (int i=cs;i<=ce;i++) 
            {
                matrix[rs][i]=headValue(head); 
            }
            rs++; 
            for (int i=rs; i<=re; i++) 
            {
                matrix[i][ce]=headValue(head); 
            }
            ce--;  

           if(re>=rs){
                for (int i=ce;i>=cs; i--) 
                {
                    matrix[re][i]=headValue(head);  
                }
                re--; 
            }
            if(ce>=cs){
                for (int i = re; i >= rs; i--) 
                {
                    matrix[i][cs]=headValue(head); 
                }
                cs++; 
            } 
        }

       
        return matrix;
    }
};