//
//  CCMenuItemLabel2.m
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015ๅนด. All rights reserved.
//

#import "CCMenuItemLabel2.h"

@implementation CCMenuItemLabel2

@synthesize skillIcon;
@synthesize skillName;
@synthesize skillDescription;

-(void)dealloc{
    
    if (skillIcon) {
        [skillIcon release];
    }
    
    if (skillName) {
        [skillName release];
    }
    
    if (skillDescription) {
        [skillDescription release];
    }
    
    [super dealloc];
}

@end
