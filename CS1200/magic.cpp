//Phillip Janowski
//CS1200 Program 1
//list all "magic" numbers or find a counter example
#include <iostream>
#include <fstream>

using namespace std;

void list(int counter_example);
void odd(int i, int &modded_i, int &counter_example, bool &found);
void even(int i, int &modded_i, int &counter_example);
int main()
{
  ofstream out;
  int counter_example = 0;
  int modded_i;
  bool found = false;

  out.open("output.dat");
  for(int i = 2; i <= 5000000000 || found == false; i++)
  {
    modded_i = i;
  //  cout<<"found = "<< boolalpha<<found<<endl;
    do
    {
      cout<<i<<endl;
      if(modded_i % 2 != 0)
        odd(i, modded_i, counter_example, found);
      if(modded_i % 2 == 0)
        even(i, modded_i, counter_example);
      cout<<"modded i ="<<modded_i<<endl;

      
    }while( modded_i != 1 || found != false || i == 5000000000);

    if(found)
      list(counter_example);
  }
  return 0;
}

void list (int counter_example)
{
  cout<<counter_example<<" was found to be a counter example.";
  return;
};

void odd(int i, int &modded_i, int &counter_example, bool &found)
{
  counter_example = i;
  modded_i = modded_i * 3 +1;

  if (modded_i % 2 != 0)
    found = true;
  return;
};

void even(int i, int &modded_i, int &counter_example)
{
  counter_example = i;
  modded_i = modded_i/ 2;

  return;
};