//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKFrameHandle_h
#define _WKFrameHandle_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WKObject-Protocol.h"

@class NSString;
@protocol {ObjectStorage<API::FrameHandle>="data"{type="__lx"[40C]}};

@interface _WKFrameHandle : NSObject<WKObject, NSCopying, NSSecureCoding> {
  /* instance variables */
  struct ObjectStorage<API::FrameHandle> { struct type { unsigned char x[40] __lx; } data; } _frameHandle;
}

@property (readonly, nonatomic) unsigned long long frameID;
@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _WKFrameHandle_h */
