//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAnalyticsTileInteractionEvent_h
#define HFAnalyticsTileInteractionEvent_h
@import Foundation;

#include "HFAnalyticsEvent.h"

@class NSNumber, NSString;

@interface HFAnalyticsTileInteractionEvent : HFAnalyticsEvent

@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) BOOL isRoomDashboard;
@property (nonatomic) BOOL isActionSetItem;
@property (nonatomic) BOOL isCameraItem;
@property (nonatomic) BOOL isServiceLikeItem;
@property (nonatomic) BOOL isStatusItem;
@property (nonatomic) NSNumber *tileIsEditing;
@property (retain, nonatomic) NSString *tileInteractionArea;
@property (retain, nonatomic) NSString *itemClassName;
@property (nonatomic) long long itemPrimaryState;
@property (nonatomic) long long itemPriority;
@property (nonatomic) unsigned long long numberOfRepresentedHomeKitObjects;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;
@property (retain, nonatomic) NSString *contextType;

/* class methods */
+ (unsigned long long)_numberOfRepresentedHomeKitObjectsForItem:(id)item;

/* instance methods */
- (id)initWithData:(id)data;
- (id)payload;
@end

#endif /* HFAnalyticsTileInteractionEvent_h */
