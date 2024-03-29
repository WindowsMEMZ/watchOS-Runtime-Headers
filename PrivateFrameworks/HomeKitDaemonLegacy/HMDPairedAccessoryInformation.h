//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPairedAccessoryInformation_h
#define HMDPairedAccessoryInformation_h
@import Foundation;

#include "HMDAccessoryBrowserDelegate-Protocol.h"

@class NSData, NSString;

@interface HMDPairedAccessoryInformation : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSData *setupHash;
@property (readonly) unsigned long long transports;
@property (readonly, weak) NSObject<HMDAccessoryBrowserDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier transports:(unsigned long long)transports setupHash:(id)hash delegate:(id)delegate;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* HMDPairedAccessoryInformation_h */
