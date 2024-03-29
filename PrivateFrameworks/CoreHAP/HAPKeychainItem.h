//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPKeychainItem_h
#define HAPKeychainItem_h
@import Foundation;

#include "HMFObject.h"
#include "NSMutableCopying-Protocol.h"

@class NSData, NSDate, NSNumber, NSString;

@interface HAPKeychainItem : HMFObject<NSMutableCopying>

@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSData *valueData;
@property (nonatomic) BOOL syncable;
@property (readonly, nonatomic) BOOL invisible;
@property (nonatomic) void * platformReference;
@property (retain, nonatomic) NSData *genericData;
@property (retain, nonatomic) NSString *viewHint;
@property (retain, nonatomic) NSDate *creationDate;

/* class methods */
+ (BOOL)isQueryResultValid:(struct __CFDictionary *)valid shouldIncludeData:(BOOL)data;

/* instance methods */
- (id)description;
- (id)initWithQueryResult:(struct __CFDictionary *)result shouldIncludeData:(BOOL)data;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (BOOL)matchesPublicKeyData:(id)data;
- (BOOL)isSyncable;
- (BOOL)isInvisible;
@end

#endif /* HAPKeychainItem_h */
