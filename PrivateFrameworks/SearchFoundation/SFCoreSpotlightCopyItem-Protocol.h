//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFCoreSpotlightCopyItem_Protocol_h
#define SFCoreSpotlightCopyItem_Protocol_h
@import Foundation;

#include "SFCopyItem.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCoreSpotlightCopyItem-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFCoreSpotlightCopyItem <SFCopyItem>

@property (copy, nonatomic) NSArray *dataProviderTypeIdentifiers;
@property (copy, nonatomic) NSArray *fileProviderTypeIdentifiers;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFCoreSpotlightCopyItem_Protocol_h */
