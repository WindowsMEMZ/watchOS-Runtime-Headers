//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardSocialProfileLineGenerator_h
#define CNVCardSocialProfileLineGenerator_h
@import Foundation;

#include "CNVCardLineGenerator.h"

@interface CNVCardSocialProfileLineGenerator : CNVCardLineGenerator
/* instance methods */
- (id)lineWithValue:(id)value label:(id)label;
- (BOOL)isStandardServiceName:(id)name;
- (void)addStandardLabel:(id)label toLine:(id)line;
- (void)addCustomLabel:(id)label toLine:(id)line;
- (void)addPrimaryValueMarkerToLine:(id)line;
@end

#endif /* CNVCardSocialProfileLineGenerator_h */
