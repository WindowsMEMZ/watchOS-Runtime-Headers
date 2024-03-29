//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPSharePlayInviteMetadata_h
#define LPSharePlayInviteMetadata_h
@import Foundation;

#include "LPSpecializationMetadata.h"
#include "LPImage.h"
#include "LPLinkMetadataBackwardCompatibility-Protocol.h"
#include "LPLinkMetadataPresentationTransformer-Protocol.h"
#include "LPLinkMetadataPreviewTransformer-Protocol.h"
#include "LPLinkMetadataSourceApplicationTransformer-Protocol.h"

@class NSString;

@interface LPSharePlayInviteMetadata : LPSpecializationMetadata<LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataSourceApplicationTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *application;
@property (retain, nonatomic) LPImage *icon;

/* class methods */
+ (id)applicationNameToDisplayForBundleID:(id)id fallbackName:(id)name;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

/* instance methods */
- (id)presentationPropertiesForTransformer:(id)transformer;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)url;
- (id)previewSummaryForTransformer:(id)transformer;
- (id)previewImageForTransformer:(id)transformer;
- (void)populateMetadataForBackwardCompatibility:(id)compatibility;
- (id)sourceApplicationMetadataForTransformer:(id)transformer;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)_enumerateAsynchronousFields:(id /* block */)fields;
@end

#endif /* LPSharePlayInviteMetadata_h */
