//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDocumentErrorRecoveryAttempter_h
#define UIDocumentErrorRecoveryAttempter_h
@import Foundation;

#include "UIDocument.h"

@interface UIDocumentErrorRecoveryAttempter : NSObject {
  /* instance variables */
  UIDocument *_document;
  id _wrappedRecoveryAttempter;
  id /* block */ _continuerOrNil;
  long long _silentRecoveryOptionIndex;
  id /* block */ _appModalRecoveryAttempter;
  id /* block */ _recoveryCancelerOrNil;
  struct { unsigned int x :1 attemptedRecovery; } _errorRecoveryAttempterFlags;
}

/* instance methods */
- (id)initWithDocument:(id)document wrappedRecoveryAttempter:(id)attempter;
- (id)initWithDocument:(id)document silentRecoveryOptionIndex:(unsigned long long)index appModalRecoveryAttempter:(id /* block */)attempter recoveryCanceler:(id /* block */)canceler;
- (void)dealloc;
- (BOOL)attemptRecoveryFromError:(id)error optionIndex:(unsigned long long)index;
- (BOOL)attemptSilentRecoveryFromError:(id)error error:(id *)error;
- (void)cancelRecovery;
@end

#endif /* UIDocumentErrorRecoveryAttempter_h */
