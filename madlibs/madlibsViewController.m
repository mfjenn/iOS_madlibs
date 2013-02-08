//
//  madlibsViewController.m
//  madlibs
//
//  Created by Mary Jenn on 2/7/13.
//  Copyright (c) 2013 Mary Jenn. All rights reserved.
//

#import "MLPoemViewController.h"
#import "madlibsViewController.h"

@interface madlibsViewController ()

@end

@implementation madlibsViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    self.poemLines = [[NSArray arrayWithContentsOfFile:[NSBundle mainBundle] pathForResource:"@madlibs" ofType:@"plist"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}

- (IBAction)goPressed:(id)sender;
{
    MLPoemViewController* poemVC = [[MLPoemViewController alloc]
                                     initWithNibName:@"MLPoemViewController" bundle:nil];
    
    [self.navigationController pushViewController:poemVC animated:YES];
}


@end
