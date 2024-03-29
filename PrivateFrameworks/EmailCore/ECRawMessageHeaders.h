//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECRawMessageHeaders_h
#define ECRawMessageHeaders_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;

@interface ECRawMessageHeaders : NSObject {
  /* instance variables */
  NSMutableDictionary *_headers;
  NSMutableArray *_orderedHeaders;
}

/* instance methods */
- (id)initWithHeaderString:(id)string;
- (id)allHeaders;
- (id)allHeaderKeys;
- (id)headersForKey:(id)key;
- (id)firstHeaderForKey:(id)key;
@end

#endif /* ECRawMessageHeaders_h */
