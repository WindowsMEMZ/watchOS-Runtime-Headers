//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INExecutionInfo_h
#define INExecutionInfo_h
@import Foundation;

#include "INAppInfo.h"
#include "NSCopying-Protocol.h"

@class LSApplicationRecord, NSString, NSURL;

@interface INExecutionInfo : NSObject<NSCopying> {
  /* instance variables */
  INAppInfo *_appInfo;
}

@property (readonly, nonatomic) LSApplicationRecord *_applicationRecord;
@property (readonly, nonatomic) INAppInfo *_appInfo;
@property (readonly, copy, nonatomic) NSString *launchableAppBundleId;
@property (readonly, copy, nonatomic) NSString *displayableAppBundleId;
@property (readonly, copy, nonatomic) NSString *extensionBundleId;
@property (readonly, copy, nonatomic) NSURL *containingAppBundleURL;
@property (readonly, nonatomic) BOOL canRunOnLocalDevice;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)_initWithLaunchableAppBundleId:(id)id displayableAppBundleId:(id)id containingAppBundleURL:(id)url extensionBundleId:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* INExecutionInfo_h */
