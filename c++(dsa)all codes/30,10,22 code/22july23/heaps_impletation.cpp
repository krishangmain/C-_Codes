#include <bits/stdc++.h>
using namespace std;
class minHeap{
    vector<int>hp;
    public:
    void push(int x){
        hp.emplace_back(x);
        int index=hp.size()-1;
        while(parent(index)>=o&&hp[index]<hp[parent(index)]){
            swap(hp[index],hp[parent(index)]);
            index=parent(index);
        }
    }
    void pop(){
        if(hp.size()==0)return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        heapify(0);
    }
    void heapify(int i){
          int l=lchild(i), r=rchild(i);
        int smallest=hp[i], smallest_index=i;
        if(smallest>hp[l]){
            smallest=hp[l];
            smallest_index=l;
        }
        if(smallest>hp[r]){
            smallest=hp[r];
            smallest_index=r;
        }
        if(smallest_ind!=i){
            swap(hp[smallest_index], hp[i]);
            heapify(smallest_index);
        }
    }
    int top(){
        return hp[0];
    }
    int size(){
        return hp.size();
    }
    int lchild(int i){
        return 2*i+1;
    }
    int rchild(int i){
        return 2*i+2;
    }
    int parent(int i){
        return (i-1)/2;
    }
}
int main(){
    return 0;
}