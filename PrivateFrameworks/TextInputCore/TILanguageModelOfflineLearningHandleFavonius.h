//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TILanguageModelOfflineLearningHandleFavonius_h
#define TILanguageModelOfflineLearningHandleFavonius_h
@import Foundation;

#include "TILanguageModelOfflineLearningHandle.h"

@protocol struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer * x0; }, struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; }, {RefPtr<KB::DictionaryContainer>="m_ptr"^{DictionaryContainer}}, {shared_ptr<KB::LanguageModel>="__ptr_"^{LanguageModel}"__cntrl_"^{__shared_weak_count}};

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; } currentModel;
@property (readonly, nonatomic) struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer * x0; } dictionaries;

/* instance methods */
- (id)initWithInputMode:(id)mode;
- (void)updateAdaptationContext:(id)context;
- (void)load;
- (void)adaptToParagraph:(id)paragraph timeStamp:(double)stamp adaptationType:(int)type;
- (void)didFinishLearning;
@end

#endif /* TILanguageModelOfflineLearningHandleFavonius_h */
