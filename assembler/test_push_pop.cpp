// Chris Grimes
// cs23001
// test.cpp push() pop() for stack

#include"stack.hpp"

int main(){
  {

    //Setup
    stack<int> test;

    //Test
    test.push(8);
    test.push(6);
    test.push(7);
    test.push(5);
    test.push(3);
    test.push(0);
    test.push(9);

    //Verify
    std::cout<<test.top()<<"==9"<<std::endl;
    assert(test.pop()==9);
    std::cout<<test.top()<<"==0"<<std::endl;
    assert(test.pop()==0);
    std::cout<<test.top()<<"==3"<<std::endl;
    assert(test.pop()==3);
    std::cout<<test.top()<<"==5"<<std::endl;
    assert(test.pop()==5);
    std::cout<<test.top()<<"==7"<<std::endl;
    assert(test.pop()==7);
    std::cout<<test.top()<<"==6"<<std::endl;
    assert(test.pop()==6);
    std::cout<<test.top()<<"==8"<<std::endl;
    assert(test.pop()==8);
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {

    //Setup
    stack<char> test;

    //Test
    test.push('a');
    test.push('b');
    test.push('c');
    test.push('d');
    test.push('e');
    test.push('f');
    test.push('g');

    //Verify
    std::cout<<test.top()<<"==g"<<std::endl;
    assert(test.pop()=='g');
    std::cout<<test.top()<<"==f"<<std::endl;
    assert(test.pop()=='f');
    std::cout<<test.top()<<"==e"<<std::endl;
    assert(test.pop()=='e');
    std::cout<<test.top()<<"==d"<<std::endl;
    assert(test.pop()=='d');
    std::cout<<test.top()<<"==c"<<std::endl;
    assert(test.pop()=='c');
    std::cout<<test.top()<<"==b"<<std::endl;
    assert(test.pop()=='b');
    std::cout<<test.top()<<"==a"<<std::endl;
    assert(test.pop()=='a');
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {

    //Setup
    stack<double> test;

    //Test
    test.push(8.5);
    test.push(6.5);
    test.push(7.5);
    test.push(5.5);
    test.push(3.5);
    test.push(0.5);
    test.push(9.5);

    //Verify
    std::cout<<test.top()<<"==9.5"<<std::endl;
    assert(test.pop()==9.5);
    std::cout<<test.top()<<"==0.5"<<std::endl;
    assert(test.pop()==0.5);
    std::cout<<test.top()<<"==3.5"<<std::endl;
    assert(test.pop()==3.5);
    std::cout<<test.top()<<"==5.5"<<std::endl;
    assert(test.pop()==5.5);
    std::cout<<test.top()<<"==7.5"<<std::endl;
    assert(test.pop()==7.5);
    std::cout<<test.top()<<"==6.5"<<std::endl;
    assert(test.pop()==6.5);
    std::cout<<test.top()<<"==8.5"<<std::endl;
    assert(test.pop()==8.5);
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {

    //Setup
    stack<int> test;

    //Test
    for(int i=0; i<100; ++i)
      test.push(i);

    //Verify
    for(int j=99; j>=0; --j){
      std::cout<<test.top()<<"=="<<j<<std::endl;
      assert(test.pop()==j);
    }
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {

    //Setup
    stack<String> test;
    String a; 

    //Test
    a="help";
    test.push(a);

    //Verify
    std::cout<<test.top()<<"=="<<a<<std::endl;
    assert(test.pop()==a);
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }
  {

    //Setup
    stack<String> test;
    String a;
    String b;
    String c;
    String d; 

    //Test
    a="help";
    b="another girl";
    c="she loves you";
    d="don't let me down";
    test.push(a);
    test.push(b);
    test.push(c);
    test.push(d);

    //Verify
    std::cout<<test.top()<<"=="<<d<<std::endl;
    assert(test.pop()==d);
    std::cout<<test.top()<<"=="<<c<<std::endl;
    assert(test.pop()==c);
    std::cout<<test.top()<<"=="<<b<<std::endl;
    assert(test.pop()==b);
    std::cout<<test.top()<<"=="<<a<<std::endl;
    assert(test.pop()==a);
    std::cout<<test.empty()<<"== True"<<std::endl;
    assert(!(test.empty()==0));

  }

  std::cout<<" passed push() and pop() methods, success"<<std::endl;
}
