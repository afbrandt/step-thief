//
//  Player.h
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Player : NSManagedObject

@property (nonatomic, retain) NSString * fitBitToken;
@property (nonatomic, retain) NSString * fitBitNickname;
@property (nonatomic, retain) NSNumber * publicScore;
@property (nonatomic, retain) NSNumber * earnedEnergy;
@property (nonatomic, retain) NSNumber * spentEnergy;
@property (nonatomic, retain) NSData * fitBitAvatar;
@property (nonatomic, retain) NSString * fitBitLocation1;
@property (nonatomic, retain) NSString * fitBitLocation2;
@property (nonatomic, retain) NSString * fitBitLocation3;
@property (nonatomic, retain) NSNumber * hasShield;
@property (nonatomic, retain) NSDate * shieldExpirationTimestamp;
@property (nonatomic, retain) NSNumber * hasSmokeBomb;
@property (nonatomic, retain) NSNumber * numberOfSmokeBombs;
@property (nonatomic, retain) NSNumber * hasEnergyBooster;
@property (nonatomic, retain) NSSet *friendList;
@property (nonatomic, retain) NSSet *actionHistory;
@end

@interface Player (CoreDataGeneratedAccessors)

- (void)addFriendListObject:(NSManagedObject *)value;
- (void)removeFriendListObject:(NSManagedObject *)value;
- (void)addFriendList:(NSSet *)values;
- (void)removeFriendList:(NSSet *)values;

- (void)addActionHistoryObject:(NSManagedObject *)value;
- (void)removeActionHistoryObject:(NSManagedObject *)value;
- (void)addActionHistory:(NSSet *)values;
- (void)removeActionHistory:(NSSet *)values;

@end
