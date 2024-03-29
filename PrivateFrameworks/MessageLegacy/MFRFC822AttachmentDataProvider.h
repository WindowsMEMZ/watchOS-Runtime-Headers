//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFRFC822AttachmentDataProvider_h
#define MFRFC822AttachmentDataProvider_h
@import Foundation;

#include "MFAttachmentDataProviderProtocol-Protocol.h"
#include "MFMailMessage.h"

@class MFMimePart, NSData, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject<MFAttachmentDataProviderProtocol> {
  /* instance variables */
  NSData *_messageData;
  MFMimePart *_parentPart;
  MFMailMessage *_message;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessageData:(id)data parentPart:(id)part;
- (id)fetchLocalDataForAttachment:(id)attachment;
- (void)fetchDataForAttachment:(id)attachment consumer:(id)consumer progress:(id)progress completion:(id /* block */)completion;
- (id)messageForAttachment:(id)attachment;
- (id)storageLocationForAttachment:(id)attachment withMessage:(id)message;
@end

#endif /* MFRFC822AttachmentDataProvider_h */
