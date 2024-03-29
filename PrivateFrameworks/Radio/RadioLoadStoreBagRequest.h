//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef RadioLoadStoreBagRequest_h
#define RadioLoadStoreBagRequest_h
@import Foundation;

#include "RadioRequest.h"

@interface RadioLoadStoreBagRequest : RadioRequest

@property (nonatomic) BOOL ignoresRadioDiskCache;

/* instance methods */
- (void)loadStoreBagWithOptions:(long long)options completionHandler:(id /* block */)handler;
@end

#endif /* RadioLoadStoreBagRequest_h */
