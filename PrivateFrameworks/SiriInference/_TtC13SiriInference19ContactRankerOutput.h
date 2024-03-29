//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.20.1.0.0
//
#ifndef _TtC13SiriInference19ContactRankerOutput_h
#define _TtC13SiriInference19ContactRankerOutput_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface SiriInference.ContactRankerOutput : Swift._SwiftObject<MLFeatureProvider> { // (Swift)
  /* instance variables */
   provider;
}

@property (nonatomic, readonly) NSSet *featureNames;

/* instance methods */
- (id)featureValueForName:(id)name;
@end

#endif /* _TtC13SiriInference19ContactRankerOutput_h */
