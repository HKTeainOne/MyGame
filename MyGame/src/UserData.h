//
//  UserData.h
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015ๅนด. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserData : NSObject<NSCoding>

@property(nonatomic,assign) int heroType; // 英雄类型
@property(nonatomic,assign) int lev; // 等级
@property(nonatomic,assign) int hpNow; // 血量
@property(nonatomic,assign) int mpNow; // 蓝量
@property(nonatomic,assign) float exp; // 经验
@property(nonatomic,assign) int procession; // 游戏进度
@property(nonatomic,assign) int map; // 所在地图

//@property(nonatomic,assign) BOOL bgsound; // 背景音乐
//@property(nonatomic,assign) BOOL sound; // 音效音乐

@end
