//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharedAccountCloudStore_h
#define PKSharedAccountCloudStore_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface PKSharedAccountCloudStore : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSArray *sharedAccountCloudStoreZones;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (nonatomic) BOOL dirty;
@property (copy, nonatomic) NSString *accountIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithArray:(id)array lastUpdated:(id)updated;
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)access;
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)access forAccountUser:(id)user;
- (id)sharedAccountZoneWithName:(id)name access:(unsigned long long)access;
- (id)primaryZoneForAccountUser:(id)user inAccountUserCollection:(id)collection access:(unsigned long long)access;
- (id)allPossibleZonesForAccountUser:(id)user access:(unsigned long long)access;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToSharedAccountCloudStore:(id)store;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isDirty;
@end

#endif /* PKSharedAccountCloudStore_h */
