//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPiCloudSharingMetadata_h
#define LPiCloudSharingMetadata_h
@import Foundation;

#include "LPSpecializationMetadata.h"
#include "LPImage.h"
#include "LPLinkMetadataBackwardCompatibility-Protocol.h"
#include "LPLinkMetadataFallbackIconTransformer-Protocol.h"
#include "LPLinkMetadataPresentationTransformer-Protocol.h"
#include "LPLinkMetadataPreviewTransformer-Protocol.h"
#include "LPLinkMetadataSharedObjectTransformer-Protocol.h"

@class NSString;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata<LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataSharedObjectTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *applicationBundleIdenfier;
@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPImage *thumbnail;

/* class methods */
+ (id)_applicationNameMap;
+ (id)_bundleIdentifierMap;
+ (id)extractApplicationFromURL:(id)url;
+ (id)extractKindFromURL:(id)url;
+ (id)extractTitleFromURL:(id)url;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

/* instance methods */
- (id)firstPartyAppIcon;
- (id)computeThumbnail;
- (id)computeIcon;
- (BOOL)isSafariTabGroupLinkWithURL:(id)url;
- (id)localizedApplicationNameWithURL:(id)url;
- (id)localizedKind;
- (id)_topLeadingCaptionStringWithApplicationName:(id)name;
- (id)_bottomLeadingCaptionStringWithApplicationName:(id)name originalURL:(id)url;
- (id)presentationPropertiesForTransformer:(id)transformer;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)url;
- (id)previewSummaryForTransformer:(id)transformer;
- (id)previewImageForTransformer:(id)transformer;
- (id)fallbackIconForTransformer:(id)transformer;
- (void)populateMetadataForBackwardCompatibility:(id)compatibility;
- (id)sharedObjectTitleForTransformer:(id)transformer;
- (id)sharedObjectSubtitleForTransformer:(id)transformer;
- (id)sharedObjectInformationForTransformer:(id)transformer;
- (id)sharedObjectIconForTransformer:(id)transformer;
- (BOOL)sharedObjectPrefersIconAsImageForTransformer:(id)transformer;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)_enumerateAsynchronousFields:(id /* block */)fields;
@end

#endif /* LPiCloudSharingMetadata_h */
