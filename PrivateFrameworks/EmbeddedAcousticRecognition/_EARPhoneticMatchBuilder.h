//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARPhoneticMatchBuilder_h
#define _EARPhoneticMatchBuilder_h
@import Foundation;

@protocol struct shared_ptr<quasar::PMBuilder> { struct PMBuilder * x0; struct __shared_weak_count * x1; }, struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer * x0; struct __shared_weak_count * x1; }, {shared_ptr<quasar::PMBuilder>="__ptr_"^{PMBuilder}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<quasar::TextTokenizer>="__ptr_"^{TextTokenizer}"__cntrl_"^{__shared_weak_count}};

@interface _EARPhoneticMatchBuilder : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer * x0; struct __shared_weak_count * x1; } tokenizer;
@property (readonly, nonatomic) struct shared_ptr<quasar::PMBuilder> { struct PMBuilder * x0; struct __shared_weak_count * x1; } pmBuilder;

/* class methods */
+ (BOOL)writePlaceholderFstToPath:(id)path;
+ (BOOL)writePlaceholderSymbolsToPath:(id)path;

/* instance methods */
- (id)initWithModelRoot:(id)root jsonConfigFile:(id)file dataFeeds:(id)feeds;
- (id)initWithModelRoot:(id)root jsonConfigFile:(id)file dataFeedsFile:(id)file;
- (id)initWithNcsRoot:(id)root jsonConfigFile:(id)file dataFeeds:(id)feeds;
- (id)initWithNcsRoot:(id)root jsonConfigFile:(id)file dataFeedsFile:(id)file;
- (BOOL)supportPhoneticMatchBuilding;
- (BOOL)buildGFsts;
- (BOOL)buildLFst;
- (BOOL)buildAlignedLFst;
- (BOOL)composeLGFsts;
- (BOOL)combineFsts;
- (void)reset;
- (BOOL)writeAlignedLFstToPath:(id)path;
- (BOOL)writeLGFstToPath:(id)path;
- (BOOL)writeOSymsToPath:(id)path asText:(BOOL)text quasarise:(BOOL)quasarise;
- (BOOL)writeISymsToPath:(id)path asText:(BOOL)text;
- (BOOL)writeGFstsToDirectory:(id)directory;
- (BOOL)writeLFstToPath:(id)path;
- (BOOL)writeIndividualLGFstsToDirectory:(id)directory;
- (BOOL)writeMetadataToPath:(id)path;
- (id)lgFstName;
- (id)lFstName;
- (id)osymsName;
@end

#endif /* _EARPhoneticMatchBuilder_h */
