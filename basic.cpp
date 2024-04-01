// #include <bits/stdc++.h>
// using namespace std;
// vector<bool> examSchedule(vector<int>& startTime,vector<int>& endTime, int k) {
//     int maxTime = 0;
//     for (int time : endTime) {
//         maxTime = std::max(maxTime, time);
//     }

//     vector<int> res(maxTime + 1, 0);
//     for (int i = 0; i < startTime.size(); ++i) {
//         res[startTime[i]]++;
//         res[endTime[i] + 1]--;
//     }
//     for (int i = 1; i <= maxTime; ++i) {
//         res[i] += res[i - 1];
//     }
//     vector<bool> result(maxTime + 1, false);
//     for (int i = 0; i <= maxTime; ++i) {
//         result[i] = (res[i] >= k);
//     }
//     return result;
// }

// vector<int> solve(vector<int> &start, vector<int> &end, vector<int> &q_start, vector<int> &q_end, int k) {
//     // for(int i=0;i<q_start.size();i++){
//     //   for(int j=q_start[i];j<q_end[i];j++){

//     //   }
//     // }
//      vector<bool> sol = examSchedule(start, end, k);
//     int n= sol.size();
//     vector<int> f(n,0);
//     int l=0;
//     for(int i=0; i<n; i++){
//         if(sol[i]){
//             l++;
//         }
//         f[i]=l;
//     }
//     int q = q_start.size();
//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         int st = q_start[i];
//         int en = q_end[i];
//         ans.push_back(f[en] - f[st]);
//     }
//  return ans;

// }
// int main(){
//     int n,q,k;cin>>n>>q>>k;
//     vector<int> start,end,q_start,q_end;
//     for(int i=0;i<n;i++){int x;cin>>x;start.push_back(x);}
//     for(int i=0;i<n;i++){int x;cin>>x;end.push_back(x);}
//     for(int i=0;i<q;i++){int x;cin>>x;q_start.push_back(x);}
//     for(int i=0;i<q;i++){int x;cin>>x;q_end.push_back(x);}
//     vector<int> res=solve(start,end,q_start,q_end,k);
//     for(auto i: res){
//       cout<<i<<" ";
//     }
// }
vector<int> minTime(vector<int> start, vector<int> end, vector<int> q_start, vector<int> q_end, int k)
{
    vector<int> ans;
    vector<int> aaye_students(1e6 + 10, 0);
    int n = start.size(), q = q_start.size();
    
    // Count how many students are present at each time slot
    for(int i = 0; i < n; i++)
    {   
        aaye_students[start[i]]++;
        aaye_students[end[i] + 1]--;
    }

    // Calculate prefix sum array
    for(int i = 1; i <= 1e6; i++)
    {
        aaye_students[i] += aaye_students[i - 1];
    }

    // Process queries
    for(int i = 0; i < q; i++)
    {
        int xyz = aaye_students[q_end[i]] - aaye_students[q_start[i] - 1];
        int xyz1 = (xyz >= k) ? 1 : 0;
        ans.push_back(q_end[i] - q_start[i] + 1 - xyz1);
    }
    
    return ans;
}


