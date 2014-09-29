//
//  Action.h
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Player;

@interface Action : NSManagedObject

@property (nonatomic, retain) NSNumber * didStealFrom;
@property (nonatomic, retain) NSDate * actionTimestamp;
@property (nonatomic, retain) NSString * fitBitNickname;
@property (nonatomic, retain) NSNumber * energyAmount;
@property (nonatomic, retain) Player *actionParticipant;

@end
