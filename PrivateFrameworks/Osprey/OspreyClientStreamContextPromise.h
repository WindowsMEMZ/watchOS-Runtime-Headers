//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.5.1.0.0
//
#ifndef OspreyClientStreamContextPromise_h
#define OspreyClientStreamContextPromise_h
@import Foundation;

#include "OspreyClientStreamingContext-Protocol.h"
#include "OspreyDeferredObject.h"

@class NSString;

@interface OspreyClientStreamContextPromise : NSObject<OspreyClientStreamingContext> {
  /* instance variables */
  OspreyDeferredObject *_deferredContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFulfillmentQueue:(id)queue;
- (void)fulfill:(id)fulfill;
- (void)finishWriting;
- (void)writeFrame:(id)frame;
- (void)writeFrame:(id)frame compressed:(BOOL)compressed;
@end

#endif /* OspreyClientStreamContextPromise_h */
