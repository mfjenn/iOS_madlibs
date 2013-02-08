//
//  madlibsViewController.h
//  madlibs
//
//  Created by Mary Jenn on 2/7/13.
//  Copyright (c) 2013 Mary Jenn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface madlibsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textField1;
@property (weak, nonatomic) IBOutlet UITextField *textField2;
@property (weak, nonatomic) IBOutlet UITextField *textField3;
@property (weak, nonatomic) IBOutlet UITextField *textField4;

@property (strong, nonatomic) NSArray* poemLines;

- (IBAction)goPressed:(id)sender;

@end
