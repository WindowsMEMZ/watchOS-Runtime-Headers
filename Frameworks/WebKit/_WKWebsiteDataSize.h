//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKWebsiteDataSize_h
#define _WKWebsiteDataSize_h
@import Foundation;

@protocol {Size="totalSize"Q"typeSizes"{HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits>="m_impl"{HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>>=""(?="m_table"^v"m_tableForLLDB"^I)}}};

@interface _WKWebsiteDataSize : NSObject {
  /* instance variables */
  struct Size { unsigned long long totalSize; struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits> { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> { union { void *m_table; unsigned int *m_tableForLLDB; } x0; } m_impl; } typeSizes; } _size;
}

@property (readonly, nonatomic) unsigned long long totalSize;

/* instance methods */
- (id)initWithSize:(const void *)size;
- (unsigned long long)sizeOfDataTypes:(id)types;
@end

#endif /* _WKWebsiteDataSize_h */
