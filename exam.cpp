#include<iostream>
using namespace std;

int main(){
    string a;
    int nums1[5],nums2[5],i = 0,ans = 0;
    getline(cin,a);
    nums1[i] = (int)(a[9]-'0');
    nums1[++i] = (int)(a[11]-'0');
    nums1[++i] = (int)(a[13]-'0');
    nums1[++i] = (int)(a[15]-'0');
    nums1[++i] = (int)(a[17]-'0');
    i = 0;
    nums2[i] = (int)(a[30]-'0');
    nums2[++i] = (int)(a[32]-'0');
    nums2[++i] = (int)(a[34]-'0');
    nums2[++i] = (int)(a[36]-'0');
    nums2[++i] = (int)(a[38]-'0');
    //cout << a[9] << endl;
    // for (int qqq = 0; qqq < 5; qqq++)
    // {
    //     cout << nums2[qqq] << endl;
    // }
    
    for(int q = 0;q < 5; q++){
        for(int k = 0;k < 5; k++){
            if(nums1[q] == nums2[k]){
                int kk = 1;
                for(int j = 1; q+j < 5 &&k+j < 5;j++){
                    if(nums1[q+j] == nums2[k+j]){
                        kk++;
                        cout << nums1[q+j] << "," << nums2[k+j] << endl;
                    }
                }
                if(kk > ans) ans = kk;
            }
        }
    }
    cout << ans << endl;
}