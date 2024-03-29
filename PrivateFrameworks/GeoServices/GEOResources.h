//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResources_h
#define GEOResources_h
@import Foundation;

#include "PBCodable.h"
#include "GEOVersionManifest.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOResources : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_locationShiftVersion; unsigned int x :1 read_unknownFields; unsigned int x :1 read_abExperimentURL; unsigned int x :1 read_addressCorrectionInitURL; unsigned int x :1 read_addressCorrectionUpdateURL; unsigned int x :1 read_announcementsSupportedLanguages; unsigned int x :1 read_announcementsURL; unsigned int x :1 read_attributions; unsigned int x :1 read_authProxyURL; unsigned int x :1 read_authToken; unsigned int x :1 read_backgroundDispatcherURL; unsigned int x :1 read_backgroundRevGeoURL; unsigned int x :1 read_batchReverseGeocoderURL; unsigned int x :1 read_batchTrafficProbeURL; unsigned int x :1 read_bluePOIDispatcherURL; unsigned int x :1 read_businessPortalBaseURL; unsigned int x :1 read_dataSetURLOverrides; unsigned int x :1 read_dataSets; unsigned int x :1 read_directionsURL; unsigned int x :1 read_dispatcherURL; unsigned int x :1 read_displayStrings; unsigned int x :1 read_etaURL; unsigned int x :1 read_fontChecksums; unsigned int x :1 read_fonts; unsigned int x :1 read_iconChecksums; unsigned int x :1 read_icons; unsigned int x :1 read_locationShiftEnabledRegions; unsigned int x :1 read_logMessageUsageURL; unsigned int x :1 read_logMessageUsageV3URL; unsigned int x :1 read_muninBaseURL; unsigned int x :1 read_muninBuckets; unsigned int x :1 read_muninVersions; unsigned int x :1 read_offlineMetadatas; unsigned int x :1 read_polyLocationShiftURL; unsigned int x :1 read_proactiveRoutingURL; unsigned int x :1 read_problemCategoriesURL; unsigned int x :1 read_problemOptInURL; unsigned int x :1 read_problemStatusURL; unsigned int x :1 read_problemSubmissionURL; unsigned int x :1 read_realtimeTrafficProbeURL; unsigned int x :1 read_regionalResources; unsigned int x :1 read_releaseInfo; unsigned int x :1 read_resourcesURL; unsigned int x :1 read_resources; unsigned int x :1 read_reverseGeocoderVersionsURL; unsigned int x :1 read_searchAttributionManifestURL; unsigned int x :1 read_simpleETAURL; unsigned int x :1 read_spatialLookupURL; unsigned int x :1 read_styleSheetChecksums; unsigned int x :1 read_styleSheets; unsigned int x :1 read_textureChecksums; unsigned int x :1 read_textures; unsigned int x :1 read_tileGroups; unsigned int x :1 read_tileSets; unsigned int x :1 read_urlInfoSets; unsigned int x :1 read_versionManifest; unsigned int x :1 read_wifiConnectionQualityProbeURL; unsigned int x :1 read_xmlChecksums; unsigned int x :1 read_xmls; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSMutableArray *tileGroups;
@property (retain, nonatomic) NSMutableArray *tileSets;
@property (retain, nonatomic) NSMutableArray *styleSheets;
@property (retain, nonatomic) NSMutableArray *textures;
@property (retain, nonatomic) NSMutableArray *fonts;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *regionalResources;
@property (retain, nonatomic) NSMutableArray *xmls;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (readonly, nonatomic) BOOL hasAuthToken;
@property (retain, nonatomic) NSString *authToken;
@property (readonly, nonatomic) BOOL hasResourcesURL;
@property (retain, nonatomic) NSString *resourcesURL;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
@property (retain, nonatomic) NSString *searchAttributionManifestURL;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (retain, nonatomic) NSString *directionsURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (retain, nonatomic) NSString *etaURL;
@property (readonly, nonatomic) BOOL hasReleaseInfo;
@property (retain, nonatomic) NSString *releaseInfo;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (retain, nonatomic) NSString *batchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (retain, nonatomic) NSString *simpleETAURL;
@property (retain, nonatomic) NSMutableArray *styleSheetChecksums;
@property (retain, nonatomic) NSMutableArray *textureChecksums;
@property (retain, nonatomic) NSMutableArray *fontChecksums;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (retain, nonatomic) NSMutableArray *xmlChecksums;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (retain, nonatomic) NSString *addressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (retain, nonatomic) NSString *addressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
@property (retain, nonatomic) NSString *polyLocationShiftURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (retain, nonatomic) NSString *problemSubmissionURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (retain, nonatomic) NSString *problemStatusURL;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
@property (retain, nonatomic) NSString *reverseGeocoderVersionsURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (retain, nonatomic) NSString *problemCategoriesURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (retain, nonatomic) NSString *announcementsURL;
@property (retain, nonatomic) NSMutableArray *announcementsSupportedLanguages;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (retain, nonatomic) NSString *dispatcherURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (retain, nonatomic) NSString *problemOptInURL;
@property (readonly, nonatomic) BOOL hasVersionManifest;
@property (retain, nonatomic) GEOVersionManifest *versionManifest;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (retain, nonatomic) NSString *abExperimentURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (retain, nonatomic) NSString *businessPortalBaseURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (retain, nonatomic) NSString *logMessageUsageURL;
@property (retain, nonatomic) NSMutableArray *locationShiftEnabledRegions;
@property (nonatomic) BOOL hasLocationShiftVersion;
@property (nonatomic) unsigned int locationShiftVersion;
@property (retain, nonatomic) NSMutableArray *resources;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (retain, nonatomic) NSString *spatialLookupURL;
@property (retain, nonatomic) NSMutableArray *dataSets;
@property (retain, nonatomic) NSMutableArray *dataSetURLOverrides;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
@property (retain, nonatomic) NSString *realtimeTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (retain, nonatomic) NSString *batchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURL;
@property (retain, nonatomic) NSString *proactiveRoutingURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (retain, nonatomic) NSString *logMessageUsageV3URL;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (retain, nonatomic) NSString *backgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
@property (retain, nonatomic) NSString *bluePOIDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (retain, nonatomic) NSString *backgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURL;
@property (retain, nonatomic) NSString *wifiConnectionQualityProbeURL;
@property (readonly, nonatomic) BOOL hasMuninBaseURL;
@property (retain, nonatomic) NSString *muninBaseURL;
@property (retain, nonatomic) NSMutableArray *muninVersions;
@property (readonly, nonatomic) BOOL hasAuthProxyURL;
@property (retain, nonatomic) NSString *authProxyURL;
@property (retain, nonatomic) NSMutableArray *urlInfoSets;
@property (retain, nonatomic) NSMutableArray *muninBuckets;
@property (retain, nonatomic) NSMutableArray *displayStrings;
@property (retain, nonatomic) NSMutableArray *offlineMetadatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)tileGroupType;
+ (Class)tileSetType;
+ (Class)styleSheetType;
+ (Class)textureType;
+ (Class)fontType;
+ (Class)iconType;
+ (Class)regionalResourceType;
+ (Class)xmlType;
+ (Class)attributionType;
+ (Class)styleSheetChecksumType;
+ (Class)textureChecksumType;
+ (Class)fontChecksumType;
+ (Class)iconChecksumType;
+ (Class)xmlChecksumType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)resourceType;
+ (Class)dataSetType;
+ (Class)dataSetURLOverrideType;
+ (Class)muninVersionType;
+ (Class)urlInfoSetType;
+ (Class)muninBucketType;
+ (Class)displayStringsType;
+ (Class)offlineMetadataType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)preferredDataSetForMapsABClient;
- (id)preferredDataSetForClientDatasetMetadata:(id)metadata;
- (BOOL)isValid;
- (id)preferedURLSetFor:(id)for;
- (id)init;
- (id)initWithData:(id)data;
- (void)clearTileGroups;
- (void)addTileGroup:(id)group;
- (unsigned long long)tileGroupsCount;
- (id)tileGroupAtIndex:(unsigned long long)index;
- (void)clearTileSets;
- (void)addTileSet:(id)set;
- (unsigned long long)tileSetsCount;
- (id)tileSetAtIndex:(unsigned long long)index;
- (void)clearStyleSheets;
- (void)addStyleSheet:(id)sheet;
- (unsigned long long)styleSheetsCount;
- (id)styleSheetAtIndex:(unsigned long long)index;
- (void)clearTextures;
- (void)addTexture:(id)texture;
- (unsigned long long)texturesCount;
- (id)textureAtIndex:(unsigned long long)index;
- (void)clearFonts;
- (void)addFont:(id)font;
- (unsigned long long)fontsCount;
- (id)fontAtIndex:(unsigned long long)index;
- (void)clearIcons;
- (void)addIcon:(id)icon;
- (unsigned long long)iconsCount;
- (id)iconAtIndex:(unsigned long long)index;
- (void)clearRegionalResources;
- (void)addRegionalResource:(id)resource;
- (unsigned long long)regionalResourcesCount;
- (id)regionalResourceAtIndex:(unsigned long long)index;
- (void)clearXmls;
- (void)addXml:(id)xml;
- (unsigned long long)xmlsCount;
- (id)xmlAtIndex:(unsigned long long)index;
- (void)clearAttributions;
- (void)addAttribution:(id)attribution;
- (unsigned long long)attributionsCount;
- (id)attributionAtIndex:(unsigned long long)index;
- (void)clearStyleSheetChecksums;
- (void)addStyleSheetChecksum:(id)checksum;
- (unsigned long long)styleSheetChecksumsCount;
- (id)styleSheetChecksumAtIndex:(unsigned long long)index;
- (void)clearTextureChecksums;
- (void)addTextureChecksum:(id)checksum;
- (unsigned long long)textureChecksumsCount;
- (id)textureChecksumAtIndex:(unsigned long long)index;
- (void)clearFontChecksums;
- (void)addFontChecksum:(id)checksum;
- (unsigned long long)fontChecksumsCount;
- (id)fontChecksumAtIndex:(unsigned long long)index;
- (void)clearIconChecksums;
- (void)addIconChecksum:(id)checksum;
- (unsigned long long)iconChecksumsCount;
- (id)iconChecksumAtIndex:(unsigned long long)index;
- (void)clearXmlChecksums;
- (void)addXmlChecksum:(id)checksum;
- (unsigned long long)xmlChecksumsCount;
- (id)xmlChecksumAtIndex:(unsigned long long)index;
- (void)clearAnnouncementsSupportedLanguages;
- (void)addAnnouncementsSupportedLanguages:(id)languages;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)index;
- (void)clearLocationShiftEnabledRegions;
- (void)addLocationShiftEnabledRegion:(id)region;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)index;
- (void)clearResources;
- (void)addResource:(id)resource;
- (unsigned long long)resourcesCount;
- (id)resourceAtIndex:(unsigned long long)index;
- (void)clearDataSets;
- (void)addDataSet:(id)set;
- (unsigned long long)dataSetsCount;
- (id)dataSetAtIndex:(unsigned long long)index;
- (void)clearDataSetURLOverrides;
- (void)addDataSetURLOverride:(id)urloverride;
- (unsigned long long)dataSetURLOverridesCount;
- (id)dataSetURLOverrideAtIndex:(unsigned long long)index;
- (void)clearMuninVersions;
- (void)addMuninVersion:(id)version;
- (unsigned long long)muninVersionsCount;
- (id)muninVersionAtIndex:(unsigned long long)index;
- (void)clearUrlInfoSets;
- (void)addUrlInfoSet:(id)set;
- (unsigned long long)urlInfoSetsCount;
- (id)urlInfoSetAtIndex:(unsigned long long)index;
- (void)clearMuninBuckets;
- (void)addMuninBucket:(id)bucket;
- (unsigned long long)muninBucketsCount;
- (id)muninBucketAtIndex:(unsigned long long)index;
- (void)clearDisplayStrings;
- (void)addDisplayStrings:(id)strings;
- (unsigned long long)displayStringsCount;
- (id)displayStringsAtIndex:(unsigned long long)index;
- (void)clearOfflineMetadatas;
- (void)addOfflineMetadata:(id)metadata;
- (unsigned long long)offlineMetadatasCount;
- (id)offlineMetadataAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOResources_h */
