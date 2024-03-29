//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLLocationMatchInfo_h
#define CLLocationMatchInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface CLLocationMatchInfo : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  id _internal;
}

@property (readonly, nonatomic) long long matchQuality;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } matchCoordinate;
@property (readonly, nonatomic) double matchCourse;
@property (readonly, nonatomic) int matchFormOfWay;
@property (readonly, nonatomic) int matchRoadClass;
@property (readonly, nonatomic) BOOL matchShifted;
@property (readonly, copy, nonatomic) NSData *matchDataArray;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMatchQuality:(long long)quality matchCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate matchCourse:(double)course matchFormOfWay:(int)way matchRoadClass:(int)class matchShifted:(BOOL)shifted matchDataArray:(id)array;
- (id)initWithMatchQuality:(long long)quality matchCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate matchCourse:(double)course matchFormOfWay:(int)way matchRoadClass:(int)class matchShifted:(BOOL)shifted;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)shortDescription;
- (BOOL)isMatchShifted;
@end

#endif /* CLLocationMatchInfo_h */
