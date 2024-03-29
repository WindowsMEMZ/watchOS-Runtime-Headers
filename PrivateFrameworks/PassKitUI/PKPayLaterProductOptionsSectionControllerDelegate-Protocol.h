//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterProductOptionsSectionControllerDelegate_Protocol_h
#define PKPayLaterProductOptionsSectionControllerDelegate_Protocol_h
@import Foundation;

@protocol PKPayLaterProductOptionsSectionControllerDelegate <PKPayLaterViewControllerDelegate>
/* instance methods */
- (void)productOptionsSectionController:(id)controller didSelectFinancingOption:(id)option;
- (void)productOptionsSectionController:(id)controller didSelectPreliminaryAssessment:(id)assessment;
- (void)reloadAllSectionsAnimated:(BOOL)animated;
@end

#endif /* PKPayLaterProductOptionsSectionControllerDelegate_Protocol_h */
