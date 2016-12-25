//
//  LotteryScene.h
//  FirstGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Lottery.h"

@interface LotteryScene : CCLayer {
    
}

@property(nonatomic,retain) NSMutableArray *iconArray;

+(CCScene *) scene;

-(void)createScene;

-(void)addIcon;

-(void)showLotteryDetail:(Lottery *)lott;

@end
