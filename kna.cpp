# include<iostream>
# include<algorithm>
using namespace std;
struct knapsack
{
	int weight;
	int profit;
};
bool comp(knapsack a, knapsack b)
{
	double r1 =(double)a.profit/a.weight;
	double r2=(double)b.profit/b.weight;
	return r1>r2;
}
int main()
{
	int n;
	int capacity;
	cout<<"enter the size\n";
	cin>>n;
	cout<<"enter capacity\n";
	cin>>capacity;
	knapsack arr[n];
	cout<<"Enter value and weight\n";
	for(int j=0;j<n;j++)
	{
		cin>>arr[j].profit;
		cin>>arr[j].weight;
	}
	//knapsack sack[n];
	float profit=0;
	sort(arr,arr+n,comp);
	
	int i=0;
	while(capacity>0)
	{
		if(arr[i].weight<=capacity)
		{
			capacity=capacity-arr[i].weight;
			profit=profit+arr[i].profit;
			//cout<<profit<<" ";
			
		}
		else if(capacity<arr[i].weight)
		{
			double d=(double)arr[i].profit/arr[i].weight;
			profit=profit+d*capacity;
			break;
		}
		i++;
	}
	cout<<"max profit is "<<profit<<endl;
	return 0;
	
}

