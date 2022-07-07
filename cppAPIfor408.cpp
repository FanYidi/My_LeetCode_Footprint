#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
const int m = 50;
const int n = 100;

int main(){
    //数组:一维/二维数组
    vector<int> v(n); //默认初始化为0
    v[5] = 1;

    vector<vector<int>>g(m,vector<int>(n));
    g[5][4] = 1;
    cout<<"一维数组： "<<v[5]<<" 二维数组：  "<<g[5][4];

    //变长数组:一维/二维
    vector<int> a; //默认初始化为0
    a.push_back(1); //给数组末尾元素加1，数组长度加1
    a.pop_back(); //删除末尾元素，数组长度-1，注意在数组不为空的情况下进行
    a.empty(); //返回数组是否为空
    a.size(); //返回数组中的元素个数

    vector<vector<int>> adj(m);
    adj[0].push_back(1);

    // 栈
    stack<int> s;
    s.push(1);
    s.top();
    s.pop();
    s.empty();
    s.size();

    //队列
    queue<int> q;
    q.push(1);
    q.front();
    q.pop();
    q.empty();
    q.size();

    //堆(优先队列)
    //哈希表
    //键值哈希表
    //红黑树
    //键值红黑树
    //数学
    //内存分配与回收
    //万能头文件（408考试不建议使用，机试推荐使用）

    return 0;
}

