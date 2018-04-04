//
//  HelloWorldLayer.cpp
//  helloworld-mobile
//
//  Created by 朱宏达 on 29/03/2018.
//

#include "HelloWorldLayer.hpp"
HelloWorldLayer * HelloWorldLayer::create(){
    HelloWorldLayer * pRet = new HelloWorldLayer();
    if (pRet && pRet->init()) {
        pRet->autorelease();
        return pRet;
    }
    else{
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}

bool HelloWorldLayer::init(){
    if (!Layer::init()) {
        return false;
    }
    
    Size size = Director::getInstance()->getVisibleSize();
    
    Label * label = Label::createWithTTF("HelloWorld", "fonts/Marker Felt.ttf", 24);
    label->setPosition(Vec2(size.width/2, size.height * 5/6));
    this->addChild(label);
    
    auto sprite = Sprite::create("HelloWorld.png");
    sprite->setPosition(Vec2(size.width/2, size.height/2));
    this->addChild(sprite);
    
    //menu
    auto closeItem = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(HelloWorldLayer::menuCloseCallBack, this));
    
    closeItem->setPosition(Vec2(900, 100));
    
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu);
    
    return true;
}

void HelloWorldLayer::menuCloseCallBack(Ref * pSender){
    
}
