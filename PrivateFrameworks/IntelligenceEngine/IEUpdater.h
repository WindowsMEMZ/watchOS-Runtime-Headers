//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.31.1.0.0
//
#ifndef IEUpdater_h
#define IEUpdater_h
@import Foundation;

@interface IEUpdater : NSObject
/* instance methods */
- (id)getFileVersion:(id)version;
- (BOOL)updateToLatest:(id)latest;
- (BOOL)isUpdateAvailable:(id)available;
- (id)getHighestVersionWithinRelease:(id)release;
@end

#endif /* IEUpdater_h */
