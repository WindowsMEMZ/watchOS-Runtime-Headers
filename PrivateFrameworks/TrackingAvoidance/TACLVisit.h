//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TACLVisit_h
#define TACLVisit_h
@import Foundation;

#include "OSLogCoding-Protocol.h"
#include "TAEventProtocol-Protocol.h"

@class NSDate, NSDateInterval, NSString;

@interface TACLVisit : NSObject<OSLogCoding, TAEventProtocol>

@property (readonly, copy, nonatomic) NSDate *arrivalDate;
@property (readonly, copy, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDepartureDate;
@property (readonly, nonatomic) BOOL isTemporalOrderSensical;
@property (readonly, copy, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithOSLogCoder:(id)coder options:(unsigned long long)options maxLength:(unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate horizontalAccuracy:(double)accuracy arrivalDate:(id)date departureDate:(id)date detectionDate:(id)date confidence:(unsigned long long)confidence;
- (BOOL)isEqual:(id)equal;
- (id)descriptionDictionary;
- (id)getDate;
@end

#endif /* TACLVisit_h */
