/*
Sample Input
3
5
A
Sample Output
4
6
11
*/
//ʦ������������������������n - 1�����ǣ�������61(����������������62����)�������ǣ��������ʦ���������������������ޣ����������n - 1��
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input,dic="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; //��� ���� �Է�;  
	int val[62],i,j; //val�� ������ ���� �����ϴ� �Լ�;
	for(int i=0;i<62;i++)
	{
		val[i]=i; 
	}
	while(getline(cin,input)) //�Է�; 
	{
		int sum=0,max=0;
		for(i=0;i<input.length();i++) //���� 23 �̸� ���̴� 2;
		{
			for(j=0;j<62;j++) //�ϳ��� �˻�; 
			{
				if(input[i]==dic[j]) //ù��°�� 2 �� ����,�ι�° 3�� ����; 
				{
					sum+=val[j]; //sum=2,sum=5; 
					if(val[j]>max)
					{
						max=val[j]; //max=2,max=3;
					}
					break;
				}
			}
		}
		for(i=max;i<62;i++) //i=max 3���� 61���� 
		{
			if(sum==0) //2~62�� �ּҴ� 2 
			{
				cout<<"2"<<endl;
				break;
			}
			else if(sum%i==0) //���� �������� i+1 �̰� n-1�� �����Ŷ� ���� 5�ε� +1 �ؼ� 6 ���õ�;
			{ 
				cout<<i+1<<endl; // �� ������ ���� ���� n-1�� �������� ���; 
				break;
			}
			
		}
		if(i==62)
		{
			cout<<"such number is impossible!"<<endl;
		}
	}
return 0;
}

