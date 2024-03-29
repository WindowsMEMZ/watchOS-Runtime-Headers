//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKTravelRouteEstimationController_h
#define EKTravelRouteEstimationController_h
@import Foundation;

#include "EKTravelRouteEstimationControllerDelegate-Protocol.h"

@class EKEventStore, EKStructuredLocation, NSDate, NSDictionary, NSMutableArray;
@protocol EKStyleProvider;

@interface EKTravelRouteEstimationController : NSObject {
  /* instance variables */
  EKEventStore *_eventStore;
  NSObject<EKStyleProvider> *_styleProvider;
  NSMutableArray *_rows;
}

@property (retain) EKStructuredLocation *evaluatedOriginLocation;
@property (retain) NSDictionary *travelTimeEstimatedValues;
@property (retain) NSDictionary *travelTimeLookupErrors;
@property BOOL isEstimating;
@property (weak, nonatomic) NSObject<EKTravelRouteEstimationControllerDelegate> *delegate;
@property (retain) NSDate *arrivalDate;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation;
@property (retain) EKStructuredLocation *destinationStructuredLocation;
@property (readonly, nonatomic) unsigned long long numberOfOutputRows;

/* class methods */
+ (id)_basedOnLocationLocalizedString;

/* instance methods */
- (id)initWithDestinationStructuredLocation:(id)location styleProvider:(id)provider eventStore:(id)store;
- (void)dealloc;
- (void)beginOriginLocationEstimationLookup;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (id)_routingModeTypesAsEnum;
- (void)beginTravelTimeEstimationLookup;
- (void)_lookupTimedOut;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)index;
- (double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)index;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)index;
- (id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)index;
- (BOOL)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)index;
- (BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)index;
- (long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)index;
- (long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)index;
- (id)_imageForCellAtIndex:(unsigned long long)index;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)index tableView:(id)view;
@end

#endif /* EKTravelRouteEstimationController_h */
