//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPStoreArtworkRequestToken_h
#define MPStoreArtworkRequestToken_h
@import Foundation;

#include "MPArtworkDataSourceVisualIdenticality-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class ICStoreArtworkInfo, ICStoreVideoArtworkInfo, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject<NSSecureCoding, MPArtworkDataSourceVisualIdenticality>

@property (nonatomic) long long artworkInfoType;
@property (copy, nonatomic) ICStoreArtworkInfo *imageArtworkInfo;
@property (copy, nonatomic) ICStoreVideoArtworkInfo *videoArtworkInfo;
@property (copy, nonatomic) NSString *cropStyle;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *sourceEditorialArtworkKind;
@property (copy, nonatomic) NSURL *artworkURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)tokenWithImageArtworkInfo:(id)info;
+ (id)tokenWithVideoArtworkInfo:(id)info;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)stringRepresentation;
@end

#endif /* MPStoreArtworkRequestToken_h */
