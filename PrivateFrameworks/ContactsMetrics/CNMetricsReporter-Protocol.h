//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 16.0.0.0.0
//
#ifndef CNMetricsReporter_Protocol_h
#define CNMetricsReporter_Protocol_h
@import Foundation;

#include "CNMetricsReporter-Protocol.h"

@class NSString;

@protocol CNMetricsReporter <NSObject>
/* instance methods */
- (void)sendDictionary:(id)dictionary forEvent:(id)event andLog:(BOOL)log;
- (void)logSimpleEvent:(id)event forApplication:(id)application andLog:(BOOL)log;
@end

#endif /* CNMetricsReporter_Protocol_h */
