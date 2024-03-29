//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef _TtC24PersonalIntelligenceCore16AppLaunchCounter_h
#define _TtC24PersonalIntelligenceCore16AppLaunchCounter_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "IIMetricEnrichmentProvider-Protocol.h"

@interface PersonalIntelligenceCore.AppLaunchCounter : Swift._SwiftObject<IIMetricEnrichmentProvider> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_countsByBundleId;
}

/* instance methods */
- (id)enrichMessage:(id)message messageName:(id)name;
@end

#endif /* _TtC24PersonalIntelligenceCore16AppLaunchCounter_h */
