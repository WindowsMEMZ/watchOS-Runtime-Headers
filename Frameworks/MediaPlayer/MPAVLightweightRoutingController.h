//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPAVLightweightRoutingController_h
#define MPAVLightweightRoutingController_h
@import Foundation;

@class AVOutputContext, AVOutputDeviceDiscoverySession, NSArray, NSDate, NSString;
@protocol MPAVLightweightRoutingControllerDelegate;

@interface MPAVLightweightRoutingController : NSObject {
  /* instance variables */
  AVOutputDeviceDiscoverySession *_avDiscoverySession;
  AVOutputContext *_avOutputContext;
  BOOL _notificationScheduled;
  NSDate *_lastOutputContextNotificationDate;
}

@property (nonatomic) long long discoveryMode;
@property (readonly, nonatomic) NSArray *pickedRoutes;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly, copy, nonatomic) NSString *name;
@property (weak, nonatomic) NSObject<MPAVLightweightRoutingControllerDelegate> *delegate;

/* instance methods */
- (id)initWithName:(id)name;
- (void)dealloc;
- (id)description;
- (BOOL)isDevicePresenceDetected;
- (void)_availableOutputDevicesDidChangeNotification:(id)notification;
- (void)_outputContextDevicesDidChangeNotification:(id)notification;
- (void)_onSyncSelf_schedulePickedRoutesChangedNotification;
- (void)_postPickedRoutesChangedNotification;
@end

#endif /* MPAVLightweightRoutingController_h */
