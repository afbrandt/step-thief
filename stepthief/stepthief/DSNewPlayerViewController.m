//
//  DSNewPlayerViewController.m
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import "DSNewPlayerViewController.h"

@interface DSNewPlayerViewController ()

@property (weak, nonatomic) IBOutlet UIButton *startButton;

@end

@implementation DSNewPlayerViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    self.modal = [[OAuthIOModal alloc] initWithKey:@"EF4100vEBO6Ns-qOq-BSjYk-sMs" delegate:self];
}

- (IBAction)startOAuthFlow:(id)sender {
    [self.modal showWithProvider:@"fitbit"];
}

- (void)didReceiveOAuthIOResponse:(OAuthIORequest *)request {
    NSLog(@"OAuth flow succeeded");
    
    
}

- (void)didFailWithOAuthIOError:(NSError *)error {
    NSLog(@"OAuth flow failed");
}

@end
