// Chris Grimes
// cs23001
// test.cpp for default ctor

#include"stack.hpp"

int main(){

  {
    //Setup
    
    stack<int> test;

    //Test

    std::cout<<test.empty()<<"== true"<<std::endl;

    //Verify

    assert(!(test.empty()==0));

  }
  {
    //Setup
    
    stack<double> test;

    //Test

    std::cout<<test.empty()<<"== true"<<std::endl;

    //Verify

    assert(!(test.empty()==0));

  }
  {
    //Setup
    
    stack<char> test;

    //Test

    std::cout<<test.empty()<<"== true"<<std::endl;

    //Verify

    assert(!(test.empty()==0));

  }
  {
    //Setup
    
    stack<String> test;

    //Test

    std::cout<<test.empty()<<"== true"<<std::endl;

    //Verify

    assert(!(test.empty()==0));

  }

  std::cout<<"passed default ctor tests, success"<<std::endl;
}
