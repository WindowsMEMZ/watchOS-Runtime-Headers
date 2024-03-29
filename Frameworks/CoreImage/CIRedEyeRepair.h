//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIRedEyeRepair_h
#define CIRedEyeRepair_h
@import Foundation;

@class BOOL *, NSArray;

@interface CIRedEyeRepair : NSObject {
  /* instance variables */
  BOOL ownLF;
  struct { char x0[256] char x1[32] struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } x2; int x3; int x4; struct { int x0; int x1; int x2; int x3; } x5; struct CGColorSpace * x6; unsigned int x7; int x8; int x9; BOOL x10; float x11; } * lf;
  int imageSourceType;
  struct CGImageBlockSet * blockSet;
  void * releaseMe;
  struct __CFData * dataRef;
  NSArray *faces;
  int nRepairs;
  int nextRepairTag;
  "B"redBitmaskArea"i"imageCenterX"f"imageCenterY"f"halfDiagonalSize"f}"CR"{?="minrow"i"maxrow"i"mincol"i"maxcol"i}}"BI"{?="centroid"{CGPoint="x"d"y"d}"area"i"ovalness"f"contrast"f"mincontrast"f"nborder"i"IR"{?="minrow"i"maxrow"i"mincol"i"maxcol"i}"aspectRatio"f"touchingEdge"B"localmax"i"localmaxrow"i"localmaxcol"i"localfloor"i"rgmean"f"rgstd"f"ymean"f"ystd"f}} x[32{?="tag"i"pt2"{CGPoint="x"d"y"d}"eyeCase"i"forceCase"i"npixels"i"bignpixels"i"fullNew"{?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f}"YR"{?="minrow"i"maxrow"i"mincol"i"maxcol"i}"psTemplate"{?="lo"i"med"i"hi"i"average"i}"pupilShadeAlignment"B"matchingTemplate"{?="lo"i"med"i"hi"i"average"i}"faceIndex"i"left"B"IOD"f"data"{?="origHitX"i"origHitY"i"snapHitX"i"snapHitY"i"bitmaskSeedX"i"bitmaskSeedY"i"bitmaskThreshold"i"cornealReflectionSeedX"i"cornealReflectionSeedY"i"cornealReflectionThreshold"i"align"B"mTemplate"{?="lo"i"med"i"hi"i"average"i}"existingTemplate"{?="lo"i"med"i"hi"i"average"i}"averageSkinMapY"i"characterizeCase"i"finalEyeCase"i"IOD"f"O"{?="bitmapproc_context"^v"bproc"^?"orientation"i"SNR"f"N90] repairs;
  int lastRepairTag;
  float lastRepairIOD;
  struct { int lo; int med; int hi; int average; } standardTemplate;
  int iFaceIndex;
  BOOL iLeft;
  BOOL debugRedEye;
  BOOL logRepairs;
  int redEyeThresholdKind;
  BOOL renderAlpha;
  BOOL infillBackground;
  BOOL renderSpecularShine;
  float specularSize;
  float specularSoftness;
  BOOL pupilShadeAlignment;
  BOOL autoPupilTonality;
  BOOL forceLoValue;
  int loValue;
  struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } lastClickYBitmap;
  struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } lastClickCbCrBitmap;
  int lastClickBitmapMinX;
  int lastClickBitmapMaxX;
  int lastClickBitmapMinY;
  int lastClickBitmapMaxY;
  struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } lastClickYBitmaps[3];
  struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } lastClickCbCrBitmaps[3];
  struct { int minrow; int maxrow; int mincol; int maxcol; } lastClickBitmapRects[3];
  struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } lastSearchYBitmap;
  struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } lastSearchCbCrBitmap;
  int lastSearchBitmapMinX;
  int lastSearchBitmapMaxX;
  int lastSearchBitmapMinY;
  int lastSearchBitmapMaxY;
  int nPolyPoints;
  BOOL polyClosed;
  struct CGPoint { double x; double y; } polyPoints[20];
  struct { float a; float b; float c; } polyLines[20];
  BOOL polyPointConcave[20];
  unsigned char CbCrDistanceTable[65536];
  int nLinears;
  i] x[8[3] linearCoefficients;
}

/* class methods */
+ (float)upperRepairDistanceFraction:(float)fraction;
+ (float)upperRepairDistance:(float)distance;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })supportRectangleWithPoint:(struct CGPoint { double x0; double x1; })point imageSize:(struct CGSize { double x0; double x1; })size IOD:(float)iod;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })supportRectangleWithRepair:(id)repair imageSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })supportRectangleWithFaceArray:(id)array imageSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (BOOL)getBlockSetWithImage:(struct CGImage *)image into:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)into width:(unsigned long long)width height:(unsigned long long)height;
- (BOOL)getDataProviderBytePtrWithImage:(struct CGImage *)image into:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)into width:(unsigned long long)width height:(unsigned long long)height;
- (BOOL)getDataProviderCopyWithImage:(struct CGImage *)image into:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)into;
- (void)setColorSpace:(struct CGColorSpace *)space;
- (id)initWithCGImage:(struct CGImage *)cgimage cameraModel:(id)model;
- (struct CGImage *)createRepairedImage;
- (void)repairExternalBuffer;
- (void)initializeNonDebugVariables;
- (id)initWithDeskView:(id)view andFrame:(struct { char x0[256] char x1[32] struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } x2; int x3; int x4; struct { int x0; int x1; int x2; int x3; } x5; struct CGColorSpace * x6; unsigned int x7; int x8; int x9; BOOL x10; float x11; } *)frame;
- (id)initWithFrameExternalBuffer:(struct { char x0[256] char x1[32] struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } x2; int x3; int x4; struct { int x0; int x1; int x2; int x3; } x5; struct CGColorSpace * x6; unsigned int x7; int x8; int x9; BOOL x10; float x11; } *)buffer;
- (id)initWithExternalBuffer:(char *)buffer size:(struct CGSize { double x0; double x1; })size rowBytes:(unsigned long long)bytes;
- (id)initWithExternalBuffer:(char *)buffer subRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectangle fullSize:(struct CGSize { double x0; double x1; })size rowBytes:(unsigned long long)bytes cameraModel:(id)model;
- (void)dealloc;
- (BOOL)debug;
- (void)setDebug:(BOOL)debug;
- (BOOL)logRepairs;
- (void)setLogRepairs:(BOOL)repairs;
- (int)redEyeThresholdKind;
- (void)setRedEyeThresholdKind:(int)kind;
- (BOOL)renderAlpha;
- (void)setRenderAlpha:(BOOL)alpha;
- (BOOL)infillBackground;
- (void)setInfillBackground:(BOOL)background;
- (BOOL)renderSpecularShine;
- (void)setRenderSpecularShine:(BOOL)shine;
- (float)specularSize;
- (void)setSpecularSize:(float)size;
- (float)specularSoftness;
- (void)setSpecularSoftness:(float)softness;
- (BOOL)pupilShadeAlignment;
- (void)setPupilShadeAlignment:(BOOL)alignment;
- (BOOL)autoPupilTonality;
- (void)setAutoPupilTonality:(BOOL)tonality;
- (BOOL)forceLoValue;
- (void)setForceLoValue:(BOOL)value;
- (int)loValue;
- (void)setLoValue:(int)value;
- (struct { int x0; int x1; int x2; int x3; })standardTemplate;
- (id)faces;
- (struct { int x0; struct CGPoint { double x0; double x1; } x1; int x2; int x3; int x4; int x5; struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } x6; struct { int x0; int x1; int x2; int x3; } x7; struct { int x0; int x1; int x2; int x3; } x8; BOOL x9; struct { int x0; int x1; int x2; int x3; } x10; int x11; BOOL x12; float x13; struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; BOOL x10; struct { int x0; int x1; int x2; int x3; } x11; struct { int x0; int x1; int x2; int x3; } x12; int x13; int x14; int x15; float x16; struct { void * x0; undefined * x1; int x2; float x3; BOOL x4; int x5; float x6; float x7; float x8; } x17; struct { int x0; int x1; int x2; int x3; } x18; } x14; struct { struct CGPoint { double x0; double x1; } x0; int x1; float x2; float x3; float x4; int x5; struct { int x0; int x1; int x2; int x3; } x6; float x7; BOOL x8; int x9; int x10; int x11; int x12; float x13; float x14; float x15; float x16; } x15; } *)repairs;
- (int)nRepairs;
- (int)lastRepairTag;
- (int)format;
- (void)undoRepair:(int)repair;
- (int)averageValueFromY:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)y withinSkinMask:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)mask butOutsideAlpha:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)alpha;
- (float)upperRepairSizeFraction:(float)fraction;
- (float)lowerRepairSizeFraction:(float)fraction;
- (float)upperRepairSize:(float)size;
- (float)lowerRepairSize:(float)size;
- (BOOL)computeTrimmedBitmaps:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)bitmaps newY:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)y newCbCr:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)cr IR:(struct { int x0; int x1; int x2; int x3; })ir newTrimY:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)y newTrimCbCr:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)cr returningYR:(struct { int x0; int x1; int x2; int x3; } *)yr andCbCrR:(struct { int x0; int x1; int x2; int x3; } *)r;
- (BOOL)extractReusableAlignedBitmapsAroundPoint:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)point YR:(struct { int x0; int x1; int x2; int x3; })yr subYBitmap:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)ybitmap subCbCrBitmap:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)bitmap;
- (int)redEyeRemovalWithPoint:(struct CGPoint { double x0; double x1; })point alignPupilShades:(BOOL)shades matching:(struct { int x0; int x1; int x2; int x3; })matching force:(int)force IOD:(float)iod tap:(BOOL)tap;
- (struct { int x0; struct CGPoint { double x0; double x1; } x1; int x2; int x3; int x4; int x5; struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } x6; struct { int x0; int x1; int x2; int x3; } x7; struct { int x0; int x1; int x2; int x3; } x8; BOOL x9; struct { int x0; int x1; int x2; int x3; } x10; int x11; BOOL x12; float x13; struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; BOOL x10; struct { int x0; int x1; int x2; int x3; } x11; struct { int x0; int x1; int x2; int x3; } x12; int x13; int x14; int x15; float x16; struct { void * x0; undefined * x1; int x2; float x3; BOOL x4; int x5; float x6; float x7; float x8; } x17; struct { int x0; int x1; int x2; int x3; } x18; } x14; struct { struct CGPoint { double x0; double x1; } x0; int x1; float x2; float x3; float x4; int x5; struct { int x0; int x1; int x2; int x3; } x6; float x7; BOOL x8; int x9; int x10; int x11; int x12; float x13; float x14; float x15; float x16; } x15; } *)repairWithTag:(int)tag;
- (int)redoRepairWithTag:(int)tag IOD:(float)iod;
- (void)redoLastRepair;
- (float)extractAverageFaceY:(struct { BOOL x0; int x1; int x2; float x3; float x4; int x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; int x13; int x14; } *)y contrast:(float *)contrast faceIndex:(int)index;
- (float)confidenceWithIOD:(float)iod repair:(int)repair andProminenceDifference:(int)difference;
- (void)insertIntoProminenceVettingHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper max:(int)max outside:(int)outside confidence:(float)confidence distance:(float)distance row:(int)row column:(int)column IOD:(float)iod;
- (BOOL)gatherProminencesWithC:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)c MC:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)mc maxwindowsize:(int)maxwindowsize repairsize:(int)repairsize IR:(struct { int x0; int x1; int x2; int x3; })ir fr:(struct { BOOL x0; int x1; int x2; float x3; float x4; int x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; int x13; int x14; } *)fr intoHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper faceIndex:(int)index left:(BOOL)left coss:(float x[10])coss sins:(float x[10])sins bitmapName:(char *)name;
- (BOOL)gatherProminencesWithC:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)c MC:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)mc altC:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)c altMC:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)mc maxwindowsize:(int)maxwindowsize repairsize:(int)repairsize IR:(struct { int x0; int x1; int x2; int x3; })ir fr:(struct { BOOL x0; int x1; int x2; float x3; float x4; int x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; int x13; int x14; } *)fr intoHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper faceIndex:(int)index left:(BOOL)left;
- (BOOL)extractAndGatherProminencesWithRect:(struct { int x0; int x1; int x2; int x3; })rect face:(struct { BOOL x0; int x1; int x2; float x3; float x4; int x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; int x13; int x14; } *)face faceIndex:(int)index left:(BOOL)left maxwindowsize:(float)maxwindowsize repairsize:(float)repairsize returningRedHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper whiteHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper redChannel:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)channel redChannelMask:(struct { char * x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)mask;
- (struct { int x0; int x1; BOOL x2; BOOL x3; float x4; int x5; int x6; int x7; int x8; })repairDecisionWithFaceRecord:(struct { BOOL x0; int x1; int x2; float x3; float x4; int x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; int x13; int x14; } *)record left:(BOOL)left redHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper whiteHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper;
- (int)applyEyeRepairWithEye:(struct { int x0; int x1; BOOL x2; BOOL x3; float x4; int x5; int x6; int x7; int x8; } *)eye left:(BOOL)left IOD:(float)iod autoPupilTonality:(BOOL)tonality match:(struct { int x0; int x1; int x2; int x3; } *)match faceIndex:(int)index whiteHopper:(struct { int x0; struct { float x10; int x1; int x2; float x3; float x4; float x5; int x6; int x7; float x8; } x[4] } *)hopper;
- (void)autoRepairExtractAndSearchLeft:(struct { int x0; int x1; int x2; int x3; })left right:(struct { int x0; int x1; int x2; int x3; })right data:(struct { BOOL x0; int x1; int x2; float x3; float x4; int x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; int x13; int x14; } *)data repairSize:(float)size autoPupilTonality:(BOOL)tonality faceIndex:(int)index;
- (int)distanceMaskFromPolyToCb:(int)cb Cr:(int)cr;
- (void)prepareLineFunctions;
- (void)skinInit;
- (int)redEyeRemovalWithData:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; BOOL x10; struct { int x0; int x1; int x2; int x3; } x11; struct { int x0; int x1; int x2; int x3; } x12; int x13; int x14; int x15; float x16; struct { void * x0; undefined * x1; int x2; float x3; BOOL x4; int x5; float x6; float x7; float x8; } x17; struct { int x0; int x1; int x2; int x3; } x18; })data;
- (void)autoRepairWithFaceArray:(id)array;
- (id)repairArray;
- (BOOL)getFloat:(float *)float d:(id)d s:(id)s;
- (BOOL)getInt:(int *)int d:(id)d s:(id)s;
- (BOOL)getBool:(BOOL *)bool d:(id)d s:(id)s;
- (void)orientRectangleMinX:(float *)x maxX:(float *)x minY:(float *)y maxY:(float *)y;
- (void)orientPointX:(float *)x Y:(float *)y;
- (void)executeRepair:(id)repair;
- (void)executeRepairArray:(id)array;
- (void)setFaceIndex:(int)index;
- (void)setLeft:(BOOL)left;
@end

#endif /* CIRedEyeRepair_h */
