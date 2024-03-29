//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNCNotificationServiceExtension_h
#define UNCNotificationServiceExtension_h
@import Foundation;

@class LSPlugInKitProxy, NSExtension, NSExtensionContext, UNNotificationContent;
@protocol OS_dispatch_queue;

@interface UNCNotificationServiceExtension : NSObject {
  /* instance variables */
  NSExtension *_extension;
  NSExtensionContext *_hostContext;
  UNNotificationContent *_mutatedContent;
  double _graceTime;
}

@property (readonly, @dynamic, nonatomic) LSPlugInKitProxy *proxy;
@property (readonly, @dynamic, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double serviceTime;

/* class methods */
+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+ (id)_extensionIdentifiersToPerExtensionQueues;
+ (BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)identifier;
+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)identifier;
+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)identifier;

/* instance methods */
- (id)_initWithExtension:(id)extension serviceTime:(double)time graceTime:(double)time;
- (id)mutateContentForNotificationRequest:(id)request error:(id *)error;
- (void)cleanUp;
@end

#endif /* UNCNotificationServiceExtension_h */
