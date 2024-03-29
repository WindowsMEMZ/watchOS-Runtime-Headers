//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARSyncResultStreamHelper_h
#define _EARSyncResultStreamHelper_h
@import Foundation;

#include "_EARSpeechRecognitionResultStream-Protocol.h"

@class NSArray, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface _EARSyncResultStreamHelper : NSObject<_EARSpeechRecognitionResultStream> {
  /* instance variables */
  NSObject<OS_dispatch_semaphore> *_finishSemaphore;
}

@property (readonly, nonatomic) NSMutableArray *taggedResults;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTagResults:(BOOL)results;
- (id)init;
- (void)waitForCompletion;
- (void)speechRecognizer:(id)recognizer didRecognizePartialResult:(id)result;
- (void)speechRecognizer:(id)recognizer didFinishRecognitionWithError:(id)error;
- (void)speechRecognizer:(id)recognizer didRecognizeFinalResults:(id)results;
- (id)addPartialFinalTag:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; })tag result:(id)result;
@end

#endif /* _EARSyncResultStreamHelper_h */
