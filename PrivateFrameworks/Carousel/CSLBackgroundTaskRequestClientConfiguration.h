//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBackgroundTaskRequestClientConfiguration_h
#define CSLBackgroundTaskRequestClientConfiguration_h
@import Foundation;

@class NSDictionary, NSString;

@interface CSLBackgroundTaskRequestClientConfiguration : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double leeway;
@property (readonly, nonatomic) BOOL budgeted;
@property (readonly, nonatomic) BOOL bootstrapOnStartup;
@property (readonly, nonatomic) NSDictionary *dasOptions;

/* class methods */
+ (id)readClientConfigurations;

/* instance methods */
- (id)initWithBundleID:(id)id dictionary:(id)dictionary;
- (id)description;
- (BOOL)isBudgeted;
@end

#endif /* CSLBackgroundTaskRequestClientConfiguration_h */
