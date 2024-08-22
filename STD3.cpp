
{
vector<int> ans;
ans.push_back(5);
ans.push_back(234);
ans.push_back(15);
ans.push_back(54);
ans.push_back(125) ;


//sort in increating  order

sort (ans.begin(),ans.end());
for(int i=0;i<ans.size(); i++)
cout<<[i]<<" ";

cout<<endl;

//sort in decreasing order

sort(ans.begin(),ans.end());
for(int i=0; i<ans.size();i++)
cout<<[i]<<" ";

}


//serch in binary serch


cout<<binary_serch(ans.begin(),ans.end(),55)<<endl;

cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;

