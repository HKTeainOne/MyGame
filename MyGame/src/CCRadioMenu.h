//
//  CCRadioMenu.h
//  MathNinja
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015ๅนด. All rights reserved.
//

#import "cocos2d.h"

@interface CCRadioMenu : CCMenu {
    CCMenuItem *_curHighlighted;
}

- (void)setSelectedItem_:(CCMenuItem *)item;

@end
