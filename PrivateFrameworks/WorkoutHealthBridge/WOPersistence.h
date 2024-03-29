//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 749.20.0.0.0
//
#ifndef WOPersistence_h
#define WOPersistence_h
@import Foundation;

#include "HDSyncCodable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WOSyncIdentity.h"

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface WOPersistence : NSObject<NSSecureCoding, HDSyncCodable, NSCopying>

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSDictionary *keyedNumbers;
@property (copy, nonatomic) NSDictionary *keyedStrings;
@property (copy, nonatomic) NSDictionary *keyedDates;
@property (copy, nonatomic) NSDictionary *keyedDatas;
@property (copy, nonatomic) NSData *persistedData;
@property (copy, nonatomic) NSData *persistedProtoData;
@property (nonatomic) unsigned long long objectState;
@property (copy, nonatomic) NSDate *objectModificationDate;
@property (copy, nonatomic) WOSyncIdentity *syncIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)zeroObjectModificationDate;
+ (id)persistenceFromProto:(id)proto;

/* instance methods */
- (id)initWithVersion:(long long)version type:(unsigned long long)type uuid:(id)uuid persistedData:(id)data objectState:(unsigned long long)state objectModificationDate:(id)date syncIdentity:(id)identity;
- (id)initWithVersion:(long long)version type:(unsigned long long)type uuid:(id)uuid persistedData:(id)data persistedProtoData:(id)data objectState:(unsigned long long)state objectModificationDate:(id)date syncIdentity:(id)identity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithData:(id)data;
- (id)data;
- (long long)encodedByteCount;
- (id)protobuf;
@end

#endif /* WOPersistence_h */
