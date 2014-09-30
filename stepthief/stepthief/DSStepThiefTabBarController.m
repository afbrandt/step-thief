//
//  DSStepThiefTabBarController.m
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import "DSStepThiefTabBarController.h"
#import "AppDelegate.h"
#import "Player.h"

@interface DSStepThiefTabBarController ()

@property (assign, nonatomic) BOOL isNewPlayer;

@end

@implementation DSStepThiefTabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSArray *result = nil;
    NSError *error = nil;
    
    self.context = ((AppDelegate *)[[UIApplication sharedApplication] delegate]).managedObjectContext;
    NSEntityDescription *entityDescription = [NSEntityDescription entityForName:@"Player" inManagedObjectContext:self.context];
    
    NSFetchRequest *request = [NSFetchRequest new];
    [request setEntity:entityDescription];
    
    result = [self.context executeFetchRequest:request error:&error];
    self.modal = [[OAuthIOModal alloc] initWithKey:@"EF4100vEBO6Ns-qOq-BSjYk-sMs" delegate:self];
    
    if ([result count] == 0) {
        NSLog(@"No player data found... starting new player flow");
        self.isNewPlayer = YES;
    }
    // Do any additional setup after loading the view.
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    if (self.isNewPlayer) {
        //New player logic goes here...
        [self.modal showWithProvider:@"fitbit"];
    }
    
}

- (void)didReceiveOAuthIOResponse:(OAuthIORequest *)request {
    NSLog(@"OAuth flow succeeded");
    NSDictionary *creds = [request getCredentials];
    NSError *error;
    for (id key in creds) {
        NSLog(@"key: %@, value: %@ \n", key, [creds objectForKey:key]);
    }
    self.player = [Player createPlayerFromContext:self.context];
    [self.player setFitBitToken: [creds valueForKey:@"oauth_token"]];
    [self.context save:&error];
    self.isNewPlayer = NO;
}

- (void)didFailWithOAuthIOError:(NSError *)error {
    NSLog(@"OAuth flow failed");
}


@end
