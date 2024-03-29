//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPCloudServiceStatusController_h
#define MusicKit_SoftLinking_MPCloudServiceStatusController_h
@import Foundation;

@class MPCloudServiceStatusController;

@interface MusicKit_SoftLinking_MPCloudServiceStatusController : NSObject {
  /* instance variables */
  MPCloudServiceStatusController *_underlyingServiceStatusController;
}

/* class methods */
+ (id)sharedController;
+ (id)cloudLibraryEnabledDidChangeNotificationName;

/* instance methods */
- (id)_initWithUnderlyingServiceStatusController:(id)controller;
- (void)dealloc;
- (void)beginObservingCloudLibraryEnabled;
- (void)endObservingCloudLibraryEnabled;
- (void)_handleCloudLibraryEnabledDidChangeNotification:(id)notification;
@end

#endif /* MusicKit_SoftLinking_MPCloudServiceStatusController_h */
