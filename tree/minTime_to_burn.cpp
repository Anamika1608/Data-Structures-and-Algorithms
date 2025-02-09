class Solution {
    public:
      // finding parent of node
      void findParent(Node* root, map<Node*,Node*>&parents,queue<Node*>&m, int target, map<Node*,bool>&v){
          
          queue<Node*>q;
          q.push(root);
          while(!q.empty()){
              Node* x = q.front();
              if(x->data == target ) {
                  m.push(x);
                  v[x]= true;
                  
              }
              q.pop();
              if(x->left){
                  q.push(x->left);
                  parents[x->left]=x;
              };
              if(x->right){
                  q.push(x->right);
                  parents[x->right]=x;
              }
          }
      };
      
      void findMinTime(map<Node*,Node*>&parents, int&ans, map<Node*,bool>&v,queue<Node*>&q ){
          while(!q.empty()){
              int s = q.size();
              ans++;
              for(int i=0;i<s;i++){
                  Node*x = q.front();
                  q.pop();
                  if( x->left!=NULL && !v[x->left] ) {
                      q.push(x->left);
                      v[x->left] = true;
                  }
                  if( x->right!=NULL && !v[x->right] ) {
                      q.push(x->right);
                      v[x->right] = true;
                  }
                  if(x!=NULL && parents[x]!=NULL && !v[parents[x]]) {
                      q.push(parents[x]);
                      v[parents[x]] = true;
                  }
              }
          }
      }
      
      int minTime(Node* root, int target) {
          if(root == NULL) return 0;
          map<Node*,Node*>parents;
          queue<Node*> m;
          map<Node*,bool>v;
          findParent(root,parents,m,target,v);
          int ans = -1;
          findMinTime(parents,ans,v,m);
          return ans;
      }
  };