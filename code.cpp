vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int>aa;
    vector<int>b;
    vector<int>v;
    for(int i=0;i<a.size();i++){
        if(a[i]>0){
            aa.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    for(int i=0;i<aa.size();i++){
        v.push_back(aa[i]);
        v.push_back(b[i]);

    }
    return v;
}
