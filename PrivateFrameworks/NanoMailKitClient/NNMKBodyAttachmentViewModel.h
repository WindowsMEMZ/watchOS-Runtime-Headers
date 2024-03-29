//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKBodyAttachmentViewModel_h
#define NNMKBodyAttachmentViewModel_h
@import Foundation;

#include "PUICListImageDetailViewModel-Protocol.h"

@class NSString, UIImage;

@interface NNMKBodyAttachmentViewModel : NSObject<PUICListImageDetailViewModel>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageMask;
@property (nonatomic) BOOL canHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAttachment:(id)attachment;
@end

#endif /* NNMKBodyAttachmentViewModel_h */
