//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPeopleSuggestionProxy_Protocol_h
#define SFPeopleSuggestionProxy_Protocol_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SFLoadableProxy-Protocol.h"
#include "SFPeopleSuggestion-Protocol.h"
#include "SFPeopleSuggestionProxy-Protocol.h"
#include "SFProxyText.h"

@class NSString, NSUUID, SDSuggestionNode;

@protocol SFPeopleSuggestionProxy <SFProxy>

@property (readonly, nonatomic) NSObject<SFPeopleSuggestion> *peopleSuggestion;
@property (readonly, nonatomic) SFProxyText *displayName;
@property (readonly, nonatomic) SFProxyText *subtitle;
@property (readonly) unsigned int avatarImageSlotID;
@property (readonly) unsigned int transportImageSlotID;

@end

#endif /* SFPeopleSuggestionProxy_Protocol_h */
