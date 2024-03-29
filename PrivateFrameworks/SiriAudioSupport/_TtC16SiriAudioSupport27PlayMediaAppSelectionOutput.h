//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.2.0.0
//
#ifndef _TtC16SiriAudioSupport27PlayMediaAppSelectionOutput_h
#define _TtC16SiriAudioSupport27PlayMediaAppSelectionOutput_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionOutput : Swift._SwiftObject<MLFeatureProvider> { // (Swift)
  /* instance variables */
   provider;
   $__lazy_storage_$_result_isRequestedApp;
   $__lazy_storage_$_result_isRequestedAppProbability;
}

@property (nonatomic, readonly) NSSet *featureNames;

/* instance methods */
- (id)featureValueForName:(id)name;
@end

#endif /* _TtC16SiriAudioSupport27PlayMediaAppSelectionOutput_h */
