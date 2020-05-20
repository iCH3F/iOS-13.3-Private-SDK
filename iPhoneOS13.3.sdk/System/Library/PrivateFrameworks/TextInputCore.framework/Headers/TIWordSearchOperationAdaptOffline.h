//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class NSString, TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation
{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
    NSString *_paragraph;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *paragraph; // @synthesize paragraph=_paragraph;
@property(copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
// - (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4;

@end
