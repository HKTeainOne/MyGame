//
//  TalkScene.h
//  FirstGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "TalkObject.h"

@interface TalkScene : CCLayer {
    
}

@property(nonatomic,retain) TalkObject *talkObj;
@property(nonatomic,retain) CCRenderTexture* tx;

+(CCScene *) scene:(TalkObject *)tkObj andBg:(CCRenderTexture*)texture;

-(id) initWithObj:(TalkObject *)tkObj andBg:(CCRenderTexture*)texture;

-(void)createBgScene;

-(void)createTalkScene;

-(void)talking;

-(void)talkEnd;

@end
