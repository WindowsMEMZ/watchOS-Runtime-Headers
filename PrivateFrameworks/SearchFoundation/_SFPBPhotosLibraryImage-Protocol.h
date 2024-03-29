//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBPhotosLibraryImage_Protocol_h
#define _SFPBPhotosLibraryImage_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBPhotosLibraryImage-Protocol.h"

@class NSArray, NSData, NSString;

@protocol _SFPBPhotosLibraryImage <NSObject>

@property (copy, nonatomic) NSString *photoIdentifier;
@property (nonatomic) BOOL isSyndicated;
@property (copy, nonatomic) NSArray *peopleInPhotos;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (void)clearPeopleInPhoto;
- (void)addPeopleInPhoto:(id)photo;
- (unsigned long long)peopleInPhotoCount;
- (id)peopleInPhotoAtIndex:(unsigned long long)index;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBPhotosLibraryImage_Protocol_h */
