//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLThumbnailMetadata_h
#define QLThumbnailMetadata_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface QLThumbnailMetadata : NSObject<NSSecureCoding>

@property int inlinePreviewMode;
@property long long baseline;

/* class methods */
+ (id)thumbnailMetadataFromPropertiesDictionary:(id)dictionary;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)propertiesDict;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* QLThumbnailMetadata_h */
