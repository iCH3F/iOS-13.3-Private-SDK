//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, _CDPModelTuningState, _CDPSimpleModelParameterManagerTuningValue;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>
{
    _CDPSimpleModelParameterManagerTuningValue *_previousBestTuningValue;
    NSMutableArray *_tuningValues;
    _CDPModelTuningState *_lastTuningState;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) _CDPModelTuningState *lastTuningState; // @synthesize lastTuningState=_lastTuningState;
@property(retain, nonatomic) NSMutableArray *tuningValues; // @synthesize tuningValues=_tuningValues;
@property(retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue; // @synthesize previousBestTuningValue=_previousBestTuningValue;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

