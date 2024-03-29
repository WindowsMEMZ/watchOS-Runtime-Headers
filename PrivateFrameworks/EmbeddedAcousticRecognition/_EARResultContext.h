//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARResultContext_h
#define _EARResultContext_h
@import Foundation;

#include "_EARSpeechRecognitionResultPackage.h"

@class NSDictionary;
@protocol struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; }, struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper * x0; struct __shared_weak_count * x1; }, struct vector<double, std::allocator<double>> { double * x0; double * x1; struct __compressed_pair<double *, std::allocator<double>> { double * x0; } x2; }, struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void * x0; void * x1; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void * x0; } x2; }, {basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}, {shared_ptr<EARContinuousListeningResultHelper>="__ptr_"^{EARContinuousListeningResultHelper}"__cntrl_"^{__shared_weak_count}}, {vector<double, std::allocator<double>>="__begin_"^d"__end_"^d"__end_cap_"{__compressed_pair<double *, std::allocator<double>>="__value_"^d}}, {vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>>="__value_"^v}};

@interface _EARResultContext : NSObject

@property (nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } prevBestRecogText;
@property (nonatomic) unsigned long long countOfIsFinalFalseAlreadyWritten;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackage;
@property (retain, nonatomic) NSDictionary *prevMuxPackages;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization;
@property (nonatomic) BOOL anyResults;
@property (nonatomic) struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper * x0; struct __shared_weak_count * x1; } continuousListeningResultHelper;
@property (readonly, nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void * x0; void * x1; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void * x0; } x2; } partialResults;
@property (readonly, nonatomic) unsigned long long partialResultIndexOffset;
@property (nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void * x0; void * x1; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void * x0; } x2; } loggableConcatResult;
@property (nonatomic) struct vector<double, std::allocator<double>> { double * x0; double * x1; struct __compressed_pair<double *, std::allocator<double>> { double * x0; } x2; } loggableConcatCosts;

/* instance methods */
- (void)incrementCountOfIsFinalFalseAlreadyWritten;
- (void)addPartialResultToContext:(const void *)context;
- (void)resetPartialResultContext;
- (id)description;
- (void)updateLoggableResultWithCurrentResult:(const void *)result currentCosts:(const void *)costs startMilliseconds:(unsigned int)milliseconds;
@end

#endif /* _EARResultContext_h */
