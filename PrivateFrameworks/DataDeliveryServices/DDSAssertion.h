//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSAssertion_h
#define DDSAssertion_h
@import Foundation;

#include "DDSAssetPolicy.h"
#include "DDSAssetQuery.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSMutableSet, NSSet, NSString;

@interface DDSAssertion : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSString *_description;
}

@property (retain, nonatomic) NSMutableSet *descriptors;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) DDSAssetQuery *query;
@property (readonly, nonatomic) DDSAssetPolicy *policy;
@property (readonly, nonatomic) NSSet *assertionIdentifiers;
@property (readonly, nonatomic) NSSet *clientIdentifiers;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithQuery:(id)query;
- (id)addDescriptorWithAssertionID:(id)id clientID:(id)id policy:(id)policy;
- (id)assertionIDsForClientID:(id)id;
- (void)removeDescriptorWithClientID:(id)id;
- (void)removeDescriptorWithAssertionID:(id)id;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)invalidateDescription;
- (id)description;
- (id)dumpDescription;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAssertion:(id)assertion;
- (unsigned long long)hash;
@end

#endif /* DDSAssertion_h */
