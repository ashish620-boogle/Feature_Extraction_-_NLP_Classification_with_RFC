int n;
    cin>>n;
    vector<pair<int,int>> vrr(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        vrr[i].first = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        vrr[i].second = temp;
    }
    int mini = INT_MAX,maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini,vrr[i].first-vrr[i].second);
        maxi = max(maxi,vrr[i].first+vrr[i].second);
    }
    cout<<(mini+maxi)/2;
    if((mini+maxi)%2){
        cout<<".5";
    }
    cout<<endl;
    
