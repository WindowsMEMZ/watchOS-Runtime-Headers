//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPMetricsDispatcher_h
#define PPMetricsDispatcher_h
@import Foundation;

@interface PPMetricsDispatcher : NSObject
/* class methods */
+ (void)logPayloadForEvent:(id)event payload:(id)payload inBackground:(BOOL)background;
@end

#endif /* PPMetricsDispatcher_h */
