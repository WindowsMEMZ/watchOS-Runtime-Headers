//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef _UNNotificationServiceExtensionRemoteXPCInterface_Protocol_h
#define _UNNotificationServiceExtensionRemoteXPCInterface_Protocol_h
@import Foundation;

@protocol _UNNotificationServiceExtensionRemoteXPCInterface <_UNNotificationServiceExtensionXPCInterface>
/* instance methods */
- (void)didReceiveNotificationRequest:(id)request withCompletionHandler:(id /* block */)handler;
- (void)deleteAttachmentFilesInContentIfNecessary:(id)necessary;
- (void)serviceExtensionTimeWillExpire;
- (void)serviceExtensionPerformCleanup;
@end

#endif /* _UNNotificationServiceExtensionRemoteXPCInterface_Protocol_h */
