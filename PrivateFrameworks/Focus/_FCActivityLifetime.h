//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef _FCActivityLifetime_h
#define _FCActivityLifetime_h
@import Foundation;

#include "FCActivityLifetimeDescribing-Protocol.h"

@class DNDLifetimeDetails, NSString;

@interface _FCActivityLifetime : NSObject<FCActivityLifetimeDescribing>

@property (readonly, copy, nonatomic) DNDLifetimeDetails *dndLifetimeDetails;
@property (readonly, copy, nonatomic) NSString *lifetimeIdentifier;
@property (readonly, copy, nonatomic) NSString *lifetimeName;
@property (readonly, copy, nonatomic) NSString *lifetimeMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLifetimeDetails:(id)details;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_dndLifetimeDetails;
@end

#endif /* _FCActivityLifetime_h */
