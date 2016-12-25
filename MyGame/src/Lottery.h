//
//  Lottery.h
//  FirstGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Lottery : CCSprite {
    
}

@property(nonatomic,retain) NSString *msg;

@property(nonatomic,retain) NSString *fname;

@property(nonatomic,assign) float max;

@property(nonatomic,assign) float min;

+(Lottery *)lottery:(NSString *)name andMsg:(NSString *)content;

@end
