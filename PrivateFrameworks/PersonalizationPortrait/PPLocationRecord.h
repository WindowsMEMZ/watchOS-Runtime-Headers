//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocationRecord_h
#define PPLocationRecord_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PPLocation.h"
#include "PPRecord-Protocol.h"
#include "PPSource.h"

@class NSArray, NSSet, NSString, NSUUID;

@interface PPLocationRecord : NSObject<PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {
  /* instance variables */
  char _bucketizedSentimentScore;
}

@property (readonly, nonatomic) BOOL isAmbiguous;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) PPLocation *location;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) unsigned short algorithm;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) NSArray *contextualNamedEntities;
@property (readonly, nonatomic) NSString *extractionOsBuild;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) NSSet *featureNames;

/* class methods */
+ (id)sharedAmbiguousRecord;
+ (BOOL)supportsSecureCoding;
+ (id)describeAlgorithm:(unsigned short)algorithm;
+ (id)algorithmForName:(id)name;

/* instance methods */
- (id)init_;
- (id)init;
- (id)initAmbiguousRecord;
- (void)supplementFieldsWithClusterID:(id)id locationWithLatLong:(id)long;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToLocationRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)featureValueForName:(id)name;
- (id)identifier;
@end

#endif /* PPLocationRecord_h */
