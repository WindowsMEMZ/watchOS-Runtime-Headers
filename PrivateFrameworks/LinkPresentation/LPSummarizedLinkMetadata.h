//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPSummarizedLinkMetadata_h
#define LPSummarizedLinkMetadata_h
@import Foundation;

#include "LPSpecializationMetadata.h"
#include "LPLinkMetadataPresentationTransformer-Protocol.h"

@class NSString;

@interface LPSummarizedLinkMetadata : LPSpecializationMetadata<LPLinkMetadataPresentationTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

/* instance methods */
- (id)presentationPropertiesForTransformer:(id)transformer;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)url;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LPSummarizedLinkMetadata_h */
