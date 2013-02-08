//
//  madlibsAppDelegate.h
//  madlibs
//
//  Created by Mary Jenn on 2/7/13.
//  Copyright (c) 2013 Mary Jenn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class madlibsViewController;

@interface madlibsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) madlibsViewController* viewController;

@property (strong, nonatomic) UINavigationController* navController;

@end
