//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWatchComplicationsWidgetSceneSettings_h
#define CHUISWatchComplicationsWidgetSceneSettings_h
@import Foundation;

#include "CHUISWidgetSceneSettings.h"

@class CHSWatchComplicationsCurvedLabelMetrics;

@interface CHUISWatchComplicationsWidgetSceneSettings : CHUISWidgetSceneSettings

@property (readonly, nonatomic) unsigned long long cornerPosition;
@property (readonly, copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bezelContentCenter;
@property (readonly, nonatomic) BOOL includeAccessoryViews;
@property (readonly, nonatomic) BOOL generateSnapshotMetadata;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* CHUISWatchComplicationsWidgetSceneSettings_h */
