#include <iostream>
using namespace std;

int main()
{
int count = 0;
for (int i = 1; i <= 10; i++)
{
  for (int j = i; j >=0; j--)
  {
   j--;
count++;
  }
}
cout<<count;
return 1;

}