//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRGetVoiceInputDevicesResponseMessage_h
#define MRGetVoiceInputDevicesResponseMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly, nonatomic) long long errorCode;

/* instance methods */
- (id)initWithDeviceIDs:(id)ids errorCode:(long long)code;
- (unsigned long long)type;
@end

#endif /* MRGetVoiceInputDevicesResponseMessage_h */
