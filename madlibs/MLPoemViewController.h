//
//  MLPoemViewController.h
//  madlibs
//
//  Created by Mary Jenn on 2/7/13.
//  Copyright (c) 2013 Mary Jenn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLPoemViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *poemLabel;

@property (strong, nonatomic) NSString* poem;

@end
