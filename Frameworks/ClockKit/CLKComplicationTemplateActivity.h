//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateActivity_h
#define CLKComplicationTemplateActivity_h
@import Foundation;

#include "CLKComplicationTemplate.h"

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {
  /* instance variables */
  long long _family;
}

@property (nonatomic) double movePercentComplete;
@property (nonatomic) double exercisePercentComplete;
@property (nonatomic) double standPercentComplete;
@property (nonatomic) BOOL hideDots;

/* class methods */
+ (id)activityTemplateWithFamily:(long long)family;

/* instance methods */
- (id)initWithFamily:(long long)family;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)block;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)block;
- (long long)compatibleFamily;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)dotsAreHidden;
@end

#endif /* CLKComplicationTemplateActivity_h */
