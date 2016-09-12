//
//  main.cpp
//  IQ seminar
//
//  Created by xuefei liu on 8/27/16.
//  Copyright © 2016 xuefei liu. All rights reserved.
//

#include <eigen3/Eigen/Dense>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <iostream>
#include <memory>

class A{};

int main()
{
    using Eigen::MatrixXd;
   
    
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
    
    boost::shared_ptr<A> pA(new A);
    
    std::cout << pA.get() << std::endl;
    
    boost::shared_ptr<A> pB(pA);
    
    std::cout << pA.get() << std::endl;
    std::cout << pB.get() << std::endl;
    
    return 0;
}

