//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingMessageExtensionOpenGraphMessage_h
#define PKSharingMessageExtensionOpenGraphMessage_h
@import Foundation;

#include "PKSharingMessageExtensionMessage-Protocol.h"

@class NSString, NSURL, UIImage;

@interface PKSharingMessageExtensionOpenGraphMessage : NSObject<PKSharingMessageExtensionMessage> {
  /* instance variables */
  NSURL *_url;
}

@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) BOOL hasFetchedOpenGraphPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithURL:(id)url;
- (id)urlRepresentation;
@end

#endif /* PKSharingMessageExtensionOpenGraphMessage_h */
