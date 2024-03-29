//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBImageQueueContents_h
#define RBImageQueueContents_h
@import Foundation;

#include "CARenderValue-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol {cf_ptr<_CAImageQueue *>="_p"^{_CAImageQueue}}, {objc_ptr<id>="_p"@}, {refcounted_ptr<RB::Surface>="_p"^{Surface}};

@interface RBImageQueueContents : NSObject<NSSecureCoding, CARenderValue> {
  /* instance variables */
  struct cf_ptr<_CAImageQueue *> { struct _CAImageQueue *_p; } _queue;
  struct refcounted_ptr<RB::Surface> { struct Surface *_p; } _surface;
  struct objc_ptr<id> { id _p; } _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValue;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace *)colorspace;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)replacementObjectForCoder:(id)coder;
@end

#endif /* RBImageQueueContents_h */
