//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMSQLSchema_h
#define BMSQLSchema_h
@import Foundation;

@class NSArray, NSString;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithTableName:(id)name columns:(id)columns;
- (id)createTableSQL;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSQLSchema_h */
