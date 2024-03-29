//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMimeCharset_h
#define MFMimeCharset_h
@import Foundation;

#include "ECMIMECharset-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface MFMimeCharset : NSObject<NSSecureCoding, ECMIMECharset> {
  /* instance variables */
  NSString *_primaryLanguage;
  unsigned int x :1 _coversLargeUnicodeSubset;
}

@property (readonly, nonatomic) BOOL useBase64InHeaders;
@property (readonly, nonatomic) unsigned int cfStringEncoding;
@property (readonly) unsigned long long encoding;
@property (readonly, copy, nonatomic) NSString *charsetName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)allMimeCharsets:(BOOL)charsets;
+ (id)allMimeCharsets;
+ (id)charsetForEncoding:(unsigned int)encoding;
+ (id)preferredMimeCharset;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithEncoding:(unsigned int)encoding;
- (void)_setPrimaryLanguage:(id)language;
- (BOOL)coversLargeUnicodeSubset;
- (id)primaryLanguage;
@end

#endif /* MFMimeCharset_h */
