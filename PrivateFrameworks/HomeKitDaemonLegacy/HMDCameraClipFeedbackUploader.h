//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraClipFeedbackUploader_h
#define HMDCameraClipFeedbackUploader_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraClipFeedbackUploader-Protocol.h"

@class NSString;

@interface HMDCameraClipFeedbackUploader : HMFObject<HMDCameraClipFeedbackUploader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)uploadFeedbackWithCameraProfileUUID:(id)uuid clipModel:(id)model completionHandler:(id /* block */)handler;
@end

#endif /* HMDCameraClipFeedbackUploader_h */
