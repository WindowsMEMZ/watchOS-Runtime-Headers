//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSharedMessageAppSummary_h
#define IMSharedMessageAppSummary_h
@import Foundation;

@interface IMSharedMessageAppSummary : NSObject
/* class methods */
+ (Class)dataSourceClass;
+ (void)setDataSourceClass:(Class)class;
+ (void)_initBundleClassAtPath:(id)path;
+ (id)pluginPath;
+ (void)initializePlugin;
+ (id)previewSummary;
+ (id)previewSummaryWithPluginPayload:(id)payload;
@end

#endif /* IMSharedMessageAppSummary_h */
