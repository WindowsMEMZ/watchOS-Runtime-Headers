//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIClientBMLTCatalogArtifact_h
#define TRIClientBMLTCatalogArtifact_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, TRIClientBmltCatalog;

@interface TRIClientBMLTCatalogArtifact : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) TRIClientBmltCatalog *bmltCatalog;
@property (readonly, nonatomic) NSNumber *population;

/* class methods */
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)ckrecord error:(id *)error;
+ (BOOL)_hasStructurallyValidBMLTs:(id)bmlts population:(id)population;
+ (id)artifactWithBmltCatalog:(id)catalog population:(id)population;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBmltCatalog:(id)catalog population:(id)population;
- (id)copyWithReplacementBmltCatalog:(id)catalog;
- (id)copyWithReplacementPopulation:(id)population;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToArtifact:(id)artifact;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)init;
@end

#endif /* TRIClientBMLTCatalogArtifact_h */
