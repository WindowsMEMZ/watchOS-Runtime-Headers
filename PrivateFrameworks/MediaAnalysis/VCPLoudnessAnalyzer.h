//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPLoudnessAnalyzer_h
#define VCPLoudnessAnalyzer_h
@import Foundation;

@class AVAudioPCMBuffer, NSMutableArray;
@protocol {vector<double, std::allocator<double>>="__begin_"^d"__end_"^d"__end_cap_"{__compressed_pair<double *, std::allocator<double>>="__value_"^d}}, {vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f}};

@interface VCPLoudnessAnalyzer : NSObject {
  /* instance variables */
  AVAudioPCMBuffer *_pcmBuffer;
  long long _framePosition;
  struct LkFsMeasure { unsigned int x0; unsigned int x1; long long x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; long long x10; long long x11; unsigned int x12; unsigned int x13; unsigned int x14; f] x15[30[6] float * x16; float * x17; float * x18; struct DspLibBiquad * x19; struct DspLibBiquad * x20; } * _loudnessAnalyzer;
  struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } * _processFormat;
  float _sampleRate;
  struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _peakValues;
  struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _momentaryEnergyValues;
  struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _loudnessSampleBuffer;
  NSMutableArray *_loudnessResults;
  unsigned int _samplesFor100ms;
  struct AUOutputBL { struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; char * x1; struct AudioBufferList * x2; unsigned int x3; unsigned int x4; unsigned int x5; } * _samplesForProcessingBufferList;
}

/* instance methods */
- (id)init;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)sample andSampleBatchSize:(int)size;
- (void)dealloc;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)samples timestamp:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })timestamp;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)time;
- (id)results;
@end

#endif /* VCPLoudnessAnalyzer_h */
