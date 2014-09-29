//
//  Friend.h
//  stepthief
//
//  Created by Andrew Brandt on 9/29/14.
//  Copyright (c) 2014 Andrew Brandt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Friend : NSManagedObject

@property (nonatomic, retain) NSString * fitBitNickname;
@property (nonatomic, retain) NSData * fitBitAvatar;
@property (nonatomic, retain) NSNumber * publicScore;

@end
