//
//  HelloWorldLayer.hpp
//  helloworld-mobile
//
//  Created by 朱宏达 on 29/03/2018.
//

#ifndef HelloWorldLayer_hpp
#define HelloWorldLayer_hpp

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;
class HelloWorldLayer:public Layer
{
public:
    static HelloWorldLayer * create();
    virtual bool init();
    
    
    void menuCloseCallBack(Ref * pSender);
};

#endif /* HelloWorldLayer_hpp */
