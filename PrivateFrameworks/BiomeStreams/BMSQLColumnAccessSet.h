//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMSQLColumnAccessSet_h
#define BMSQLColumnAccessSet_h
@import Foundation;

@class NSSet, NSString;

@interface BMSQLColumnAccessSet : NSObject

@property (readonly, copy, nonatomic) NSString *table;
@property (readonly, nonatomic) NSSet *columns;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithTable:(id)table columns:(id)columns;
- (BOOL)checkTable:(id)table column:(id)column;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSQLColumnAccessSet_h */
