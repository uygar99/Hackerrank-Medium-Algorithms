#include <iostream>
#include <vector>
using namespace std;
class Node{
	public:int num,root;
};
int main(){
	int node,edge;
	int x,y;
	int count = 0;
	cin >> node >> edge;
	vector <Node> nodes = vector<Node>(node);	
	for(int i = 0;i < node;i++)
	{
		nodes[i].num = 1;
		nodes[i].root = -1;
	}
	for(int i = 0;i < edge;i++)
	{
		cin >> x >> y;
		nodes[x-1].root = y-1;   
	}
	for(int i = node-1;i > 0;i--)
	{
		if(nodes[i].root >= 0)
			nodes[nodes[i].root].num += nodes[i].num;
	}
	for(int i = 0;i < node;i++)
	{
		if(nodes[i].root >= 0 && nodes[i].num%2== 0)
			count ++;
	}
	cout << count;
	return 0;
}
