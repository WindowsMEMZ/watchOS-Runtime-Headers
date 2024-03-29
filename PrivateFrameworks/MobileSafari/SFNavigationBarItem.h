//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFNavigationBarItem_h
#define SFNavigationBarItem_h
@import Foundation;

@class NSHashTable, NSString, WBSFluidProgressController;
@protocol WBSFluidProgressStateSource;

@interface SFNavigationBarItem : NSObject {
  /* instance variables */
  BOOL _temporarilySuppressText;
  NSHashTable *_observers;
  BOOL _showsReaderAvailabilityTextWhenReplacingDomain;
  BOOL _showsTranslationAvailabilityTextWhenReplacingDomain;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *textWhenExpanded;
@property (readonly, nonatomic) unsigned long long startIndexOfTextInExpandedText;
@property (copy, nonatomic) NSString *customPlaceholderText;
@property (nonatomic) BOOL showsLockIcon;
@property (nonatomic) BOOL showsSearchIndicator;
@property (nonatomic) BOOL showsStopReloadButtons;
@property (nonatomic) BOOL stopReloadButtonShowsStop;
@property (nonatomic) BOOL textHasEVCertificateTint;
@property (nonatomic) BOOL lockIconHasEVCertificateTint;
@property (nonatomic) BOOL showsPageFormatButton;
@property (nonatomic) BOOL readerButtonSelected;
@property (nonatomic) BOOL showsReaderButton;
@property (readonly, nonatomic) BOOL didFinishShowingReaderAvailabilityLabel;
@property (readonly, nonatomic) BOOL didFinishShowingTranslationAvailabilityLabel;
@property (nonatomic) BOOL showsVoiceSearchButton;
@property (nonatomic) BOOL overrideBarStyleForSecurityWarning;
@property (retain, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (weak) NSObject<WBSFluidProgressStateSource> *fluidProgressStateSource;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (readonly, nonatomic) long long securityAnnotation;
@property (readonly, nonatomic) BOOL showsSecurityAnnotation;
@property (readonly, nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;
@property (readonly, nonatomic) BOOL menuButtonSelected;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)setText:(id)text textWhenExpanded:(id)expanded startIndex:(unsigned long long)index;
- (void)setTemporarilySuppressText:(BOOL)text;
- (void)setDidFinishShowingAvailabilityLabel:(BOOL)label ofType:(long long)type;
- (void)setShowsReaderButton:(BOOL)button showsAvailabilityText:(BOOL)text;
- (BOOL)showsReaderAvailabilityTextForStyle:(long long)style;
- (BOOL)_showsAvailabilityTextForType:(long long)type style:(long long)style;
- (void)setSecurityAnnotation:(long long)annotation hasFocusedInputFieldOnCurrentPage:(BOOL)page;
@end

#endif /* SFNavigationBarItem_h */
