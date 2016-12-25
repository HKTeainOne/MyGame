//
//  MainScene.h
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015ๅนด. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface MainScene : CCLayer

+(CCScene *) scene;

-(void)createScene;

-(void)createHero;

-(void)createNpc;

-(float)distanceFromPointX:(CGPoint)start distanceToPointY:(CGPoint)end;
-(void)moveNow:(CGPoint)pt;

-(void)createHeader;
-(void)createMenus;

-(void)battle;

-(void)battle2;

@end
