//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMResolutionTokenMap_h
#define REMResolutionTokenMap_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface REMResolutionTokenMap : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSMutableDictionary *map;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)mapWithData:(id)data;
+ (id)resolutionTokenMapWithJSONData:(id)jsondata keyMap:(id)map;

/* instance methods */
- (id)initWithMap:(id)map;
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)updateForKey:(id)key;
- (void)initTokenWithDefaultValueIfNecessaryForKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (long long)compare:(id)compare forKey:(id)key;
- (long long)compareAndMergeWithMap:(id)map forKey:(id)key;
- (BOOL)mergeWithMap:(id)map forKey:(id)key;
- (void)forceMergeFromMap:(id)map forKey:(id)key;
- (id)getTokenForKey:(id)key;
- (void)setToken:(id)token forKey:(id)key;
- (id)getTokenKeys;
- (id)archivedData;
- (id)debugDescription;
@end

#endif /* REMResolutionTokenMap_h */
