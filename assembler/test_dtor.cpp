// Chris Grimes
// cs23001
// test.cpp dtor for stack.cpp

#include"stack.hpp"

int main(){
  {   
    {
    //Setup
    stack<int> test;

    
    //Test
    test.push(99);
    std::cout<<" the top is "<<test.top()<<std::endl;
    }
    //Verify
    stack<int> test;
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {   
    {
    //Setup
    stack<char> test;

    
    //Test
    test.push('a');
    std::cout<<" the top is "<<test.top()<<std::endl;
    }
    //Verify
    stack<char> test;
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {   
    {
    //Setup
    stack<double> test;

    
    //Test
    test.push(99.66432356);
    std::cout<<" the top is "<<test.top()<<std::endl;
    }
    //Verify
    stack<double> test;
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {   
    {
    //Setup
    stack<int> test;

    
    //Test
      for(int i=0;i<100;++i){
        test.push(i);
        std::cout<<" the top is "<<test.top()<<std::endl;
      }
    }
    //Verify
    stack<int> test; 
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
 {   
    {
    //Setup
    stack<String> test;

    
    //Test
    test.push("a");
    std::cout<<" the top is "<<test.top()<<std::endl;
    }
    //Verify
    stack<String> test;
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {   
    {
    //Setup
    stack<String> test;

    
    //Test
    test.push("a");
    test.push("it won't be long");
    test.push("good day sunshine");
    test.push("i need to laugh");
    test.push("i'm in love and it's a sunny day"); 
    std::cout<<" the top is "<<test.top()<<std::endl;
    }
    //Verify
    stack<String> test;
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
    
 
  std::cout<<"passed dtor tests, success"<<std::endl;
}
