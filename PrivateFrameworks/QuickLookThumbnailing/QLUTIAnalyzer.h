//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLUTIAnalyzer_h
#define QLUTIAnalyzer_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface QLUTIAnalyzer : NSObject<NSSecureCoding>

@property (readonly) NSString *contentType;

/* class methods */
+ (id)knownExtensions;
+ (id)removeSpacesFromString:(id)string;
+ (id)UTIForURL:(id)url;
+ (id)contentTypeForURL:(id)url;
+ (id)privateContentTypeFromFileName:(id)name;
+ (BOOL)isTypeAudioOnly:(id)only;
+ (BOOL)isContentTypeAudioOnly:(id)only;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContentType:(id)type;
- (id)initWithURL:(id)url;
- (BOOL)isAudioOnly;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* QLUTIAnalyzer_h */
