//
//  DSStepThiefTabBarController.h
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OAuthIOS/OAuthIOS.h"
@class Player;

@interface DSStepThiefTabBarController : UITabBarController<OAuthIODelegate>

@property (strong, nonatomic) Player *player;
@property (strong, nonatomic) OAuthIOModal *modal;
@property (strong, nonatomic) NSManagedObjectContext *context;

@end
