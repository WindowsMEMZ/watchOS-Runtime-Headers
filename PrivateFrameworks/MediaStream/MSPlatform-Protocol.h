//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSPlatform_Protocol_h
#define MSPlatform_Protocol_h
@import Foundation;

@protocol MSPlatform <NSObject>
/* instance methods */
- (BOOL)shouldLogAtLevel:(int)level;
- (void)logFacility:(int)facility level:(int)level format:(id)format args:(char *)args;
- (void)logFile:(const char *)file func:(const char *)func line:(int)line facility:(int)facility level:(int)level format:(id)format args:(char *)args;
- (id)fullNameFromFirstName:(id)name lastName:(id)name;
- (id)pathMediaStreamDir;
- (Class)publisherPluginClass;
- (Class)subscriberPluginClass;
- (id)UDID;
- (id)hardwareString;
- (id)OSString;
- (id)appBundleInfoString;
- (BOOL)policyMayUpload;
- (BOOL)policyMayDownload;
- (id)socketOptions;
- (id)baseURLForPersonID:(id)id;
- (id)authTokenForPersonID:(id)id;
- (id)theDaemon;
@optional
/* instance methods */
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (BOOL)policyMaySendDelete;
- (id)pushTokenForPersonID:(id)id;
- (id)pushToken;
- (BOOL)shouldEnableNewFeatures;
- (id)contentURLForPersonID:(id)id;
- (BOOL)isPerformanceLoggingEnabled;
@end

#endif /* MSPlatform_Protocol_h */
