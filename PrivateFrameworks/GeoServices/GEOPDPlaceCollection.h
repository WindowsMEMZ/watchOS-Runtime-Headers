//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDPlaceCollection_h
#define GEOPDPlaceCollection_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDCaptionedPhoto.h"
#include "GEOPDMapsIdentifier.h"
#include "GEOPDPublisher.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPlaceCollection : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSString *_authorName;
  GEOPDCaptionedPhoto *_authorPhoto;
  NSMutableArray *_collectionClassDisplayNames;
  NSMutableArray *_collectionClassSpokenNames;
  NSMutableArray *_collectionDescriptionBytes;
  NSMutableArray *_collectionDescriptionHtmls;
  NSMutableArray *_collectionDescriptions;
  GEOPDMapsIdentifier *_collectionId;
  NSMutableArray *_collectionItemDescriptionHtmls;
  NSMutableArray *_collectionItemDescriptions;
  NSMutableArray *_displayTitles;
  NSMutableArray *_itemIds;
  NSMutableArray *_longSpokenTitles;
  NSMutableArray *_longTitles;
  NSMutableArray *_mediaLinks;
  double _modifiedTime;
  NSMutableArray *_photos;
  NSMutableArray *_placeCollectionItems;
  GEOPDMapsIdentifier *_publisherId;
  GEOPDPublisher *_publisher;
  NSMutableArray *_spokenTitles;
  NSString *_url;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _errorState;
  unsigned int _numItems;
  BOOL _enableFallbackImagesForItems;
  struct { unsigned int x :1 has_modifiedTime; unsigned int x :1 has_errorState; unsigned int x :1 has_numItems; unsigned int x :1 has_enableFallbackImagesForItems; unsigned int x :1 read_unknownFields; unsigned int x :1 read_authorName; unsigned int x :1 read_authorPhoto; unsigned int x :1 read_collectionClassDisplayNames; unsigned int x :1 read_collectionClassSpokenNames; unsigned int x :1 read_collectionDescriptionBytes; unsigned int x :1 read_collectionDescriptionHtmls; unsigned int x :1 read_collectionDescriptions; unsigned int x :1 read_collectionId; unsigned int x :1 read_collectionItemDescriptionHtmls; unsigned int x :1 read_collectionItemDescriptions; unsigned int x :1 read_displayTitles; unsigned int x :1 read_itemIds; unsigned int x :1 read_longSpokenTitles; unsigned int x :1 read_longTitles; unsigned int x :1 read_mediaLinks; unsigned int x :1 read_photos; unsigned int x :1 read_placeCollectionItems; unsigned int x :1 read_publisherId; unsigned int x :1 read_publisher; unsigned int x :1 read_spokenTitles; unsigned int x :1 read_url; unsigned int x :1 wrote_anyField; } _flags;
}

/* class methods */
+ (id)collectionComponentsForPlaceData:(id)data;

/* instance methods */
- (id)collectionTitle;
- (id)collectionLongTitle;
- (id)collectionDescription;
- (id)collectionHTMLDescription;
- (id)publisherDescriptionOfCollectionItem;
- (id)publisherHTMLDescriptionOfCollectionItem;
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDPlaceCollection_h */
