//
//  AppDelegate.h
//  MyGame
//
//  Created by LiQiu Yu on 15-10-29.
//  Copyright __YU__ 2015年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property(nonatomic,retain) RootViewController	*viewController;
@property (nonatomic, retain) UIWindow *window;

@end
