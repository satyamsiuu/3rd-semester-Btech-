#include<iostream>
using namespace std;
class ShoppingCart
{
	private:
		static int MAX_ITEMS;
		static int count;
		string items[MAX_ITEMS];
		int quantity[MAX_ITEMS];
		double item_price[MAX_ITEMS];
		double total_price;
		
	public:
		void addItem(string item,int quantity, double price)
		{
			int f=0;
			for(int i=0;i<count;i++)
			{
				if(items[i]==item)
				{
					f=1;				
					quantity[i]++;
					total_price+=price;
				}
			}
			if(count == MAX_ITEMS-1)
			{
				cout<<"Cart is full!\n";
			}
			else if(f==0)
			{
				items[count]=item;
				this->quantity[count]=quantity;
				total_price+=price;
				item_price[count] = price;
			}
			cout<<"Added Item in the cart!\n";
		}
		
		void removeItem(string item)
		{
			
