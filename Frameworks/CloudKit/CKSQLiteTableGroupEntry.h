//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSQLiteTableGroupEntry_h
#define CKSQLiteTableGroupEntry_h
@import Foundation;

@class NSDate, NSDictionary, NSNumber, NSString;

@interface CKSQLiteTableGroupEntry : NSObject

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSString *creatingClass;
@property (copy, nonatomic) NSDictionary *groupData;

/* class methods */
+ (double)expirationTime;

/* instance methods */
- (id)initWithName:(id)name;
- (id)description;
- (void)deleteTables:(id)tables;
- (BOOL)isExpired;
@end

#endif /* CKSQLiteTableGroupEntry_h */
