//
//  Lottery.m
//  FirstGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import "Lottery.h"


@implementation Lottery

@synthesize msg,fname,max,min;

-(void)dealloc{
    [msg release];
    [fname release];
    [super dealloc];
}

+(Lottery *)lottery:(NSString *)name andMsg:(NSString *)content{
    Lottery *lt = [Lottery spriteWithFile:name];
    lt.fname = name;
    lt.msg = content;
    return lt;
}


@end
