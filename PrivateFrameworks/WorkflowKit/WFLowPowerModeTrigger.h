//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLowPowerModeTrigger_h
#define WFLowPowerModeTrigger_h
@import Foundation;

#include "WFTrigger.h"

@interface WFLowPowerModeTrigger : WFTrigger

@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;

/* class methods */
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)isUserInitiated;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphName;
+ (id)displayGlyphHierarchicalColors;
+ (long long)triggerBacking;
+ (id)onIcon;
+ (id)offIcon;
+ (id)onLabel;
+ (id)offLabel;
+ (BOOL)supportsSecureCoding;
+ (id)yellowBatteryHierarchicalColors;

/* instance methods */
- (id)init;
- (BOOL)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)suggestedActions;
@end

#endif /* WFLowPowerModeTrigger_h */
