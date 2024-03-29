//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVOutputDeviceFrecencyManager_h
#define AVOutputDeviceFrecencyManager_h
@import Foundation;

@interface AVOutputDeviceFrecencyManager : NSObject
/* class methods */
+ (void)updateFrecencyListForDeviceID:(id)id;
+ (double)frecencyScoreForDeviceID:(id)id;
+ (id)_applicationSupportPath;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)path;
+ (id)_frecentsWriter;
@end

#endif /* AVOutputDeviceFrecencyManager_h */
