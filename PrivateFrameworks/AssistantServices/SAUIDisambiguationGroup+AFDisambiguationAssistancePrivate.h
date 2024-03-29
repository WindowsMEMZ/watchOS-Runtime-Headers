//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef SAUIDisambiguationGroup_AFDisambiguationAssistancePrivate_h
#define SAUIDisambiguationGroup_AFDisambiguationAssistancePrivate_h
@import Foundation;

@interface SAUIDisambiguationGroup (AFDisambiguationAssistancePrivate) <AFDisambiguationAssistancePrivate>
/* instance methods */
- (id)af_disambiguationIdentifier;
- (id)af_indexIdentifierForItem:(id)item;
- (id)af_itemForIndexIdentifier:(id)identifier;
- (id)af_disambiguationInfo;
- (void)af_setDisambiguationInfo:(id)info;
- (id)af_assistedSelectionItem;
- (void)af_saveItemSelection:(id)selection forType:(long long)type;
@end

#endif /* SAUIDisambiguationGroup_AFDisambiguationAssistancePrivate_h */
