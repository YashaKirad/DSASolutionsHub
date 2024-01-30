vector<int> getSecondOrderElements(int n, vector<int> a) {

    int maxi=-1e9;
    int secmaxi =-1e9;
    int mini=1e9;
    int secmini=1e9;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);

    }
    for(int i=0;i<n;i++){
        if (a[i]>secmaxi && a[i]!=maxi)
        {
            secmaxi=max(secmaxi,a[i]);

        }
        if (a[i]<secmini && a[i]!=mini)
        {
            secmini=min(secmini,a[i]);
        }
    }
    return {secmaxi,secmini};
}
