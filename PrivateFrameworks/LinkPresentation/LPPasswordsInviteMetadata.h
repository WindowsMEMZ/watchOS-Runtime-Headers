//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPPasswordsInviteMetadata_h
#define LPPasswordsInviteMetadata_h
@import Foundation;

#include "LPSpecializationMetadata.h"
#include "LPImage.h"
#include "LPLinkMetadataBackwardCompatibility-Protocol.h"
#include "LPLinkMetadataPresentationTransformer-Protocol.h"
#include "LPLinkMetadataPreviewTransformer-Protocol.h"
#include "LPLinkMetadataSharedWithYouTransformer-Protocol.h"

@class NSString;

@interface LPPasswordsInviteMetadata : LPSpecializationMetadata<LPLinkMetadataBackwardCompatibility, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedWithYouTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *urlParameters;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) LPImage *icon;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

/* instance methods */
- (id)_subtitle;
- (id)presentationPropertiesForTransformer:(id)transformer;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)url;
- (id)previewImageForTransformer:(id)transformer;
- (id)previewSummaryForTransformer:(id)transformer;
- (BOOL)shouldDonateToSharedWithYouForTransformer:(id)transformer;
- (void)populateMetadataForBackwardCompatibility:(id)compatibility;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_disallowsURLOverrideByDelegate;
@end

#endif /* LPPasswordsInviteMetadata_h */
