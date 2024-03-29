//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFAttachmentCompositionContext_h
#define MFAttachmentCompositionContext_h
@import Foundation;

@class NSArray, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject

@property (readonly, nonatomic) NSString *contextID;
@property (copy, nonatomic) NSURL *attachmentsBaseURL;
@property (readonly, nonatomic) NSArray *attachments;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithContextID:(id)id;
@end

#endif /* MFAttachmentCompositionContext_h */
