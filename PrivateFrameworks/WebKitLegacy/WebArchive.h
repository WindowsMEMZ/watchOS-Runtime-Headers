//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebArchive_h
#define WebArchive_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "WebArchivePrivate.h"
#include "WebResource.h"

@class NSArray, NSData;

@interface WebArchive : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  WebArchivePrivate *_private;
}

@property (readonly, nonatomic) WebResource *mainResource;
@property (readonly, copy, nonatomic) NSArray *subresources;
@property (readonly, copy, nonatomic) NSArray *subframeArchives;
@property (readonly, copy, nonatomic) NSData *data;

/* instance methods */
- (id)_initWithCoreLegacyWebArchive:(void *)archive;
- (void *)_coreLegacyWebArchive;
- (id)init;
- (id)initWithMainResource:(id)resource subresources:(id)subresources subframeArchives:(id)archives;
- (id)initWithData:(id)data;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WebArchive_h */
