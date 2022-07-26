class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
//         Priority_queue<pair<int,char>>pq;
//         pq.push({a,'a'});
//         pq.push({b,'b'});
//         pq.push({c,'c'});
//         int i=0;
//         while(!pq.empty())
//         {
//             pair<int,char>it=pq.top();
            
//             if(it.first>=1)
//             {
//                 if(s[i-1]!=it.second && s[i-2]!=it.second)
//                 {
//                     s=s+it.second;
//                     it.first=it.first-1;
//                 }
//                 else{
//                     pair<int,int>j=pq.top();
//                 }
//             }
//         }
         priority_queue<pair<int ,char>> q;
    if(a)
    q.push({a,'a'});
    if(b)
    q.push({b,'b'});
    if(c)
    q.push({c,'c'});
    string s;
    while(!q.empty()){
        
        auto top=q.top();
        q.pop();
        int l=s.length();
       
            if(l<2 or s[l-1]!=top.second or s[l-2]!=top.second){
                s+=top.second;
                top.first--;
                if(top.first>0) q.push({top.first,top.second});
            
        }else if(!q.empty()){
             auto t=q.top();
                q.pop();
                 s+=t.second;
                t.first--;
                if(t.first>0) q.push({t.first,t.second});
                q.push(top);
                
            }else break;
    }
    return s;
    }
};
