//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFOpenAppClipCommand_Protocol_h
#define SFOpenAppClipCommand_Protocol_h
@import Foundation;

#include "SFCommand.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCommandReference.h"
#include "SFOpenAppClipCommand-Protocol.h"
#include "SFTopic.h"

@class NSData, NSDictionary, NSString;

@protocol SFOpenAppClipCommand <SFCommand>

@property (copy, nonatomic) NSString *clipIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFOpenAppClipCommand_Protocol_h */
