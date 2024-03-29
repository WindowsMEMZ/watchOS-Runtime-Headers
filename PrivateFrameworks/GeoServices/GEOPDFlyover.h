//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDFlyover_h
#define GEOPDFlyover_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader;

@interface GEOPDFlyover : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned long long _cameraPathsSpace;
  unsigned long long _labelFramesSpace;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_useSplines; unsigned int x :1 read_cameraPaths; unsigned int x :1 read_labelFrames; unsigned int x :1 read_labels; unsigned int x :1 read_notificationMessages; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) unsigned long long cameraPathsCount;
@property (readonly, nonatomic) struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :1; } x11; } * cameraPaths;
@property (nonatomic) BOOL hasUseSplines;
@property (nonatomic) BOOL useSplines;
@property (readonly, nonatomic) unsigned long long labelFramesCount;
@property (readonly, nonatomic) struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } * labelFrames;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *notificationMessages;

/* class methods */
+ (id)flyoverForPlaceData:(id)data;
+ (Class)labelType;
+ (Class)notificationMessageType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)bestLocalizedLabelAtIndex:(unsigned long long)index;
- (id)bestLocalizedAnnouncementMessage;
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearCameraPaths;
- (void)addCameraPath:(struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :1; } x11; })path;
- (struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :1; } x11; })cameraPathAtIndex:(unsigned long long)index;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :1; } x11; } *)paths count:(unsigned long long)count;
- (void)clearLabelFrames;
- (void)addLabelFrame:(struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; })frame;
- (struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; })labelFrameAtIndex:(unsigned long long)index;
- (void)setLabelFrames:(struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } *)frames count:(unsigned long long)count;
- (void)clearLabels;
- (void)addLabel:(id)label;
- (unsigned long long)labelsCount;
- (id)labelAtIndex:(unsigned long long)index;
- (void)clearNotificationMessages;
- (void)addNotificationMessage:(id)message;
- (unsigned long long)notificationMessagesCount;
- (id)notificationMessageAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOPDFlyover_h */
