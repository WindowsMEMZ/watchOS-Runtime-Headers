//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDTemplatePlaceModuleConfiguration_h
#define GEOPDTemplatePlaceModuleConfiguration_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOPDTemplatePlaceModuleConfiguration : PBCodable<NSCopying> {
  /* instance variables */
  PBUnknownFields *_unknownFields;
  NSMutableArray *_sectionTitles;
  int _layoutType;
  int _numberOfRows;
  int _orientation;
  int _templatePlaceComponentId;
  struct { unsigned int x :1 has_layoutType; unsigned int x :1 has_numberOfRows; unsigned int x :1 has_orientation; unsigned int x :1 has_templatePlaceComponentId; } _flags;
}

/* instance methods */
- (id)sectionTitle;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDTemplatePlaceModuleConfiguration_h */
