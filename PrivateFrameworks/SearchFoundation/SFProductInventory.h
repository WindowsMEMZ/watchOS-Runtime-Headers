//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFProductInventory_h
#define SFProductInventory_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFProductInventory-Protocol.h"

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface SFProductInventory : NSObject<SFProductInventory, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 type; unsigned int x :1 availabilityStatus; unsigned int x :1 distanceUnit; } _has;
}

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *storeId;
@property (nonatomic) int availabilityStatus;
@property (copy, nonatomic) NSNumber *distance;
@property (nonatomic) int distanceUnit;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeAddress;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasType;
- (BOOL)hasAvailabilityStatus;
- (BOOL)hasDistanceUnit;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFProductInventory_h */
