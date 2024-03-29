//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIFilterParameterLoader_h
#define TIFilterParameterLoader_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

/* instance methods */
- (id)init;
- (void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)identifier targetQueue:(id)queue completion:(id /* block */)completion;
- (id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)identifier;
- (id)loadContentsForPlistWithLanguage:(id)language;
- (id)parameterPlistForLanguage:(id)language;
- (id)universalParameterPlist;
- (id)parameterOverridesFolderURL;
@end

#endif /* TIFilterParameterLoader_h */
