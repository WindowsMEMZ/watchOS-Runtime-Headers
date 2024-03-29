//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaEntity_h
#define MPMediaEntity_h
@import Foundation;

#include "MPMediaItem.h"
#include "MPMediaLibrary.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class MIPMultiverseIdentifier, NSString;

@interface MPMediaEntity : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPMediaItem *representativeItem;
@property (readonly, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier;
@property (readonly, nonatomic) NSString *_tokenBinaryIdentifierAsString;
@property (readonly, nonatomic) unsigned long long persistentID;

/* class methods */
+ (BOOL)canFilterByProperty:(id)property;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)genericModelObjectWithRequestedProperties:(id)properties;
- (void)invalidateCachedProperties;
- (id)valueForProperty:(id)property;
- (id)valuesForProperties:(id)properties;
- (id)cachedValueForProperty:(id)property isCached:(BOOL *)cached;
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id /* block */)block;
- (id)initWithMultiverseIdentifier:(id)identifier library:(id)library;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)objectForKeyedSubscript:(id)subscript;
@end

#endif /* MPMediaEntity_h */
