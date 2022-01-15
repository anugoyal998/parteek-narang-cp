int i = 0;
    int j = 0;
    queue<int> q;
    vi ans;
    while(j<n){
        if(arr[j]<0)q.push(j);
        if(j-i+1<k)j++;
        else{
            if(q.size()==0)ans.pb(0);
            else{
                ans.pb(arr[q.front()]);
            }
            if(i==q.front())q.pop();
            i++;
            j++;
        }
    }