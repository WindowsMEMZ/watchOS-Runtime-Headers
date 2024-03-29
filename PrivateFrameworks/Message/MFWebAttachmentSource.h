//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFWebAttachmentSource_h
#define MFWebAttachmentSource_h
@import Foundation;

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {
  /* instance variables */
  MFLock *_attachmentsLock;
  NSMutableDictionary *_attachmentsByURL;
}

/* class methods */
+ (id)_setOfAllSources;
+ (id)allSources;

/* instance methods */
- (id)init;
- (id)description;
- (void)dealloc;
- (id)attachmentForURL:(id)url;
- (BOOL)setAttachment:(id)attachment forURL:(id)url;
- (void)removeAttachmentForURL:(id)url;
@end

#endif /* MFWebAttachmentSource_h */
