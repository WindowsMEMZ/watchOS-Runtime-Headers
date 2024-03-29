//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIWordTokenizer_h
#define TIWordTokenizer_h
@import Foundation;

@class NSString;

@interface TIWordTokenizer : NSObject {
  /* instance variables */
  NSString *m_string;
  struct { unsigned short x[64] buffer; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } m_inlineBuffer;
  struct _NSRange { unsigned long long location; unsigned long long length; } m_tokenRange;
  struct _NSRange { unsigned long long location; unsigned long long length; } m_searchRange;
  unsigned long long m_bufferOffset;
}

/* instance methods */
- (id)init;
- (void)setString:(id)string withSearchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })advanceToNextToken;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCurrentToken;
- (id)allTokensForString:(id)string;
@end

#endif /* TIWordTokenizer_h */
