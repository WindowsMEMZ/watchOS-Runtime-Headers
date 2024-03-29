//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDCFBurstTrie_h
#define GDCFBurstTrie_h
@import Foundation;

@interface GDCFBurstTrie : NSObject {
  /* instance variables */
  struct _CFBurstTrie * _trie;
}

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;
- (unsigned int)payloadForString:(id)string;
- (unsigned int)payloadForString:(id)string range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned int)payloadForUTF8String:(const char *)string length:(unsigned long long)length;
- (void)runBlockWithTrie:(id /* block */)trie;
@end

#endif /* GDCFBurstTrie_h */
