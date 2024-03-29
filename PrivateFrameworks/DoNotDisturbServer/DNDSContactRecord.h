//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSContactRecord_h
#define DNDSContactRecord_h
@import Foundation;

#include "DNDSBackingStoreRecord-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSSet, NSString;

@interface DNDSContactRecord : NSObject<NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSSet *phoneNumbers;
@property (readonly, copy, nonatomic) NSSet *emailAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)migrateDictionaryRepresentation:(id)representation fromVersionNumber:(unsigned long long)number toVersionNumber:(unsigned long long)number;
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)init;
- (id)_initWithRecord:(id)record;
- (id)_initWithContactIdentifier:(id)identifier firstName:(id)name middleName:(id)name lastName:(id)name nickName:(id)name organizationName:(id)name phoneNumbers:(id)numbers emailAddresses:(id)addresses;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDSContactRecord_h */
