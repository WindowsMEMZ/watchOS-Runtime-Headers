//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVExternalDeviceHID_h
#define AVExternalDeviceHID_h
@import Foundation;

#include "AVExternalDeviceHIDInternal.h"

@class NSString;

@interface AVExternalDeviceHID : NSObject {
  /* instance variables */
  AVExternalDeviceHIDInternal *_externalDeviceHID;
}

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *screenID;
@property (nonatomic) long long inputMode;

/* instance methods */
- (id)_figEndpointHIDInputMode;
- (id)initWithExternalDeviceAndHIDDictionary:(id)hiddictionary hidDictionary:(id)dictionary;
- (void)dealloc;
- (id)_externalDevice;
@end

#endif /* AVExternalDeviceHID_h */
