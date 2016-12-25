//
//  BattleResult.h
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015ๅนด. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BattleResult : NSObject<NSCoding>

@property(nonatomic,retain) NSString *result;
@property(nonatomic,assign) float exp;
@property(nonatomic,assign) int hpMin;
@property(nonatomic,assign) int mpMin;
@property(nonatomic,assign) BOOL win;

@end
