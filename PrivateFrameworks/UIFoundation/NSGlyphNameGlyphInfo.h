//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSGlyphNameGlyphInfo_h
#define NSGlyphNameGlyphInfo_h
@import Foundation;

#include "NSIdentityGlyphInfo.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo<NSSecureCoding> {
  /* instance variables */
  NSString *_name;
}

/* class methods */
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGlyphName:(id)name glyph:(unsigned int)glyph forFont:(id)font baseString:(id)string;
- (void)dealloc;
- (id)glyphName;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* NSGlyphNameGlyphInfo_h */
