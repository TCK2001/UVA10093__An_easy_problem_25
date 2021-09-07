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
//Ê¦ì¤÷êá¶êóêÈâ¦×ëØüõÌÓŞîÜâ¦Ó×íÂn - 1îÜÑÃïÇ£¬ïÈîÊ÷ê61(ÙÍàãòäêÈõÌÓŞñşÓğ62òäêÈ)Ó×íÂğûïÇ£¬ñşé©ìéêóÊ¦ì¤ïÚğ¶á¶êóêÈâ¦õÅûúîÜâ¦í®õóúŞ£¬ö¦ãÀõÌá³îÜn - 1¡£
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input,dic="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; //¸ğµç °ªÀ» ÀÔ·Â;  
	int val[62],i,j; //val´Â À§¿¡²¨ ¼ø¼­ ÀúÀåÇÏ´Â ÇÔ¼ö;
	for(int i=0;i<62;i++)
	{
		val[i]=i; 
	}
	while(getline(cin,input)) //ÀÔ·Â; 
	{
		int sum=0,max=0;
		for(i=0;i<input.length();i++) //¸¸¾à 23 ÀÌ¸é ±æÀÌ´Â 2;
		{
			for(j=0;j<62;j++) //ÇÏ³ª¾¿ °Ë»ç; 
			{
				if(input[i]==dic[j]) //Ã¹¹øÂ°´Â 2 ¿¡ ÀÖÀ½,µÎ¹øÂ° 3¿¡ ÀÖÀ½; 
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
		for(i=max;i<62;i++) //i=max 3ºÎÅÍ 61±îÁö 
		{
			if(sum==0) //2~62¶ó¼­ ÃÖ¼Ò´Â 2 
			{
				cout<<"2"<<endl;
				break;
			}
			else if(sum%i==0) //¸¸¾à ³ª´²Áö¸é i+1 ÀÌ°Ç n-1¸¦ ³ª´«°Å¶ó ´äÀÌ 5ÀÎµ¥ +1 ÇØ¼­ 6 ³ª¿Ãµí;
			{ 
				cout<<i+1<<endl; // ¸Å ¼ıÀÚÀÇ ÇÕÀÇ °ªÀÌ n-1·Î ³ª´²Áö¸é Ãâ·Â; 
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

