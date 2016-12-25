//
//  LoadScene.h
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface LoadScene : CCLayer {
    
}

@property(nonatomic,retain) CCScene *loadScene;

+(CCScene *) scene;

-(void)createScene;

-(void)createSC;

-(void)toScene;

@end
