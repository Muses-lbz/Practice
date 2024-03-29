﻿//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char x[] = { "I LOVE YOU!" };
//	int y;
//	scanf_s("%d", &y);
//	if (y == 1)
//	{
//		printf("%s\n", x);
//	}
//	else
//	{
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
////问题描述，ABC + EFG = HIJ，其中A...J对应1-9中的某个数，使得等号成立，求出可能的情况
////EFG + ABC = HIJ和上面的算是一种情况
//
////这一问题可以用暴力枚举循环，因为某个数被用过之后就不能在被别的地方用，所以需要用桶标记法来标记该数是否被用过
////但这就需要嵌套10层循环，然后如果如果用到了某个数，则将桶置为1，最后看所以桶之和是否为9，为9说明每个数都被用了一次
//
////但你是否觉得过于复杂，所以我们引入了:深度优先搜索算法，该算法的基本思路是：重点是解决当前的问题，然后解决下一个问题的步骤与解决该问题的步骤一致
//
////简单模型
////
////判断边界，不满足边界条件，则跳出深度优先搜索
////尝试每一种可能（for循环）
////{
////	继续下一步
////}
////返回
//
////解题思路：将9个空格看做待填入数的9个空格，每次填入一个，直到填满，判断是否符合条件,符合条件则+1，则推到上一个格子处重新填数
//
//void DFS(int step, vector<int>& v1, vector<int>& v2, int& count)//v1表示每一步填入的数；v2为标记，相当于上面的book
//{
//	//边界条件
//	//因为是9个数，从1开始,所以如果step > 9准备往第10个盒子里放数据；说明此轮搜索完毕，前9个盒子里面有数据，判断是否符合  相加和相等条件；如何跳出（边界条件，控制递归结束）
//	if (step > 9)
//	{
//		if (v1[1] * 100 + v1[2] * 10 + v1[3] + v1[4] * 100 + v1[5] * 10 + v1[6] == v1[7] * 100 + v1[8] * 10 + v1[9])
//		{
//			count++;
//			/*printf("%d%d%d+%d%d%d = %d%d%d\n", v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v1[7], v1[8], v1[9]);*/
//		}
//		return;
//	}
//	//开始解决第一步填入的数
//	for (int i = 1; i <= 9; i++)
//	{
//		if (v2[i] == 0)
//		{
//			v1[step] = i;//将i填入第一步step中，然后置其标记为1
//			v2[i] = 1;//表明i已经被用了，不能再用了
//			//然后开始第二步
//			DFS(step + 1, v1, v2, count);
//			//释放已经用过的数，否则下次循环不能用
//			v2[i] = 0;
//		}
//	}
//	return;
//}
//
//int main()
//{
//	vector<int> v1(10, INT_MAX);
//	vector<int> v2(10, 0);
//	int count = 0;
//	DFS(1, v1, v2, count);
//	cout << "满足相加和相等条件的情况共有" << count / 2 << "种。" << endl << endl; //因为173 + 286 = 459 与 286 + 173 = 459为同一种
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstdlib>
//using namespace std;
//
//class Solution
//{
//public:
//	int threeSumClosest(vector<int>& nums, int target)
//	{
//		sort(nums.begin(), nums.end());
//		int cur, left, right;
//		cur = 0;
//		int closest = nums[0] + nums[1] + nums[2];
//		while (cur < nums.size() - 2)
//		{
//			left = cur + 1;
//			right = nums.size() - 1;
//			int n;
//			while (left < right)
//			{
//				n = nums[cur] + nums[left] + nums[right];
//				if (abs(target - n) < abs(target - closest))
//				{
//					closest = n;
//				}
//				if (n == target)
//				{
//					break;
//				}
//				else if (n > target)
//				{
//					int t = right - 1;
//					while (t > left && nums[t] == nums[right])
//						t--;
//					right = t;
//				}
//				else
//				{
//					int t = left + 1;
//					while (t < right && nums[t] == nums[left])
//						t++;
//					left = t;
//				}
//			}
//			int t = cur + 1;
//			while (t < nums.size() && nums[t] == nums[cur])
//				t++;
//			cur = t;
//		}
//		return closest;
//	}
//};
//
//int main()
//{
//	Solution S;
//	
//	vector<int>& nums;
//	
//	int target;
//	S.threeSumClosest(nums, target);
//
//}

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	vector <int> v;
	int num;
	for (int i = 0; i < 5; i++) //以输入5个数为例
	{
		cin >> num;
		v.push_back(num);
	}
	system("pause");
	return 0;
}