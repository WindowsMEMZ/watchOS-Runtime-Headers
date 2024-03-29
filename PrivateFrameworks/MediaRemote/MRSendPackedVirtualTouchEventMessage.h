//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRSendPackedVirtualTouchEventMessage_h
#define MRSendPackedVirtualTouchEventMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRSendPackedVirtualTouchEventMessage : MRProtocolMessage

@property (readonly, nonatomic) struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2] } x0; unsigned int x1; unsigned long long x2; unsigned int x3; } event;
@property (readonly, nonatomic) unsigned long long virtualDeviceID;

/* instance methods */
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2] } x0; unsigned int x1; unsigned long long x2; unsigned int x3; })event virtualDeviceID:(unsigned long long)id;
- (unsigned long long)type;
- (id)description;
@end

#endif /* MRSendPackedVirtualTouchEventMessage_h */
