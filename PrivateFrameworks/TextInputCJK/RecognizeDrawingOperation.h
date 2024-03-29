//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef RecognizeDrawingOperation_h
#define RecognizeDrawingOperation_h
@import Foundation;

#include "NSOperation.h"
#include "TIInputManagerHandwriting.h"

@class CHRecognizer, NSArray, NSLocale, NSString, TIHandwritingStrokes;

@interface RecognizeDrawingOperation : NSOperation {
  /* instance variables */
  TIHandwritingStrokes *_strokes;
  NSLocale *_recognitionLanguage;
  TIInputManagerHandwriting *_im;
}

@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) NSArray *stickers;
@property (retain, nonatomic) TIInputManagerHandwriting *manager;
@property (retain, nonatomic) NSString *history;
@property (retain, nonatomic) CHRecognizer *recognizer;

/* class methods */
+ (int)recognitionContentTypeForKeyboardState:(id)state;
+ (int)capitalizationModeForKeyboardAutoCapitalizationType:(unsigned long long)type;
+ (int)autoCorrectionModeForKeyboardAutoCorrectionType:(unsigned long long)type;
+ (id)textRecognitionResultsForDrawing:(id)drawing withRecognizer:(id)recognizer keyboardState:(id)state history:(id)history shouldCancel:(id /* block */)cancel;
+ (id)recognitionResultsForDrawing:(id)drawing withRecognizer:(id)recognizer history:(id)history shouldCancel:(id /* block */)cancel;
+ (id)drawingWithStrokes:(id)strokes;

/* instance methods */
- (id)initWithInputManager:(id)manager strokes:(id)strokes history:(id)history;
- (void)dealloc;
- (void)main;
@end

#endif /* RecognizeDrawingOperation_h */
