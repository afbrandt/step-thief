//
//  DSNewPlayerViewController.h
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OAuthIOS/OAuthIOS.h"

@interface DSNewPlayerViewController : UIViewController<OAuthIODelegate>

@property (strong, nonatomic) OAuthIOModal *modal;

@end
