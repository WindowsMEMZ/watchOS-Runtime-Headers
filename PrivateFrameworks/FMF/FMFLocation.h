//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 488.1.0.0.0
//
#ifndef FMFLocation_h
#define FMFLocation_h
@import Foundation;

#include "FMAnnotation-Protocol.h"
#include "FMFHandle.h"
#include "FMFPlacemark.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CLLocation, FMAccuracyOverlay, NSDate, NSString, UIColor, UIImage;

@interface FMFLocation : NSObject<NSCopying, NSSecureCoding, FMAnnotation>

@property (retain, nonatomic) FMFHandle *handle;
@property (retain, nonatomic) FMFPlacemark *placemark;
@property (nonatomic) long long locationType;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) long long activityState;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL locatingInProgress;
@property (copy, nonatomic) NSString *shortAddressString;
@property (copy, nonatomic) NSString *longAddress;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double maxLocatingInterval;
@property (nonatomic) double TTL;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSString *distanceDescription;
@property (retain, nonatomic) NSString *age;
@property (readonly, copy, nonatomic) NSString *shortAddress;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (retain, nonatomic) FMAccuracyOverlay *overlay;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double distanceFromUser;
@property (nonatomic) BOOL isBorderEnabled;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *largeAnnotationIcon;
@property (retain, nonatomic) UIImage *smallAnnotationIcon;
@property (retain, nonatomic) UIImage *largeOverlayIcon;
@property (retain, nonatomic) UIImage *smallOverlayIcon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary forHandle:(id)handle maxLocatingInterval:(double)interval TTL:(double)ttl;
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;
- (id)initWithHandle:(id)handle locationType:(long long)type location:(id)location activityState:(long long)state label:(id)label locatingInProgress:(BOOL)progress shortAddress:(id)address longAddress:(id)address placemark:(id)placemark;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)hasKnownLocation;
- (BOOL)isThisDevice;
- (BOOL)conformsToProtocol:(id)protocol;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)agingItemTimestamp;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (id)locationShortAddressWithAgeIncludeLocating;
- (BOOL)isLocatingInProgress;
- (void)resetLocateInProgress:(id)progress;
- (void)resetLocateInProgressTimer;
- (long long)distanceThenNameCompare:(id)compare;
- (void)_updateLocation:(id)location;
- (void)updateLocationForCache:(id)cache;
- (void)updateLocation:(id)location;
- (void)updateHandle:(id)handle;
- (BOOL)isValid;
- (BOOL)isMoreRecentThan:(id)than;
@end

#endif /* FMFLocation_h */
