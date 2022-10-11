#include <bits/stdc++.h>
using namespace std;
                                        // implementation
class MyHash
{
  int bucket;
  list<int> *table;
  public:
  MyHash(int b)
  {
      bucket=b;
      table = new list<int> [b];
  }
  void insert(int key)
  {
      int i=key%bucket;
      table[i].push_back(key);
  }
  void removeTheHash(int key);
  bool search(int key)
  {
      int i=key%bucket;
      for(auto x: table[i])
      {
          if(x==key)
          {
              return true;
          }
      }
      return false;
  }
  void displayHash();
};


void MyHash::displayHash()
{
    for(int i=0;i<bucket;i++)
    {
        cout<<i;
        for(auto x:table[i])
        {
            cout<<"-->"<<x;
        }
        cout<<endl;
    }
}

void MyHash::removeTheHash(int key)
{
    int i=key%bucket;
    list <int> :: iterator it;
    for(it=table[i].begin();it!=table[i].end();it++)
    {
        if(*it==key)
        {
            break;
        }
    }
    if(it!=table[i].end())
    {
        table[i].erase(it);
    }
}


int main()
{
    MyHash h(7);
    h.insert(63);
    h.insert(56);
    h.insert(57);
    h.insert(11);
    h.removeTheHash(11);
    h.insert(11);
    h.displayHash();
    return 0;
}
