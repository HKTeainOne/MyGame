//
//  Sound.h
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Sound : NSObject {
    
}

+(void)playSound:(NSString *)soundName;

+(void)playBGSound:(NSString *)soundName;

@end
