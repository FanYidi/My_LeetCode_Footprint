#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int index = m + n - 1;
    int aindex = m - 1;
    int bindex = n - 1;
    while(aindex >= 0 && bindex >= 0) {
        if(nums1[aindex] > nums2[bindex]) {
            nums1[index--] = nums1[aindex--];
        } else {
            nums1[index--] = nums2[bindex--];
        }
    }
    while(bindex >= 0) {
        nums1[index--] = nums2[bindex--];
    }
}

int main(){
    int m;
    int n;
    scanf("%d%d", &n, &m);
    vector<int> nums1(m+n);
    vector<int> nums2(n);
    for(int i = 0; i <= m + n - 1; i++)
        scanf("%d", &nums1[i]);
    for(int i = 0; i <= n - 1; i++)
        scanf("%d", &nums2[i]);
    printf("finish scanf \n");

    merge(nums1, m, nums2, n);
    for(int i = 0; i <= m + n -1; i++){
        printf("%d\n", nums1[i]);
    }
    printf("finish merge \n");
    return 0;
}
