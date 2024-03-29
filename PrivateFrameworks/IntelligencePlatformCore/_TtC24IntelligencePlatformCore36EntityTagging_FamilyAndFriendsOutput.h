//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef _TtC24IntelligencePlatformCore36EntityTagging_FamilyAndFriendsOutput_h
#define _TtC24IntelligencePlatformCore36EntityTagging_FamilyAndFriendsOutput_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface IntelligencePlatformCore.EntityTagging_FamilyAndFriendsOutput : Swift._SwiftObject<MLFeatureProvider> { // (Swift)
  /* instance variables */
   provider;
}

@property (nonatomic, readonly) NSSet *featureNames;

/* instance methods */
- (id)featureValueForName:(id)name;
@end

#endif /* _TtC24IntelligencePlatformCore36EntityTagging_FamilyAndFriendsOutput_h */
