//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSBatchInsertRequestEncodingToken_h
#define NSBatchInsertRequestEncodingToken_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSInputStream, NSString;

@interface NSBatchInsertRequestEncodingToken : NSObject<NSSecureCoding>

@property (readonly, retain, nonatomic) NSString *entityName;
@property (readonly, retain, nonatomic) NSArray *objectsToInsert;
@property (readonly, retain, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) unsigned long long resultType;
@property (readonly, nonatomic) BOOL secure;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initForRequest:(id)request;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NSBatchInsertRequestEncodingToken_h */
