//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBVoiceCommandDeviceInformation_Protocol_h
#define _INPBVoiceCommandDeviceInformation_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBVoiceCommandDeviceInformation-Protocol.h"

@class NSString;

@protocol _INPBVoiceCommandDeviceInformation <NSObject>

@property (nonatomic) int deviceIdiom;
@property (nonatomic) BOOL hasDeviceIdiom;
@property (nonatomic) BOOL isHomePodInUltimateMode;
@property (nonatomic) BOOL hasIsHomePodInUltimateMode;

/* instance methods */
- (id)deviceIdiomAsString:(int)string;
- (int)StringAsDeviceIdiom:(id)idiom;
@end

#endif /* _INPBVoiceCommandDeviceInformation_Protocol_h */
