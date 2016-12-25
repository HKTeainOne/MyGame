//
//  BattleResult.m
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015ๅนด. All rights reserved.
//

#import "BattleResult.h"

@implementation BattleResult

@synthesize result;
@synthesize exp;
@synthesize hpMin;
@synthesize mpMin;
@synthesize win;

-(void)dealloc {
    if (result) {
        [result release];
    }
    [super dealloc];
}

- (void)encodeWithCoder:(NSCoder *)aCoder{
    [aCoder encodeObject:self.result forKey:@"result"];
    [aCoder encodeFloat:exp forKey:@"exp"];
    [aCoder encodeInt:hpMin forKey:@"hpMin"];
    [aCoder encodeInt:mpMin forKey:@"mpMin"];
    [aCoder encodeInt:win forKey:@"win"];
}

- (id)initWithCoder:(NSCoder *)aDecoder{
    self = [super init];
    if (self) {
        self.result = [aDecoder decodeObjectForKey:@"result"];
        self.exp = [aDecoder decodeFloatForKey:@"exp"];
        self.hpMin = [aDecoder decodeIntegerForKey:@"hpMin"];
        self.mpMin = [aDecoder decodeIntegerForKey:@"mpMin"];
        self.win = [aDecoder decodeIntegerForKey:@"win"];
    }
    return self;
}

@end
