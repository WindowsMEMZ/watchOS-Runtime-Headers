//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef SFSpeechLanguageModel_h
#define SFSpeechLanguageModel_h
@import Foundation;

#include "SFLocalSpeechRecognitionClient.h"

@class NSArray, NSDictionary, NSLocale;

@interface SFSpeechLanguageModel : NSObject {
  /* instance variables */
  SFLocalSpeechRecognitionClient *_lsrClient;
}

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSArray *outOfVocabularyWords;
@property (readonly, copy, nonatomic) NSDictionary *outOfVocabularyWordsAndFrequencies;

/* class methods */
+ (void)initialize;
+ (id)supportedLocales;
+ (void)trainAppLmFromNgramsSerializedDataFile:(id)file customPronsFile:(id)file language:(id)language writeToDirectory:(id)directory modelOverride:(id)override completion:(id /* block */)completion;
+ (void)trainAppLmFromNgramCountsArtifact:(id)artifact language:(id)language clientIdentifier:(id)identifier writeToDirectory:(id)directory modelOverride:(id)override completion:(id /* block */)completion;
+ (void)appLmNeedsRebuild:(id)rebuild language:(id)language clientIdentifier:(id)identifier modelOverride:(id)override completion:(id /* block */)completion;
+ (void)prepareCustomLanguageModelForUrl:(id)url clientIdentifier:(id)identifier configuration:(id)configuration completion:(id /* block */)completion;
+ (void)prepareCustomLanguageModelForUrl:(id)url clientIdentifier:(id)identifier configuration:(id)configuration ignoresCache:(BOOL)cache completion:(id /* block */)completion;

/* instance methods */
- (id)init;
- (id)initWithLocale:(id)locale clientID:(id)id;
- (id)initWithAssetPath:(id)path;
- (void)dealloc;
- (void)addSentence:(id)sentence;
- (void)addSentences:(id)sentences;
- (id)addOovsFromSentence:(id)sentence;
- (void)trainFromPlainTextAndWriteToDirectory:(id)directory completion:(id /* block */)completion;
- (BOOL)trainFromPlainTextAndWriteToDirectory:(id)directory;
- (void)generateNgramsSerializeDataAndWriteToFile:(id)file;
- (id)deserializeModelData:(id)data;
- (void)addPronsFromFile:(id)file;
- (BOOL)addProns:(id)prons forWord:(id)word;
- (long long)lmeThreshold;
- (id)metrics;
- (id)createPhraseCountsArtifactWithIdentifier:(id)identifier rawPhraseCountsPath:(id)path customPronunciationsPath:(id)path writeDirectory:(id)directory;
- (id)createNgramCountsArtifactFromPhraseCountArtifact:(id)artifact writeDirectory:(id)directory;
- (id)createNgramCountsArtifactWithIdentifier:(id)identifier rawPhraseCountsPath:(id)path customPronunciationsPath:(id)path writeDirectory:(id)directory;
@end

#endif /* SFSpeechLanguageModel_h */
