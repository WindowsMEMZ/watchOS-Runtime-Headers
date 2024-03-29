//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTBulletinSendQueueAttachmentSender_h
#define BLTBulletinSendQueueAttachmentSender_h
@import Foundation;

@class NSMutableArray;

@interface BLTBulletinSendQueueAttachmentSender : NSObject {
  /* instance variables */
  NSMutableArray *_urls;
}

/* instance methods */
- (id)init;
- (void)addAttachment:(id)attachment key:(id)key;
- (BOOL)sendAttachmentsWithSender:(id)sender timeout:(id)timeout completion:(id /* block */)completion;
@end

#endif /* BLTBulletinSendQueueAttachmentSender_h */
