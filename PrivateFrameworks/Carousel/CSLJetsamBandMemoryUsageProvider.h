//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLJetsamBandMemoryUsageProvider_h
#define CSLJetsamBandMemoryUsageProvider_h
@import Foundation;

#include "CSLJetsamBandMemoryUsageProviding-Protocol.h"

@class NSString;

@interface CSLJetsamBandMemoryUsageProvider : NSObject<CSLJetsamBandMemoryUsageProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)memoryUsageForPid:(int)pid;
@end

#endif /* CSLJetsamBandMemoryUsageProvider_h */
