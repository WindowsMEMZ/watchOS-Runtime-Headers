//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICSQLiteQueryResults_h
#define ICSQLiteQueryResults_h
@import Foundation;

#include "ICSQLiteBinding-Protocol.h"
#include "ICSQLiteStatement.h"

@class NSNumber, NSString;

@interface ICSQLiteQueryResults : NSObject<ICSQLiteBinding> {
  /* instance variables */
  ICSQLiteStatement *_statement;
}

@property (readonly, nonatomic) long long firstInt64Value;
@property (readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property (readonly, copy, nonatomic) NSString *firstStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStatement:(id)statement;
- (void)enumerateRowsUsingBlock:(id /* block */)block;
- (void)bindDouble:(double)double atPosition:(int)position;
- (void)bindFloat:(float)float atPosition:(int)position;
- (void)bindInt:(int)int atPosition:(int)position;
- (void)bindInt64:(long long)int64 atPosition:(int)position;
- (void)bindNullAtPosition:(int)position;
- (void)bindNumber:(id)number atPosition:(int)position;
- (void)bindData:(id)data atPosition:(int)position;
- (void)bindDataCopy:(id)copy atPosition:(int)position;
- (void)bindString:(id)string atPosition:(int)position;
- (void)bindStringCopy:(id)copy atPosition:(int)position;
- (int)clearBindings;
@end

#endif /* ICSQLiteQueryResults_h */
