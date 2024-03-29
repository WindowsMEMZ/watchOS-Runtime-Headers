//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KMIntentVocabularyMultiDatasetBridge_h
#define KMIntentVocabularyMultiDatasetBridge_h
@import Foundation;

#include "KMIntentVocabularyAuthorization.h"
#include "KMIntentVocabularyStoreManager.h"
#include "KMProviderMultiDatasetBridge-Protocol.h"

@class KVItemMapper;

@interface KMIntentVocabularyMultiDatasetBridge : NSObject<KMProviderMultiDatasetBridge> {
  /* instance variables */
  KMIntentVocabularyStoreManager *_storeManager;
  KMIntentVocabularyAuthorization *_authorization;
  KVItemMapper *_itemMapper;
}

/* instance methods */
- (id)init;
- (id)initWithStoreManager:(id)manager authorization:(id)authorization;
- (void)enumerateAllDatasets:(unsigned long long *)datasets usingBlock:(id /* block */)block;
@end

#endif /* KMIntentVocabularyMultiDatasetBridge_h */
