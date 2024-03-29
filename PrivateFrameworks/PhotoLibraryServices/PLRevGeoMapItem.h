//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLRevGeoMapItem_h
#define PLRevGeoMapItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface PLRevGeoMapItem : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSArray *sortedPlaceInfos;
@property (readonly, nonatomic) NSArray *backupPlaceInfos;
@property (readonly, nonatomic) NSArray *finalPlaceInfos;

/* class methods */
+ (id)placeInfoWithName:(id)name geoPlaceInfo:(id)info dominantOrderType:(unsigned long long)type;
+ (id /* block */)sortedAdditionalPlaceInfoComparator;
+ (id)mapItemWithGEOMapItem:(id)item;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSortedPlaceInfos:(id)infos backupPlaceInfos:(id)infos finalPlaceInfos:(id)infos;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PLRevGeoMapItem_h */
