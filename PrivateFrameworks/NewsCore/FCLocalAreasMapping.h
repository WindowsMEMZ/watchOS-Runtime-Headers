//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCLocalAreasMapping_h
#define FCLocalAreasMapping_h
@import Foundation;

#include "FCLocalAreasProvider-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface FCLocalAreasMapping : NSObject<FCLocalAreasProvider, NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *regionMap;
@property (retain, nonatomic) NSArray *areas;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data;
- (id)init;
- (id)regionsForLocation:(id)location;
- (id)areasForLocation:(id)location;
- (id)autoFavoriteTagIDsForLocation:(id)location;
- (id)filterOuterRegions:(id)regions;
- (id)tagIDsForLocation:(id)location searchOption:(unsigned long long)option;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCLocalAreasMapping_h */
