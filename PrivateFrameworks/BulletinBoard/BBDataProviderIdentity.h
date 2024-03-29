//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBDataProviderIdentity_h
#define BBDataProviderIdentity_h
@import Foundation;

#include "BBSectionIcon.h"
#include "BBSectionInfo.h"
#include "BBSectionParameters.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface BBDataProviderIdentity : NSObject<NSSecureCoding>

@property (readonly, nonatomic) struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :1; unsigned int x11 :1; unsigned int x12 :1; unsigned int x13 :1; unsigned int x14 :1; unsigned int x15 :1; unsigned int x16 :1; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; unsigned int x21 :1; unsigned int x22 :1; unsigned int x23 :1; unsigned int x24 :1; } traits;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *universalSectionIdentifier;
@property (copy, nonatomic) BBSectionInfo *defaultSectionInfo;
@property (copy, nonatomic) NSString *sectionDisplayName;
@property (copy, nonatomic) BBSectionIcon *sectionIcon;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) BBSectionParameters *sectionParameters;
@property (copy, nonatomic) NSArray *defaultSubsectionInfos;
@property (copy, nonatomic) NSString *sortKey;
@property (copy, nonatomic) NSDictionary *subsectionDisplayNames;
@property (readonly, nonatomic) BOOL syncsBulletinDismissal;
@property (copy, nonatomic) NSString *parentSectionIdentifier;
@property (copy, nonatomic) NSDictionary *filterDisplayNames;
@property (copy, nonatomic) NSString *sectionBundlePath;

/* class methods */
+ (id)identityForDataProvider:(id)provider;
+ (id)identityForRemoteDataProvider:(id)provider;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initForDataProvider:(id)provider forRemoteDataProvider:(BOOL)provider;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BBDataProviderIdentity_h */
