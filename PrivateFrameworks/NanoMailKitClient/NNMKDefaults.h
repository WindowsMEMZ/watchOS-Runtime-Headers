//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKDefaults_h
#define NNMKDefaults_h
@import Foundation;

@interface NNMKDefaults : NSObject
/* class methods */
+ (BOOL)networkLatencyTestMode;
+ (BOOL)isStandaloneServiceEnabled;
+ (unsigned long long)openAllMessagesTestCount;
+ (id)webLinksToTest;
+ (id)pushNotificationVersion;
+ (BOOL)bypassBBForNotifications;
+ (id)pptResults;
+ (void)setPPTResults:(id)pptresults;
+ (id)pptMessageIdUnderTest;
+ (void)setPPTMessageIdUnderTest:(id)test;
+ (BOOL)isPPTEnviroment;
+ (BOOL)forceStandaloneMode;
+ (BOOL)askedToAlwaysLoadContent;
+ (void)setAskedToAlwaysLoadContent;
+ (id)appleInternalEmailAddress;
+ (void)setAppleInternalEmailAddress:(id)address;
@end

#endif /* NNMKDefaults_h */
