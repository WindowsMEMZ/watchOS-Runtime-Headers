//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ICPostToInstagramAction_h
#define ICPostToInstagramAction_h
@import Foundation;

#include "ICDocumentAction.h"

@class WFFileRepresentation;

@interface ICPostToInstagramAction : ICDocumentAction

@property (retain, nonatomic) WFFileRepresentation *instagramRepresentation;

/* instance methods */
- (void)dealloc;
- (void)appDidResume:(id)resume;
- (id)inputContentClasses;
- (void)performActionWithInput:(id)input parameters:(id)parameters userInterface:(id)interface successHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (void)shareAsALAssetWithItem:(id)item caption:(id)caption userInterface:(id)interface successHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (void)shareAsImageFileWithItem:(id)item caption:(id)caption userInterface:(id)interface successHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
@end

#endif /* ICPostToInstagramAction_h */
