//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModel : NSObject
{
    MLModel *_model;
}

+ (id)urlOfModelInThisBundle;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
// - (void).cxx_destruct;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id )arg3;
- (id)predictionFromData:(struct __CVBuffer )arg1 error:(id )arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id )arg3;
- (id)predictionFromFeatures:(id)arg1 error:(id )arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id )arg3;
- (id)initWithConfiguration:(id)arg1 error:(id )arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id )arg2;
- (id)init;

@end

