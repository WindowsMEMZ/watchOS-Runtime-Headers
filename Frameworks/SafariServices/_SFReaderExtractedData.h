//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFReaderExtractedData_h
#define _SFReaderExtractedData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString, NSURL;

@interface _SFReaderExtractedData : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *author;
@property (readonly, copy, nonatomic) NSString *publishedDate;
@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSURL *mainImageURL;
@property (readonly, nonatomic) NSURL *url;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)initWithReaderContent:(id)content url:(id)url;
- (id)_initWithAuthor:(id)author body:(id)body publishedDate:(id)date title:(id)title mainImageURL:(id)url url:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _SFReaderExtractedData_h */
