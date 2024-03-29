//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPredictedLocationTransitionTrigger_h
#define WFPredictedLocationTransitionTrigger_h
@import Foundation;

#include "WFTrigger.h"

@interface WFPredictedLocationTransitionTrigger : WFTrigger

@property (nonatomic) unsigned long long destinationType;
@property (nonatomic) unsigned long long minutesBefore;

/* class methods */
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;
+ (long long)triggerBacking;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFPredictedLocationTransitionTrigger_h */
