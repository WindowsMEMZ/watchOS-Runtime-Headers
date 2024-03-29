//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPBusinessChatMetadata_h
#define LPBusinessChatMetadata_h
@import Foundation;

#include "LPSpecializationMetadata.h"
#include "LPLinkMetadataPresentationTransformer-Protocol.h"
#include "LPLinkMetadataPreviewTransformer-Protocol.h"
#include "LPLinkMetadataSharedWithYouTransformer-Protocol.h"

@class NSString;

@interface LPBusinessChatMetadata : LPSpecializationMetadata<LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedWithYouTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *subtitle;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

/* instance methods */
- (id)presentationPropertiesForTransformer:(id)transformer;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)url;
- (id)previewSummaryForTransformer:(id)transformer;
- (id)previewImageForTransformer:(id)transformer;
- (BOOL)shouldDonateToSharedWithYouForTransformer:(id)transformer;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LPBusinessChatMetadata_h */
