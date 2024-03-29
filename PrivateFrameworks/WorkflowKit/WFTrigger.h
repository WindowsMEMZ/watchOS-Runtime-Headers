//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTrigger_h
#define WFTrigger_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface WFTrigger : NSObject<NSSecureCoding, NSCopying>
/* class methods */
+ (id)triggerWithSerializedData:(id)data;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (BOOL)isUserInitiated;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphName;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (long long)triggerBacking;
+ (id)onIcon;
+ (id)offIcon;
+ (id)onLabel;
+ (id)offLabel;
+ (id)displayGlyphTintColor;
+ (id)onIconTintColor;
+ (id)offIconTintColor;
+ (id)inputTypeDescriptionForClass:(Class)class;

/* instance methods */
- (void)configureWithConfiguration:(id)configuration;
- (id)init;
- (id)description;
- (id)serializedData;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)localizedDisplayName;
- (id)localizedDisplayExplanation;
- (id)displayGlyphName;
- (id)displayGlyphHierarchicalColors;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (id)displayGlyphTintColor;
- (BOOL)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)suggestedActions;
- (Class)shortcutInputContentItemClass;
@end

#endif /* WFTrigger_h */
