#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
const int m = 50;
const int n = 100;

int main(){
    //����:һά/��ά����
    vector<int> v(n); //Ĭ�ϳ�ʼ��Ϊ0
    v[5] = 1;

    vector<vector<int>>g(m,vector<int>(n));
    g[5][4] = 1;
    cout<<"һά���飺 "<<v[5]<<" ��ά���飺  "<<g[5][4];

    //�䳤����:һά/��ά
    vector<int> a; //Ĭ�ϳ�ʼ��Ϊ0
    a.push_back(1); //������ĩβԪ�ؼ�1�����鳤�ȼ�1
    a.pop_back(); //ɾ��ĩβԪ�أ����鳤��-1��ע�������鲻Ϊ�յ�����½���
    a.empty(); //���������Ƿ�Ϊ��
    a.size(); //���������е�Ԫ�ظ���

    vector<vector<int>> adj(m);
    adj[0].push_back(1);

    // ջ
    stack<int> s;
    s.push(1);
    s.top();
    s.pop();
    s.empty();
    s.size();

    //����
    queue<int> q;
    q.push(1);
    q.front();
    q.pop();
    q.empty();
    q.size();

    //��(���ȶ���)
    //��ϣ��
    //��ֵ��ϣ��
    //�����
    //��ֵ�����
    //��ѧ
    //�ڴ���������
    //����ͷ�ļ���408���Բ�����ʹ�ã������Ƽ�ʹ�ã�

    return 0;
}

