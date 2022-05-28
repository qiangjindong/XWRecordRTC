//
//  XWViewController.m
//  XWRecordRTC
//
//  Created by qiangjindong on 05/27/2022.
//  Copyright (c) 2022 qiangjindong. All rights reserved.
//

#import "XWViewController.h"
#import "XWServerSocket.h"
#import "XWYUVConverter.h"

@interface XWViewController ()

@end

@implementation XWViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
  
  [[XWServerSocket sharedManager] setupSocket];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
