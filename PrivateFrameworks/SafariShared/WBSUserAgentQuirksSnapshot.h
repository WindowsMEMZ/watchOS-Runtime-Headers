//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSUserAgentQuirksSnapshot_h
#define WBSUserAgentQuirksSnapshot_h
@import Foundation;

#include "WBSRemotePlistSnapshot-Protocol.h"

@class NSDictionary, NSString;

@interface WBSUserAgentQuirksSnapshot : NSObject<WBSRemotePlistSnapshot> {
  /* instance variables */
  NSDictionary *_domainsToQuirkTypes;
  NSDictionary *_userAgentQuirks;
  NSDictionary *_sitesRequiringUserAgentQuirks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPlistData:(id)data error:(id *)error;
- (id)quirkTypeForURLString:(id)urlstring withDefaultUserAgent:(id)agent;
- (BOOL)isEqual:(id)equal;
- (id)plistDataWithFormat:(unsigned long long)format;
@end

#endif /* WBSUserAgentQuirksSnapshot_h */
