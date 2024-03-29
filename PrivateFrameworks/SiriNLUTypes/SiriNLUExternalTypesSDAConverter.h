//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SiriNLUExternalTypesSDAConverter_h
#define SiriNLUExternalTypesSDAConverter_h
@import Foundation;

@interface SiriNLUExternalTypesSDAConverter : NSObject
/* class methods */
+ (id)convertFromSystemDialogActs:(id)acts;
+ (id)convertFromSystemDialogAct:(id)act;
+ (id)convertFromSystemGaveOptions:(id)options;
+ (id)convertFromSystemInformed:(id)informed;
+ (id)convertFromSystemOffered:(id)offered;
+ (id)convertFromSystemPrompted:(id)prompted;
+ (id)convertFromSystemReportedFailure:(id)failure;
+ (id)convertFromSystemReportedSuccess:(id)success;
@end

#endif /* SiriNLUExternalTypesSDAConverter_h */
