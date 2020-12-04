///*Perceptron*/
//#include<bits/stdc++.h>
//using namespace std;
//#define maxn 10
//struct couple{
//    double x,y,z;
//};
//double a[maxn]={10,5,7,4,4,5,8,8,7,6};
//double b[maxn]={1,2,1,2.5,1,0.5,0.5,1,0.3,0.3};
//int c[maxn]={1,1,1,1,-1,-1,-1,1,-1,-1};
//int id[maxn]={0,1,2,3,4,5,6,7,8,9};
//
//couple w;
//couple feature[maxn];
//int h(couple tmp){
//    if (w.x*tmp.x + w.y*tmp.y + w.z> 0)
//            return 1;
//    else return -1;
//}
//int main(){
//  int i;
//    w.x = 0.0001;
//    w.y = 0.002;
//    w.z = 0.004;
//  for(i=0;i<maxn;i++){
//    feature[i].x=a[i];
//    feature[i].y=b[i];
//    feature[i].z=1.0;
//  }
//  int dem=0;
//  while(true){
//        dem=0;
//    random_shuffle(id,id+maxn);
//    for(auto p: id)
//    if (h(feature[p]) == c[p]) dem++;
//    else {
//        w.x = w.x + c[p] * feature[p].x;
//        w.y = w.y + c[p] * feature[p].y;
//        w.z = w.z + c[p] * feature[p].z;
//    }
//    if(dem==maxn) break;
//  }
//  cout<<w.x<<" "<<w.y<<" "<<w.z<<'\n';
//  couple input;
//  input.x=4;
//  input.y=3;
//  input.z=1;
//  cout<<h(input);
//  return 0;
//}
///*BFS*/
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define maxn 15
//map<char,ll> mt;
//vector<ll> adj[maxn];
//bool visited[maxn];
//ll parent[maxn];
//void init(){
//  mt['S']='S'-'A';
//  mt['A']='A'-'A';
//  mt['C']='C'-'A';
//  mt['D']='D'-'A';
//  mt['B']='B'-'A';
//  mt['E']='E'-'A';
//  mt['F']='F'-'A';
//  mt['G']='G'-'A';
//  mt['H']='H'-'A';
//}
//void solve(){
//  vector<ll> res;
//  res.clear();
//  res.push_back(mt['G']);
//  while(res[res.size()-1]!=mt['S']){
//    res.push_back(parent[res[res.size()-1]]);
//  }
//  reverse(res.begin(),res.end());
//  for(auto p: res) cout<<(char)(p+'A')<<" ";
//}
//void BFS(ll start){
//   visited[start]=true;
//   queue<ll> s;
//   s.push(start);
//   while(!s.empty()){
//     ll p = s.front();
//     s.pop();
//     if(p==mt['G']) {solve();return ;}
//     for(auto u: adj[p]){
//        if(visited[u]==false){
//            visited[u]=true;
//            parent[u]=p;
//            s.push(u);
//        }
//     }
//   }
//}
//int main(){
//    memset(visited,false,sizeof(visited));
//    init();
////    cout<<mt['S']<<'\n';
//    ll n,m;
//    cin>>n>>m;
//    ll i;
//    for(i=0;i<m;i++){
//        char u,v;
//        cin>>u>>v;
//        ll tmp_u,tmp_v;
//        tmp_u=mt[u];
//        tmp_v=mt[v];
//        adj[tmp_u].push_back(tmp_v);
//        adj[tmp_v].push_back(tmp_u);
//    }
//    ll j;
//    /*Liet ke*/
//    for(i=0;i<n;i++){
//        if(i==n-1){
//            cout<<" Nhung dinh ke voi dinh "<<(char)('A'+18)<<" la: ";
//        for(auto p: adj[18]) cout<<(char)('A'+p)<<",";
//        cout<<'\n';
//        continue;
//        }
//        cout<<" Nhung dinh ke voi dinh "<<(char)('A'+i)<<" la: ";
//        for(auto p: adj[i]) cout<<(char)('A'+p)<<",";
//        cout<<'\n';
//        }
//    /*BFS*/
//    BFS(mt['S']);
//    return 0;
//}
///*
//9 13
//A D
//D F
//S B
//B G
//C E
//E H
//A S
//D B
//F G
//S C
//B E
//G H
//F E
//*/
///*
//BFS: S->B->G
//*/
///*DFS*/
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define maxn 15
//map<char,ll> mt;
//vector<ll> adj[maxn];
//bool visited[maxn];
//ll parent[maxn];
//void init(){
//  mt['S']='S'-'A';
//  mt['A']='A'-'A';
//  mt['C']='C'-'A';
//  mt['D']='D'-'A';
//  mt['B']='B'-'A';
//  mt['E']='E'-'A';
//  mt['F']='F'-'A';
//  mt['G']='G'-'A';
//  mt['H']='H'-'A';
//}
//void solve(){
//  vector<ll> res;
//  res.clear();
//  res.push_back(mt['G']);
//  while(res[res.size()-1]!=mt['S']){
//    res.push_back(parent[res[res.size()-1]]);
//  }
//  reverse(res.begin(),res.end());
//  for(auto p: res) cout<<(char)(p+'A')<<" ";
//}
//void DFS(ll start){
//   visited[start]=true;
//   stack<ll> s;
//   s.push(start);
//   while(!s.empty()){
//     ll p = s.top();
//     s.pop();
//     if(p==mt['G']) {solve();return ;}
//     for(auto u: adj[p]){
//        if(visited[u]==false){
//            parent[u]=p;
//            visited[u]=true;
//            s.push(u);
//        }
//     }
//   }
//}
//int main(){
//    memset(visited,false,sizeof(visited));
//    init();
////    cout<<mt['S']<<'\n';
//    ll n,m;
//    cin>>n>>m;
//    ll i;
//    for(i=0;i<m;i++){
//        char u,v;
//        cin>>u>>v;
//        ll tmp_u,tmp_v;
//        tmp_u=mt[u];
//        tmp_v=mt[v];
//        adj[tmp_u].push_back(tmp_v);
//        adj[tmp_v].push_back(tmp_u);
//    }
//    ll j;
//    /*Liet ke*/
//    for(i=0;i<n;i++){
//        if(i==n-1){
//            cout<<" Nhung dinh ke voi dinh "<<(char)('A'+18)<<" la: ";
//        for(auto p: adj[18]) cout<<(char)('A'+p)<<",";
//        cout<<'\n';
//        continue;
//        }
//        cout<<" Nhung dinh ke voi dinh "<<(char)('A'+i)<<" la: ";
//        for(auto p: adj[i]) cout<<(char)('A'+p)<<",";
//        cout<<'\n';
//        }
//    /*DFS*/
//    DFS(mt['S']);
//    return 0;
//}
///*
//9 13
//A D
//D F
//S B
//B G
//C E
//E H
//A S
//D B
//F G
//S C
//B E
//G H
//F E
//*/
///*DFS: S- C - E - F - G*/
/*Linear Regression*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 15
#define eps 1e-6
double chieucao[maxn]={147,150,153,155,158,160,163,165,168,170,173,175,178,180,183};
double cannang[maxn]={49,50,51,52,54,56,58,59,60,72,63,64,66,67,68};
/*alpha - learning rate*/
double w1=0.0001,w0=0.005,alpha=0.01;
double old_value = 0;
/*cost function*/
double f(double p){
  double tmp = p*w1+w0;
  return tmp;
}
double J(){
   double sum=0;
   for(ll i=0;i<maxn;i++){
      sum=sum+(f(chieucao[i])-cannang[i])*(f(chieucao[i])-cannang[i]);
   }
   sum = sum * 1.0/maxn;
   return sum;
}
double grad1(){
   double sum=0;
   for(ll i=0;i<maxn;i++){
      sum=sum+(f(chieucao[i])-cannang[i]);
   }
   sum = sum * 1.0/maxn;
   return sum;
}
double grad2(){
   double sum=0;
   for(ll i=0;i<maxn;i++){
      sum=sum+(f(chieucao[i])-cannang[i])*chieucao[i];
   }
   sum = sum * 1.0/maxn;
   return sum;
}
bool check(){

}
int main(){
    old_value = 0.0;
    double new_value;

   while(1){
//    new_value = J();
//    if(abs(new_value-old_value)<eps) break;
//        old_value = J();
        w0 = w0 - alpha * grad1();
        w1 = w1 - alpha * grad2();
        if(check()) break;
//        new_value = J();
   }
   cout<<w1<<" "<<w0<<'\n';
   double redic1 = 155.0;
   double redic2 = 160.0;
   cout<<f(redic1)<<'\n';
   cout<<f(redic2)<<'\n';
}



