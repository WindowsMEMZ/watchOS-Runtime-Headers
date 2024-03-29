//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPMapMetadata_h
#define LPMapMetadata_h
@import Foundation;

#include "LPSpecializationMetadata.h"
#include "LPImage.h"
#include "LPLinkMetadataBackwardCompatibility-Protocol.h"
#include "LPLinkMetadataFallbackIconTransformer-Protocol.h"
#include "LPLinkMetadataPresentationTransformer-Protocol.h"
#include "LPLinkMetadataPreviewTransformer-Protocol.h"

@class CNPostalAddress, NSNumber, NSString;

@interface LPMapMetadata : LPSpecializationMetadata<LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } location;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) CNPostalAddress *addressComponents;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) LPImage *categoryIcon;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) NSNumber *transportType;
@property (copy, nonatomic) NSString *directionsSourceAddress;
@property (copy, nonatomic) CNPostalAddress *directionsSourceAddressComponents;
@property (copy, nonatomic) NSString *directionsSourceLocationName;
@property (copy, nonatomic) NSString *directionsDestinationAddress;
@property (copy, nonatomic) CNPostalAddress *directionsDestinationAddressComponents;
@property (copy, nonatomic) NSString *directionsDestinationLocationName;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *darkImage;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

/* instance methods */
- (id)_address;
- (id)_directionsSourceAddress;
- (id)_directionsDestinationAddress;
- (BOOL)_isDirections;
- (id)_name;
- (id)_deduplicatedAddress;
- (id)_singleLineShortDescription;
- (id)_singleLineVerboseDescription;
- (id)_topLineForTransformer:(id)transformer;
- (id)_bottomLineForTwoUpForTransformer:(id)transformer;
- (long long)_style;
- (id)_resolvedImage;
- (id)_iconForTransport;
- (id)presentationPropertiesForTransformer:(id)transformer;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)url;
- (id)previewSummaryForTransformer:(id)transformer;
- (id)previewImageForTransformer:(id)transformer;
- (id)fallbackIconForTransformer:(id)transformer;
- (void)populateMetadataForBackwardCompatibility:(id)compatibility;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)_enumerateAsynchronousFields:(id /* block */)fields;
@end

#endif /* LPMapMetadata_h */
