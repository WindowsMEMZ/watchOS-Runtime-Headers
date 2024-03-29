//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMUaaPNLModelProvider_h
#define CDMUaaPNLModelProvider_h
@import Foundation;

@class FBSDisplayLayoutMonitorConfiguration;

@interface CDMUaaPNLModelProvider : NSObject {
  /* instance variables */
  FBSDisplayLayoutMonitorConfiguration *_frontboardConfig;
}

/* class methods */
+ (id)modelURLsForInstalledApps;
+ (id)retrieveAllAppBundleURLs;
+ (id)retrieveModelURLFromBundleURL:(id)url;
+ (id)createModelConfigurationFromURL:(id)url locale:(id)locale error:(id *)error;
+ (id)createModelConfigurationsFromURLs:(id)urls locale:(id)locale error:(id *)error;
+ (id)getCoreModelConfigurationForLocale:(id)locale bundlePath:(id)path error:(id *)error;

/* instance methods */
- (id)init;
- (id)getModelConfigsForLocale:(id)locale error:(id *)error;
- (id)getForegroundModelConfigForLocale:(id)locale error:(id *)error;
- (id)getModelURLs:(id *)urls;
- (id)getModelURLForForegroundApp;
- (id)getModelURLsFromDefaults;
- (id)foregroundBundeIdentifiers;
@end

#endif /* CDMUaaPNLModelProvider_h */
