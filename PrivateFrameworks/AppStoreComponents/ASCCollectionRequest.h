//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCCollectionRequest_h
#define ASCCollectionRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface ASCCollectionRequest : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, nonatomic) long long limit;

/* class methods */
+ (id)_requestWithID:(id)id kind:(id)kind context:(id)context limit:(long long)limit clientID:(id)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithID:(id)id kind:(id)kind context:(id)context limit:(long long)limit clientID:(id)id;
- (id)collectionRequestWithClientID:(id)id;
- (id)initWithID:(id)id kind:(id)kind context:(id)context limit:(long long)limit;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)_collectionRequestWithClientID:(id)id;
@end

#endif /* ASCCollectionRequest_h */
